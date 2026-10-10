# Current official release — 125A Midiator V1.0.0

| Field | Official release |
| --- | --- |
| Product | 125A Midiator |
| Product version | **1.0.0** |
| Windows x64 VST3 build | **#268** |
| Verified development source SHA | `0a656a4b8631db165191391c4a1bbdfd82b26fa6` |
| Original verified CI run | https://github.com/challanger2000/125A-Midiator/actions/runs/38020824060 |
| Exact validated Windows plugin | `125A Midiator.vst3` |
| Tested source branch | `challanger2000/125A-Midiator:development` |
| VST3 processor state version | **17** (internal only) |
| Automated tests | **10/10 PASS** |
| Steinberg VST3 Validator | **47/47 PASS** |
| 125A Plugin Tester | **PASS (user-confirmed)** |
| GUI | **PASS (Studio One screenshot inspection)** |

This FINAL repository contains a cleaned **source snapshot** of that commit plus publication documents and a manually triggered verification workflow. Source contents under `src/`, `tests/` and the relevant build files have not been modified relative to the verified original.

### Distribution principles

- `FINAL` is a release/repository designation, **never** an on-screen plug-in version suffix.
- Ship the full `125A Midiator.vst3` bundle, including `Contents/Resources`.
- No demonstration time-limit, activation workaround, false platform certification, or unverified MIDI-router claims.
- Windows package is based on the already-validated CI output; manual rebuilds are not automatically treated as officially validated customer binaries.
- Do not publish an unverified subsequent development commit as V1.0.0.
