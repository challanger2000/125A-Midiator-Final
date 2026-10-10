# 125A Midiator V1.0.0 — User Manual

## 1. Overview

125A Midiator is a **MIDI-only generator** for metal, NDH, industrial and dark rock. It produces coordinated Guitar, Bass, Drums, Pads / Choir and Synth patterns. **It does not generate audio.** Connect its MIDI event outputs to other instruments.

### Technical profile
- Windows x64, VST3; **five separate event-output buses**, one channel per bus.
- MIDI input for root-note selection and triggering.
- **4/4 time**, internal **sixteenth-note grid**; phrases of **1 / 2 / 4 / 8 / 16 bars**.
- Follows the DAW timeline, tempo and transport.
- Two interface pages, Main and Details.

## 2. Quick start

1. Install the entire VST3 bundle (INSTALL_EN.md).
2. Load Midiator as an instrument and route **Guitar Out** to a guitar plugin.
3. Set the project to **4/4**, choose MANUAL or MIDI for ROOT SOURCE.
4. Set TRIGGER MODE to **TRANSPORT** and start DAW playback.
5. Select a METAL STYLE and click **NEW RIFF**.
6. Route the other four buses to suitable sound generators as permitted by the host.
7. Open **DETAILS** to adjust the supporting roles, guitar articulation and the drum map.
8. Set successful parts to **LOCK** before generating or varying other roles.

The host must support routing plugin-generated MIDI. General VST3 support alone is not enough to guarantee five usable outputs.

## 3. Main page: SET THE MUSIC

**ROOT:** Musical key centre. MANUAL mode preserves the normal guitar register.

**SCALE / MODE:** Natural Minor (Aeolian), Phrygian, Dorian, Harmonic Minor, Phrygian Dominant, Minor Pentatonic and Blues. Displayed theory notes follow the chosen root.

**LENGTH (BARS):** 1, 2, 4, 8 or 16 bars.

**ROOT SOURCE:** MANUAL uses the ROOT selector. MIDI follows input NoteOn pitch, **including the absolute octave on Guitar**; Bass/Pad/Synth remain in appropriate registers. MIDI root notes 0–120 are supported.

**TRIGGER MODE:** TRANSPORT follows DAW playback. MIDI NOTE gates generation while one or more input trigger notes are held, stopping after the last NoteOff.

**SONG SECTION:** FREE, INTRO, VERSE, PRE, CHORUS, BREAKDOWN or OUTRO. Each selection influences a phrase; it is **not** a complete automatic song arranger.

## 4. Main page: RIFF GENERATOR

**METAL STYLE:** NDH / Industrial, Dark Rock / Gothic, Heavy Industrial, Classic Heavy Metal, Thrash Metal, Groove Metal, Death Metal, Melodic Death Metal, Metalcore, Nu Metal, Doom Metal, Djent / Progressive. Suggested BPM is advisory and does not change host tempo.

**DENSITY:** Musical event density for a future generation. **COMPLEXITY:** rhythmic/motivic intricacy. **REPETITION:** motif recurrence. **VARIATION AMOUNT:** variation strength.

**NEW RIFF:** Creates a new idea for unlocked roles. **VARIATION:** Evolves the existing musical idea without silently changing key, scale or phrase length.

Generation controls typically affect the **next NEW RIFF/VARIATION** rather than replacing the current phrase at every adjustment.

## 5. Main page: KEEP WHAT WORKS

Each of the five roles has an **OPEN / LOCK** state. OPEN allows that role to change when NEW RIFF or VARIATION is pressed; LOCK protects its current generated content from those actions. All five locked means those buttons intentionally do nothing. Root and live control updates are separate from generation locks.

## 6. Details page

**BASS – FOLLOW:** How strongly Bass tracks the Guitar/harmony context. **MOVEMENT:** Degree of independent Bass motion.

**DRUMS – DENSITY:** Pattern note density. **COMPLEXITY:** Rhythmic detail. **DRUM FILL:** Fill Intensity, with 0% disabling/minimizing fills in the generator and higher settings producing more.

**PADS / CHOIR – SPREAD:** Voicing distribution and width. **TENSION:** Harmonic tension.

**SYNTH – ACTIVITY:** Frequency of Synth events; **0% produces no Synth notes**, while very low values intentionally yield rare accents. **MOVEMENT:** Motif motion.

**GUITAR ARTICULATION – POWER CHORD CHANCE:** Probability of root + fifth dyads. **PALM MUTE CHANCE:** Palm-muted note tendency; primarily applied on new phrase generation.

**POWER CHORDS ON/OFF:** Direct chord mode adjustment. **PALM MUTE BELOW VELOCITY:** Threshold used for MIDI articulation; the default **30** is a MIDI velocity number, **not** a percentage. Its audible effect depends on the guitar library.

**DRUM MAP:** Verified General MIDI, EZdrummer 3 Standard, Perfect Drums default and Addictive Drums 2 Standard keymaps. Check the receiving drum plugin's actual mapping.

**GLOBAL HUMANIZE – AMOUNT:** Controlled timing/velocity variation, designed to avoid overlaps; **0% = off**.

## 7. MIDI, host routing and project recall

- All five outputs carry **MIDI events only**, not audio.
- Route each bus to the appropriate receiving instrument when supported by the DAW.
- Instruments determine their own velocity layers, guitar articulations, note range and drum mapping.
- During live root changes, sustained tonal notes hand over at the correct sample; drum timing remains intact.
- Active notes are cleaned up on transport stop, position jumps and major phrase edits.
- Saved projects preserve their generated multi-role arrangement; plugin state V17 retains tonal references needed for exact root round-trips.

## 8. Zoom and editor controls

**UI ZOOM** cycles through **80%, 100%, 120%, 150%**. New instances start at 100%; project zoom is restored when supported by the DAW. **DETAILS** opens secondary controls; **BACK** returns to the main page.

The GUI displays **V1.0.0**. Internal state format **V17** is not the product version. The word FINAL is never displayed in the plugin.

## 9. Troubleshooting

**No audio:** Midiator has no internal sound generator. Verify output MIDI routing, host playback, trigger mode, receiving instrument and expected note range.

**Only one MIDI bus appears:** Host support for multiple VST3 event outputs varies; inspect DAW routing capabilities.

**Wrong drum sounds:** Select the correct Drum Map or adapt the receiving drum instrument.

**Guitar articulations sound wrong:** Adjust the receiving library's velocity mapping and the palm-mute threshold.

**Non-4/4 projects:** Unsupported; use 4/4.

**Other operating systems:** This release contains **Windows x64 VST3 only**.

## 10. Product details

125A Systems · 125A Midiator V1.0.0

Official source and release notes: https://github.com/challanger2000/125A-Midiator-Final

Midiator is an idea-generation and composing tool, not a substitute for other instruments or editing the resulting MIDI arrangement.
