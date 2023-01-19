# Fjöl 4-Voice Midi synth

<p align="center"><img src="/Fjöl/Documentation/frontpanel.png"  width="543" height="761"></p>
<p align="center"><img src="/Fjöl/Documentation/IMG_6093.jpeg"  width="543" height="761"></p>

Small demo video with non working LED's: https://www.youtube.com/watch?v=nTqA_WNiwQo

Current hardware uses a high quality DAC(PCM5100) with 16bit/44.1kHz quality.

Fjöl is a 
4 voice polyphonic Phase modulation synthesizer. Using only sine waves you can get the same sounds as an FM synthesizer.

* digital ladder LPF with resonance
* usb A host
* 3 operator Phase modulation with 3 algorithms(so far)
* two endless encoders with CV input for adjusting 8 different parameters 
* MIDI IN and MIDI THRU with type A midi minijacks as per MIDI standard.
* optional V/OCT and gate per voice expander also in the works

Encoder parameters are:

* stereo spread of voices
* filter resonance
* filter envelope decay
* glide/portamento
* Operator 2 detune
* Operator 3 detune
* Operator 1 feedback (creates saw like wave)
* Operator 2 feedback

Potentiometers are:

* Operator 2 amplitude
* Operator 2 ratio
* Operator 3 amplitude
* Operator 3 ratio
* VCA Attack 
* VCA Release
* LPF frequency
* Filter envelope amplitude

Algorithms so far:

### Algo 1: 

OP2 -> OP1

OP3 -> OP1

### Algo 2:

OP3 -> OP2 -> OP1

### Algo 3:

OP3 -> OP1

OP2 -> OUT





## Where/how to order
It's all a work in progress.
Hopefully I'll have some beta testing units ready before summer 2023 :)

## Designed With

* KiCAD
* Arduino IDE 
* Visual Studio Code
* Audio System Design Tool for Teensy Audio Library

## Versioning
* 1.0 - [Hardware] Original PCB
* 1.0 - [Software] Original software 
## Authors

* **Hallmar Gauti Halldórsson** (hardware and firmware)

## License
Hardware: CC BY-SA 4.0

Software: CC BY-SA 4.0

But if you want to sell or do something with the software or hardware then it'd be nice to include my name and link to my Github somewhere :)

## Acknowledgments

* All of Mutable Instruments designs have been an insparation and a solid reference for both analog and digital circuits.
https://github.com/pichenettes/eurorack


* The whole idea of a 4 voice poly synth was planted in my head after trying MakeSynthsNotWar's String Theory module.
https://makesynthsnotwar.com/modules/stringtheory/



