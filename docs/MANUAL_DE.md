# 125A Midiator V1.0.0 — Bedienungsanleitung

## 1. Was ist Midiator?

125A Midiator ist ein **reiner MIDI-Generator** für Metal, NDH, Industrial und Dark Rock. Er erzeugt miteinander abgestimmte Gitarren-, Bass-, Schlagzeug-, Pad- und Synthesizer-Parts. **Midiator enthält keine eigene Klangerzeugung.** Zum Hören werden separate virtuelle oder externe MIDI-Instrumente benötigt.

### Technischer Rahmen
- Windows x64, VST3.
- Fünf getrennte VST3-MIDI-Ausgangsbusse: **Guitar Out, Bass Out, Drums Out, Pad Out, Synth Out** (jeweils ein MIDI-Kanal).
- Ein MIDI-Eingang zum Triggern und zur Vorgabe der Tonart.
- Taktart **4/4** und internes **1/16-Notenraster**.
- Phrasenlängen **1 / 2 / 4 / 8 / 16 Takte**.
- Synchronisation mit Songposition und Tempo der DAW.
- Bedienoberfläche mit den zwei Ansichten **Main** und **Details**.

## 2. Erste Schritte

1. VST3 wie in INSTALL_DE.md beschrieben installieren und die DAW neu starten.
2. Midiator als Instrument laden und mindestens **Guitar Out** auf ein Gitarreninstrument routen.
3. Projekt auf **4/4** einstellen; Root Source zunächst **MANUAL** oder MIDI auswählen.
4. **TRIGGER MODE = TRANSPORT** einstellen, DAW starten und MIDI-Ereignisse abhören.
5. Einen **METAL STYLE** wählen und mit **NEW RIFF** ein neues Motiv erzeugen.
6. Die Ausgänge für Bass, Drums, Pads und Synth zu eigenen Instrumenten routen.
7. Über **DETAILS** Bass, Drums, Pads, Synth, Gitarren-Artikulationen und Drum Map einstellen.
8. Eine gelungene Spur auf **LOCK** stellen, bevor andere Instrumente variiert werden.

**Wichtig:** Ob sich alle fünf MIDI-Ausgänge direkt routen oder aufzeichnen lassen, hängt von den MIDI-Routing-Funktionen der jeweiligen DAW ab.

## 3. Hauptseite: SET THE MUSIC

**ROOT:** Grundton der erzeugten Harmonie. Bei Root Source MANUAL bleibt die bekannte Gitarrenlage erhalten.

**SCALE / MODE:** Auswahl aus Natural Minor (Aeolian), Phrygian, Dorian, Harmonic Minor, Phrygian Dominant, Minor Pentatonic und Blues. Die angezeigten Noten des Modus beziehen sich auf den aktuellen Grundton.

**LENGTH (BARS):** 1, 2, 4, 8 oder 16 Takte. Das Raster bleibt in allen Fällen 1/16.

**ROOT SOURCE:** MANUAL verwendet den ROOT-Regler. MIDI übernimmt den Grundton aus eingehenden MIDI NoteOns, **einschließlich Oktave bei der Gitarrenstimme**. Die Begleitstimmen bleiben in ihren jeweils musikalisch geeigneten Registern. MIDI-Noten von 0 bis 120 werden unterstützt.

**TRIGGER MODE:** TRANSPORT spielt synchron zur laufenden DAW. MIDI NOTE lässt die Erzeugung nur laufen, während mindestens eine Triggernote gehalten wird; nach der letzten NoteOff stoppt die Ausgabe.

**SONG SECTION:** FREE, INTRO, VERSE, PRE, CHORUS, BREAKDOWN oder OUTRO. Die Section prägt die generierte Phrase; sie erzeugt **keinen automatisch verketteten kompletten Song**.

## 4. Hauptseite: RIFF GENERATOR

**METAL STYLE:** 12 Stilrichtungen: NDH / Industrial, Dark Rock / Gothic, Heavy Industrial, Classic Heavy Metal, Thrash Metal, Groove Metal, Death Metal, Melodic Death Metal, Metalcore, Nu Metal, Doom Metal, Djent / Progressive. Die BPM-Anzeige ist eine **Empfehlung**, keine automatische Tempoänderung.

**DENSITY:** Beeinflusst die Anzahl/Belegung musikalischer Ereignisse bei der nächsten Generierung.

**COMPLEXITY:** Beeinflusst rhythmische und motivische Komplexität.

**REPETITION:** Bestimmt, wie konsequent Motive wiederkehren.

**VARIATION AMOUNT:** Steuert, wie weit eine VARIATION vom vorhandenen Motiv abweicht.

**NEW RIFF:** Erzeugt eine neue musikalische Idee für die **nicht gesperrten** Stimmen.

**VARIATION:** Entwickelt die bestehende Idee weiter, ohne Grundton, Skala oder Phrasenlänge stillschweigend zu verändern.

**Verhalten:** Density, Complexity, Repetition und Variation Amount sind überwiegend Parameter der **nächsten** Erzeugung/Variation. Sie schreiben nicht bei jeder Reglerbewegung die komplette vorhandene Phrase neu.

## 5. Hauptseite: KEEP WHAT WORKS

Jede der fünf Stimmen hat einen **OPEN / LOCK**-Schalter. OPEN bedeutet: Die Stimme darf bei NEW RIFF oder VARIATION geändert werden. LOCK bedeutet: Die bestehende konkrete Phrase bleibt bei diesen Erzeugungsaktionen geschützt.

