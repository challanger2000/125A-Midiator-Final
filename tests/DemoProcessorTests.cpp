#include "PluginProcessor.h"

#include "base/source/fobject.h"
#include "pluginterfaces/vst/ivstevents.h"
#include "pluginterfaces/vst/ivstprocesscontext.h"

#include <cstdlib>
#include <iostream>
#include <vector>

using namespace Steinberg;
using namespace Steinberg::Vst;

namespace {

void require(bool condition, const char* message) {
    if (!condition) {
        std::cerr << "FAIL: " << message << "\n";
        std::exit(1);
    }
}

struct EventList final : FObject, IEventList {
    std::vector<Event> events;

    int32 PLUGIN_API getEventCount() SMTG_OVERRIDE {
        return static_cast<int32>(events.size());
    }

    tresult PLUGIN_API getEvent(
        int32 index,
        Event& event) SMTG_OVERRIDE {

        if (index < 0 ||
            index >= static_cast<int32>(events.size())) {
            return kInvalidArgument;
        }

        event = events[static_cast<size_t>(index)];
        return kResultOk;
    }

    tresult PLUGIN_API addEvent(
        Event& event) SMTG_OVERRIDE {

        events.push_back(event);
        return kResultOk;
    }

    OBJ_METHODS(EventList, FObject)

    DEFINE_INTERFACES
        DEF_INTERFACE(IEventList)
    END_DEFINE_INTERFACES(FObject)

    REFCOUNT_METHODS(FObject)
};

ProcessContext makeContext(
    double projectTimeQn) {

    ProcessContext context {};
    context.sampleRate = 48000.0;
    context.tempo = 120.0;
    context.projectTimeMusic = projectTimeQn;
    context.projectTimeSamples =
        static_cast<int64>(
            projectTimeQn * 60.0 /
            context.tempo *
            context.sampleRate);
    context.timeSigNumerator = 4;
    context.timeSigDenominator = 4;
    context.barPositionMusic =
        static_cast<double>(
            static_cast<long long>(
                projectTimeQn / 4.0)) *
        4.0;
    context.state =
        ProcessContext::kTempoValid |
        ProcessContext::kProjectTimeMusicValid |
        ProcessContext::kProjectTimeSamplesValid |
        ProcessContext::kBarPositionValid |
        ProcessContext::kTimeSigValid |
        ProcessContext::kPlaying;

    return context;
}

ProcessData makeData(
    ProcessContext& context,
    EventList& output,
    int32 samples) {

    ProcessData data {};
    data.processMode = kRealtime;
    data.symbolicSampleSize = kSample32;
    data.numSamples = samples;
    data.processContext = &context;
    data.outputEvents = &output;
    return data;
}

bool hasNoteOn(const EventList& list) {
    for (const auto& event : list.events) {
        if (event.type == Event::kNoteOnEvent)
            return true;
    }
    return false;
}

} // namespace

int main() {
    MidiatorProcessor processor;

    require(
        processor.setProcessing(true) == kResultOk,
        "demo processor must enter processing state");

    double qn = 0.0;
    bool sawPreLimitNote = false;

    // 29 seconds of valid host playback.
    for (int second = 0; second < 29; ++second) {
        auto context = makeContext(qn);
        EventList output;
        auto data = makeData(
            context,
            output,
            48000);

        require(
            processor.process(data) == kResultOk,
            "pre-limit second must process");

        sawPreLimitNote =
            sawPreLimitNote ||
            hasNoteOn(output);

        qn += 2.0; // 120 BPM = 2 quarter notes / second
    }

    require(
        sawPreLimitNote,
        "demo must emit MIDI before the 30-second limit");

    // This two-second block crosses the limit at sample 48000.
    auto crossingContext =
        makeContext(qn);
    EventList crossingOutput;
    auto crossingData =
        makeData(
            crossingContext,
            crossingOutput,
            96000);

    require(
        processor.process(crossingData) == kResultOk,
        "crossing block must process");

    for (const auto& event : crossingOutput.events) {
        require(
            event.sampleOffset <= 48000,
            "no MIDI event may occur after the exact demo cutoff");

        if (event.sampleOffset >= 48000) {
            require(
                event.type == Event::kNoteOffEvent,
                "the cutoff sample may contain cleanup NoteOff only");
        }
    }

    // Subsequent valid playback is blocked until a new plugin instance.
    qn += 4.0;
    auto expiredContext =
        makeContext(qn);
    EventList expiredOutput;
    auto expiredData =
        makeData(
            expiredContext,
            expiredOutput,
            48000);

    require(
        processor.process(expiredData) == kResultOk,
        "expired demo block must remain host-safe");

    require(
        !hasNoteOn(expiredOutput),
        "expired demo must not emit new MIDI NoteOns");

    std::cout
        << "Midiator 30-second processor demo test: PASS\n";

    return 0;
}
