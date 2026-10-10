# 125A Midiator · V1.0.0

**125A Midiator** is a Windows x64 VST3 MIDI generator for metal, NDH, industrial and dark-rock compositions. It generates coordinated MIDI parts for five separate event-output buses: **Guitar, Bass, Drums, Pads / Choir and Synth**. It contains **no audio generator**, so connect the MIDI outputs to external instrument plug-ins in a compatible DAW.

## Release

- **Product version:** V1.0.0 (the GUI never includes the word FINAL).
- **Release build:** #268.
- **Release source:** `0a656a4b8631db165191391c4a1bbdfd82b26fa6` from `challanger2000/125A-Midiator` / `development`.
- **QA:** 10/10 automated test suites; Steinberg Validator 47/47; Windows VST3 package validation; user-confirmed 125A Plugin Tester PASS and GUI inspection.
- **Platform:** Windows x64, VST3. No macOS build or host-wide MIDI routing certification is claimed.

## Features

- Five dedicated, independently routable MIDI event outputs.
- 12 metal/rock styles including NDH / Industrial, Groove, Death, Melodic Death, Doom and Djent / Progressive.
- Seven scales/modes including Phrygian, Natural Minor, Harmonic Minor and Phrygian Dominant.
- Phrase length: 1, 2, 4, 8 or 16 bars; **4/4** time signature and sixteenth-note grid.
- Sections: FREE, INTRO, VERSE, PRE, CHORUS, BREAKDOWN, OUTRO (selected individually; no automatic full-song arranger).
- NEW RIFF and VARIATION with independently lockable Guitar / Bass / Drums / Pads / Synth roles.
- Live instrument shaping, power chords, palm-mute-velocity threshold, fill-intensity, drum map selection and humanization.
- Manual or MIDI-derived Root; TRANSPORT or MIDI NOTE trigger; DAW sync.
- GUI Zoom: 80%, 100%, 120%, 150%; project state stores musical arrangement and zoom.

## Installation & use

See [Installation (DE)](docs/INSTALL_DE.md) / [Installation (EN)](docs/INSTALL_EN.md), and [Manual (DE)](docs/MANUAL_DE.md) / [Manual (EN)](docs/MANUAL_EN.md).

See also [Gumroad distribution manifest](GUMROAD-RELEASE.md), [release notes](RELEASE-NOTES.md) and [third-party license notices](docs/THIRD_PARTY_NOTICES.md).

Install the complete `125A Midiator.vst3` folder in `C:\\Program Files\\Common Files\\VST3\\`, then rescan VST3 plug-ins in your host. The binary is supplied separately as part of the official customer ZIP; the source repository is not an installer.

**Important:** Not every DAW exposes all five VST3 MIDI outputs to other instruments. MIDI-only plug-in support and routing must be checked against the chosen host; do not assume compatibility from VST3 support alone.

## Building from source

The source code under `src/`, `tests/`, `scripts/` and the CMake files is a cleaned snapshot of the verified release. Windows CMake uses the Steinberg VST3 SDK (tag `v3.8.1_build_84`) via FetchContent. See [Build instructions](docs/BUILD_FROM_SOURCE.md). The included build workflow can be triggered manually.

## Release integrity

The published Windows VST3 is the validated binary from development GitHub Actions run [#268](https://github.com/challanger2000/125A-Midiator/actions/runs/38020824060), not a recompilation from an untested branch. See [CURRENT-RELEASE.md](CURRENT-RELEASE.md).

Copyright © 2026 125A Systems. No open-source license is granted by publication of this source repository.
