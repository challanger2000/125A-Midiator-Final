# 125A Midiator — Installation (Deutsch)

**System:** Windows 64 Bit und eine DAW, die VST3-Instrumente laden kann und deren erzeugte MIDI-Ausgänge zum Weiterleiten an andere Instrumente unterstützt. Ein MIDI-tauglicher Host ist entscheidend; VST3-Unterstützung allein garantiert noch keine fünf MIDI-Routen.

1. Studio One bzw. die DAW vollständig schließen.
2. Die ZIP-Datei entpacken. Der Ordner muss exakt **`125A Midiator.vst3`** heißen und die Unterordner `Contents/Resources` und `Contents/x86_64-win` enthalten.
3. Den **kompletten Ordner** (nicht nur die einzelne Datei im Unterordner) nach `C:\Program Files\Common Files\VST3\` kopieren. Dafür können Administratorrechte erforderlich sein.
4. Die DAW neu starten und bei Bedarf den VST3-Plugin-Scan ausführen.
5. **125A Midiator** als Instrument laden. Es erzeugt selbst **keinen Ton**: Die MIDI-Ausgänge müssen jeweils einem Klangerzeuger zugeordnet werden.
6. Zum ersten Test: Projekt in **4/4**, DAW-Transport starten, TRIGGER MODE = **TRANSPORT**, gewünschtes MIDI-Ausgangssignal (z. B. Guitar Out) mit einem Instrument verbinden. Bei MIDI NOTE wird nur bei gehaltener Triggernote gespielt.

**Fehlersuche:** Erscheint das Plugin nicht, korrekten Ordnernamen, vollständig kopiertes Bundle, VST3-Pfad und DAW-Rescan überprüfen. Erscheint es, aber es klingt nichts, MIDI-Routing, DAW-Transport, Trigger Mode, Instrument/MIDI-Kanal und Notenbereich der Klangerzeuger prüfen. Nicht jede DAW stellt alle fünf VST3-MIDI-Ausgänge zur Verfügung.

**Update:** Das alte Bundle bei geschlossener DAW durch die neue komplette Version ersetzen. Eigene Projekte vorher sichern.

**Hinweis:** Keine Samples, kein Amp-Simulator und kein Audio-Effekt enthalten. Die Produktversion im Plugin lautet V1.0.0; das Wort FINAL ist keine GUI-Beschriftung.
