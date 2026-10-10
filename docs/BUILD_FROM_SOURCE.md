# Building 125A Midiator V1.0.0

The source tree is a frozen snapshot from development commit `0a656a4b8631db165191391c4a1bbdfd82b26fa6`. The manually triggered GitHub Actions workflow verifies builds without spending Actions minutes on ordinary documentation commits.

## Windows prerequisites
- Visual Studio 2022 with C++ desktop development tools
- CMake 3.25+
- Git access to Steinberg's VST3 SDK (CMake FetchContent pins `v3.8.1_build_84`)

## Build/test
```powershell
cmake -S . -B build -G "Visual Studio 17 2022" -A x64
cmake --build build --config Release --parallel
ctest --test-dir build -C Release --output-on-failure
```

The original release bundle is renamed and staged by the development workflow as `125A Midiator.vst3` with matching internal binary name; the plain CMake output may retain the intermediate name `Midiator.vst3`. Do not ship a homemade rename without preserving the entire VST3 `Contents` tree and rerunning Steinberg Validator against the exact distributable.

**Original validated binary:** build #268, https://github.com/challanger2000/125A-Midiator/actions/runs/38020824060.

A successful local rebuild does not replace release QA, including the user's 125A Plugin Tester and host routing tests. Source distribution does not grant an open-source license.