Sind alle fünf Stimmen gesperrt, bewirken NEW RIFF und VARIATION absichtlich **keine Änderung**. Veränderungen von globaler Tonart oder live wirksamen Parametern sind getrennt von der Erzeugungssperre zu betrachten.

## 6. Details: Klangrollen und Artikulationen

**BASS – FOLLOW:** Wie stark sich der Bass an der Gitarren-/Harmoniebewegung orientiert. **MOVEMENT:** Bewegungsgrad und eigenständige Bewegung.

**DRUMS – DENSITY:** Dichte des Drum-Patterns. **COMPLEXITY:** rhythmische Ausgestaltung. **DRUM FILL:** Fill Intensity; 0% minimiert/unterdrückt Fills entsprechend der Engine, höhere Werte verstärken sie.

**PADS / CHOIR – SPREAD:** Verteilung/Breite der Akkordtöne. **TENSION:** harmonische Spannung.

**SYNTH – ACTIVITY:** Ereignishäufigkeit; **0% = keine Synth-Noten**. **MOVEMENT:** Bewegungsgrad der Pattern. Sehr niedrige Activity-Werte erzeugen bewusst seltene Akzente.

**GUITAR ARTICULATION – POWER CHORD CHANCE:** Anteil bzw. Neigung zu zweistimmigen Power Chords (Grundton + Quinte). **PALM MUTE CHANCE:** Anteil abgedämpfter Gitarrennoten. Diese Chancen prägen überwiegend neu generierte Motive.

**POWER CHORDS ON/OFF:** Direkt schaltbare Power-Chord-Erzeugung bzw. -Bearbeitung. **PALM MUTE BELOW VELOCITY:** Velocity-Schwelle für Palm-Mute-Zuordnung. Das Ergebnis ist vom verwendeten Gitarreninstrument abhängig. Die Zahl ist eine **MIDI-Velocity**, kein Prozentwert; Standard **30**.

**DRUM MAP:** Verifizierte Presets: General MIDI, EZdrummer 3 Standard, Perfect Drums default und Addictive Drums 2 Standard. Die tatsächliche Instrumentenbelegung gegebenenfalls überprüfen. Andere Drum-Libraries können eine eigene MIDI-Map benötigen.

**GLOBAL HUMANIZE – AMOUNT:** Verändert Timing und/oder Velocity in begrenztem, überschneidungssicherem Umfang. **0% = aus**.

## 7. MIDI und typische DAW-Einstellungen

- Alle fünf Ausgänge liefern **MIDI-Events**, keine Audio-Kanäle.
- Jede Rolle kann zu einem anderen Instrument geführt werden, **sofern die DAW die separaten VST3-MIDI-Ausgänge unterstützt**.
- Das empfangende Instrument entscheidet über Klang, Mapping, Velocity-Artikulationen und passende Tonlage.
- Nach einer Tonartänderung werden laufende tonale Noten samplegenau übergeben; Drum-Pattern behalten ihre musikalische Position.
- Beim Stoppen, bei Songpositionssprüngen und nach Änderungen werden aktive MIDI-Noten defensiv beendet.
- Das Plugin speichert die generierten fünf Parts im Projekt; es generiert beim Projektladen **nicht absichtlich neu**.

## 8. Zoom, Projektzustand und Bedienung

Mit **UI ZOOM** werden 80%, 100%, 120% und 150% durchgeschaltet. Neue Instanzen beginnen mit **100%**; die DAW speichert die projektspezifische Zoom-Einstellung. DETAILS wechselt zur Detailansicht, BACK zur Hauptansicht.

Die sichtbare Produktversion ist **V1.0.0**. Die interne Projektzustandsversion **V17** ist eine technische Speicherformatnummer und keine Produktversion.

## 9. Fehlerbehebung und Grenzen

**Kein Ton:** Midiator besitzt keinen Audio-Ausgang mit Klang. MIDI-Ausgänge zu Instrumenten routen. Transport prüfen, Trigger Mode korrekt setzen, gegebenenfalls MIDI NOTE halten.

**Nur ein Ausgang hörbar:** Host-Routing der fünf VST3-Event-Ausgänge prüfen. Nicht jede DAW kann alle separat verwenden.

**Falsche Drum-Sounds:** Drum Map und MIDI-Notenzuordnung des Empfängers kontrollieren.

**Palm Mutes reagieren anders als erwartet:** Velocity-Layer und Artikulationen des Gitarreninstruments prüfen; kein universal gültiger MIDI-Standard für Palm Mute.

**Taktart außerhalb 4/4:** Nicht unterstützt; in 4/4 arbeiten.

**Nicht unterstützte Plattform:** Ausgeliefert wird ausschließlich Windows x64 VST3. Für macOS wird keine lauffähige Version behauptet.

## 10. Veröffentlichung / Support

Hersteller: **125A Systems**. Produkt: **125A Midiator V1.0.0**. FINAL ist eine Release-Bezeichnung und erscheint nicht in der Benutzeroberfläche.

Quellcode/Releaseinformationen: https://github.com/challanger2000/125A-Midiator-Final

Die Software ist ein kreatives MIDI-Werkzeug. Sie ersetzt weder externe Instrumente noch die musikalische Bearbeitung in der DAW.
