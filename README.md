# 125A Midiator — Official Final Repository / Offizielles Final-Repository

**Current release / Aktuelle Version:** **V1.0.0** · Windows x64 · VST3 · release build **#268**.

This is the **authoritative, cleaned source repository** for the released 125A Midiator V1.0.0.  
Dies ist das **maßgebliche, bereinigte Quellcode-Repository** für die freigegebene Version.

> **Looking for the installer / Käuferdownload?** The fully packaged, verified Gumroad ZIP is **not stored in this Git repository** and there is currently **no GitHub Release download**. It is prepared separately for the Gumroad product. Its exact filename and SHA-256 checksum are recorded in [GUMROAD-RELEASE.md](GUMROAD-RELEASE.md). Do **not** mistake a new Actions artifact or a source-code ZIP for that approved buyer package.
>
> **Du suchst das fertige Plugin?** Das vollständige, geprüfte Gumroad-Käufer-ZIP liegt **nicht in diesem Git-Repository**. Es ist separat für Gumroad vorbereitet. Name und Prüfsumme stehen in [GUMROAD-RELEASE.md](GUMROAD-RELEASE.md). Weder ein GitHub-Quellcode-ZIP noch ein späterer Test-Build ist automatisch die freigegebene Käuferdatei.

## Start here / Wegweiser

| I want to… / Ich möchte… | Open / Hier beginnen |
| --- | --- |
| Install the plugin / Plugin installieren | [Installation DE](docs/INSTALL_DE.md) · [Installation EN](docs/INSTALL_EN.md) |
| Learn the controls and MIDI routing / Bedienung und Routing | [Bedienungsanleitung DE](docs/MANUAL_DE.md) · [User manual EN](docs/MANUAL_EN.md) |
| See what V1.0.0 actually includes / Funktionsumfang | [Release notes](RELEASE-NOTES.md) |
| Verify current version, exact source, tests / Freigabestand prüfen | [CURRENT-RELEASE.md](CURRENT-RELEASE.md) |
| Verify the customer ZIP / Gumroad-Datei prüfen | [GUMROAD-RELEASE.md](GUMROAD-RELEASE.md) |
| Build from the source / Quellcode bauen | [BUILD_FROM_SOURCE.md](docs/BUILD_FROM_SOURCE.md) |
| Check third-party notices / Drittlizenzen | [THIRD_PARTY_NOTICES.md](docs/THIRD_PARTY_NOTICES.md) |

**Important historical note / Wichtiger Hinweis:** [docs/V1_SPEC.md](docs/V1_SPEC.md) is an **early working draft**, written when the product was guitar-focused. It is preserved as project history, **not** the final V1.0.0 feature specification. For the shipped feature set, use the release notes and current manuals.

## What the plugin does / Was das Plugin kann

125A Midiator generates coordinated **MIDI events**, **not audio**, for Metal, NDH, Industrial and Dark Rock. It has five separate output event buses: **Guitar, Bass, Drums, Pads / Choir, Synth**. Each requires a compatible external sound generator.

- 12 metal/rock styles and seven scale/mode choices.
- 1, 2, 4, 8 or 16 bars; **4/4** and a sixteenth-note grid.
- FREE, INTRO, VERSE, PRE, CHORUS, BREAKDOWN and OUTRO sections. These describe a generated phrase; **there is no automatic full-song arranger**.
- NEW RIFF / VARIATION; independent OPEN / LOCK states for all five roles.
- Guitar articulation, bass/drum/pad/synth shaping, drum-map presets and humanization.
- Manual or MIDI-derived root, TRANSPORT or MIDI NOTE trigger, DAW synchronization.
- Main / Details editor, **80% / 100% / 120% / 150%** zoom and DAW project-state recall.

**Host caveat / DAW-Einschränkung:** VST3 compatibility does **not** guarantee that the DAW exposes and routes all five MIDI output buses. A host must specifically support routing plugin-generated MIDI to receiving instruments. This release makes **no universal Cubase, Studio One or other host routing certification** claim.

## Repository map / Ordnerstruktur

| Location | Contents / Bedeutung |
| --- | --- |
| `src/PluginProcessor.cpp` and `src/PluginProcessor.h` | VST3 processor, MIDI buses, transport, state and controller/editor integration |
| `src/GuitarBrain.cpp`, `src/BassBrain.cpp`, `src/DrumBrain.cpp`, `src/PadBrain.cpp`, `src/SynthBrain.cpp` | Musical-generation engines for the five roles |
| `src/RiffEngine.h`, `src/SectionProfiles.h`, `src/TonalRetune.h` | Shared musical and tonal structures |
| `src/resource/` | GUI layout and graphics used by the verified source |
| `tests/` | Musical, processor, MIDI-event, state, UI and regression tests |
| `docs/` | Installation, operating manuals, build instructions, notices and historical draft |
| `.github/workflows/build-windows.yml` | **Manual-only** Windows build/tests/Validator workflow; not a publishing workflow |
| `scripts/` | Branding rendering utility (not needed for installation) |

## Release provenance / Nachweise

| Item | Verified release reference |
| --- | --- |
| Product version | **V1.0.0** (no `FINAL` suffix in the plugin GUI) |
| Source commit | `0a656a4b8631db165191391c4a1bbdfd82b26fa6` from `challanger2000/125A-Midiator:development` |
| Original verified workflow | [Build #268](https://github.com/challanger2000/125A-Midiator/actions/runs/38020824060) |
| Automated test suites | **10/10 PASS** |
| Steinberg Validator | **47/47 PASS** |
| 125A Plugin Tester | **PASS**, as confirmed in the release handoff |
| Shipping buyer ZIP SHA-256 | `bd28e5769a998afbe41811d2f3cd00a7b5f2af2b4402cdce8282e8cc4dfd716e` |

**Source integrity:** The 34 development files shared with this Final repository (excluding its intentionally curated README and manual-only workflow) were imported byte-for-byte from the verified commit. The original release VST3 itself has **not** been replaced with a new build. Full binary hash, package contents and seller-vs-buyer ZIP distinction: [GUMROAD-RELEASE.md](GUMROAD-RELEASE.md).

## For maintainers / Für Entwickler

- Use the **Final** repository as the authoritative home for future maintenance, first checking [CURRENT-RELEASE.md](CURRENT-RELEASE.md).
- Develop new revisions on an appropriate **version branch**, **not directly on `main`**. Authorized 125A maintainers also follow the **internal/private** Engineering repository and its mandatory `START-HERE.md`; public readers do not need access to that internal repository.
- Windows builds can be generated with Visual Studio 2022 and the pinned Steinberg SDK as explained in [Build from source](docs/BUILD_FROM_SOURCE.md). GitHub Actions runs **only when manually dispatched**, to conserve build budget.
- A fresh compilation or manually run CI job **does not automatically become the shipping V1.0.0 binary**. Passing source tests alone does not replace the original release QA and real DAW checks.
- Only **Windows x64 VST3** is released. No macOS binary and no all-DAW MIDI routing guarantee.

Copyright © 2026 125A Systems. **All rights reserved.** Public source availability does not grant an open-source license.
