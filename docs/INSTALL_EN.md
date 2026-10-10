# 125A Midiator — Installation (English)

**Platform:** Windows x64 and a DAW capable of loading VST3 instruments and routing the MIDI events they generate to other instruments. VST3 support by itself does not guarantee exposure of five MIDI outputs.

1. Close the DAW completely.
2. Extract the purchased ZIP. The bundle folder must be named **`125A Midiator.vst3`** and contain both `Contents/Resources` and `Contents/x86_64-win`.
3. Copy the **entire bundle folder**, not only its internal DLL-like binary, into `C:\Program Files\Common Files\VST3\`. Administrator privileges may be needed.
4. Restart the DAW and rescan VST3 plugins if necessary.
5. Load **125A Midiator** as an instrument. It creates **MIDI data only**, so route at least one output bus to an external instrument.
6. Initial test: set the project to **4/4**, choose TRIGGER MODE = **TRANSPORT**, start playback and connect Guitar Out to a guitar instrument. MIDI NOTE mode requires a held input note.

**Troubleshooting:** If the plug-in is missing, verify the installed folder, its complete Contents tree and the host's VST3 scan. If no sound is heard, verify event-output routing, the receiving instrument, channel/note mapping, host transport and trigger mode. Some hosts do not expose all five VST3 MIDI event outputs.

**Updates:** Close your host and replace the complete previous bundle; back up important DAW projects first.

**Note:** No audio engine, internal samples or amplifiers are included. The visible product version is V1.0.0; FINAL is not shown in the plugin.
