# Gumroad distribution — 125A Midiator V1.0.0

## Buyer download

**Filename:** `125A_Midiator_v1.0.0_Gumroad_FINAL_Windows_x64_FULL.zip`

**SHA-256:** `bd28e5769a998afbe41811d2f3cd00a7b5f2af2b4402cdce8282e8cc4dfd716e`

The buyer ZIP contains exactly the verified Windows VST3 bundle plus:

- `START_HERE_DE.txt`, `START_HERE_EN.txt`
- `Documentation/Installation_DE.pdf`, `Installation_EN.pdf`
- `Documentation/Bedienungsanleitung_DE.pdf`, `User_Manual_EN.pdf`
- `Documentation/Release_Notes.txt`
- `Documentation/Third_Party_License_Notices.txt`

There are no installer EXEs or Gumroad seller-only listing files in the buyer ZIP.

## Verified plugin identity

- Source Git commit (development): `0a656a4b8631db165191391c4a1bbdfd82b26fa6`
- Development CI run: https://github.com/challanger2000/125A-Midiator/actions/runs/38020824060
- Original CI artifact ZIP SHA-256: `5f5291746167b5d714128d76b66595aec71873ed96717d9a0069662dead60c70`
- Binary inside VST3 SHA-256: `19f1aec8dba50fb1313b5351a233c169359f3d7d15ab9f56180fd92a5ec973d2`
- Original `125A Midiator.vst3` resource and binary bytes are preserved **without modification** inside the Gumroad buyer ZIP.

## Separate seller-only material

`125A_Midiator_v1.0.0_Gumroad_Listing_Assets.zip` contains product copy DE/EN, Gumroad field drafts, two original GUI screenshots and a 600×600 thumbnail derived by proportional scaling (not regenerated).

**Seller ZIP SHA-256:** `5af487867b5c682f96e49d31756519517649e15d0dc83a7d0d8e32fe6fc3408d`

## QA status

- 10/10 CTest PASS; Steinberg Validator 47/47 PASS on original #268.
- 125A Plugin Tester PASS user-confirmed on #268.
- GUI inspection PASS.
- Final source files match the original build commit byte-for-byte; only README, release documentation, workflow trigger and housekeeping have been added/curated in this repository.
- Only Windows x64 is shipped. No universal DAW multi-output MIDI support claims.

The VST3 displays **V1.0.0**; FINAL is a release designation only.
