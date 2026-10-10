#pragma once

#include <algorithm>
#include <cmath>
#include <cstdint>

namespace midiator {

class DemoTimer final {
public:
    void configure(double sampleRate, bool licensed) noexcept {
        licensed_ = licensed;
        sampleRate_ = std::isfinite(sampleRate) && sampleRate > 1000.0
            ? sampleRate : 44100.0;
        limitSamples_ = static_cast<std::uint64_t>(
            std::llround(sampleRate_ * 30.0));
        elapsedSamples_ = 0;
    }

    void setSampleRate(double sampleRate) noexcept {
        if (std::isfinite(sampleRate) && sampleRate > 1000.0) {
            if (sampleRate_ != sampleRate) {
                const double elapsedSeconds =
                    sampleRate_ > 0.0
                        ? static_cast<double>(elapsedSamples_) / sampleRate_
                        : 0.0;
                sampleRate_ = sampleRate;
                limitSamples_ = static_cast<std::uint64_t>(
                    std::llround(sampleRate_ * 30.0));
                elapsedSamples_ = std::min(
                    limitSamples_,
                    static_cast<std::uint64_t>(
                        std::llround(elapsedSeconds * sampleRate_)));
            }
        }
    }

    int allowedSamples(bool playing, int requestedSamples) noexcept {
        if (licensed_ || !playing || requestedSamples <= 0)
            return requestedSamples;

        if (elapsedSamples_ >= limitSamples_)
            return 0;

        const auto remaining =
            limitSamples_ - elapsedSamples_;
        const auto allowed = static_cast<std::uint64_t>(
            std::min<std::uint64_t>(
                remaining,
                static_cast<std::uint64_t>(requestedSamples)));

        elapsedSamples_ += allowed;
        return static_cast<int>(allowed);
    }

    bool expired() const noexcept {
        return !licensed_ &&
               elapsedSamples_ >= limitSamples_;
    }

    bool licensed() const noexcept {
        return licensed_;
    }

private:
    bool licensed_ {false};
    double sampleRate_ {44100.0};
    std::uint64_t limitSamples_ {1323000u};
    std::uint64_t elapsedSamples_ {0u};
};

} // namespace midiator
