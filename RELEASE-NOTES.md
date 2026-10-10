# 125A Midiator V1.0.0 — Release notes

**First official Windows x64 VST3 release.**

### Included
- Five independent VST3 MIDI output buses (Guitar, Bass, Drums, Pads, Synth).
- Metal-centric musical generation for 12 styles, seven scales and 1/2/4/8/16-bar phrases in 4/4.
- Independent role locks, NEW RIFF / VARIATION, live bass/drum/pad/synth shaping, humanization and verified drum maps.
- MIDI-derived absolute guitar root including octave; selectable MIDI-note or DAW-transport trigger.
- Reversible root transposition, including extreme MIDI pitch bounds, with reference-state persistence across project saves.
- Versioned V17 project state; historical V1–V16 project states remain readable.
- Two-page high-readability interface, 80/100/120/150% zoom, correctly aligned logo.

### Qualification
Build #268: 10/10 CTest PASS; Steinberg Validator 47/47 PASS; staging/package contract PASS; 125A Plugin Tester PASS (user reported); GUI inspection PASS. These results do **not** certify every DAW's multi-output MIDI routing or macOS compatibility.

### Limitations
- No built-in audio instrument or drum samples.
- 4/4 only; 1/16 sequencer grid.
- Each host must support routing plug-in-generated MIDI events to external instruments.
- Only Windows x64 VST3 is shipped in the current release.
