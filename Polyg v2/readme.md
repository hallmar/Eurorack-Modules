# Polyg v2 8-Voice Midi synth

This new version has a dedicated MIDI thru instead of routing it into the Teensy and back out. 
And it has alot of improvements of the hardware.

<p align="center"><img src="/Polyg/images/polyg.jpg"  width="120" height="360"></p>

[Youtube demo](https://www.youtube.com/watch?v=QhJZFhLLbBc&feature=youtu.be)
[Mouser cart] {https://www.mouser.com/ProjectManager/ProjectDetail.aspx?AccessID=3288d77cba}

8 Voice polyphonic synthesizer with selectable Karplus strong(8 voice plucky string synth) or a 8 voice FM synth with square,sine,triangle and sawtooth. It has a basic FM(techincally Phase Modulation, like the DX7) with one Modulator. 
There's an index knob to set the ratio, decay for the operator and the amount of FM applied.

Current hardware uses a high quality 16bit/44.1kHz DAC(CD4334).


It has MIDI IN and MIDI OUT/THRU. It uses the Arturia Standard for DIN to stereo jack, so type B midi.
You can find adapters in almost every synthstore now. 
<p align="center"><img src="/Polyg/images/TRS-graphic.jpg" width="360" height="360" ></p>


## Where/how to order
I won't have any PCB's in stock any time soon. This project is pretty much abandoned.
You have my approval of making your own, just remember to credit me.

## Designed With

* Eagle CAD
* Arduino IDE
* Audio System Design Tool for Teensy Audio Library

## Versioning
* 1.0 - [Hardware] Original PCB batch with wrong silkscreen
* 1.1 - [Hardware] Current version of PCBs
* 1.0 - [Software] Original software release
## Authors

* **Hallmar Gauti Halldórsson** 

## License
Hardware: cc-by-sa-3.0

Software: MIT license

But if you want to sell or do something with the software or hardware then it'd be nice to include my name and link to my Github somewhere :)

## Acknowledgments
Alot of the inspiration for this project came from the [String Theory](https://makesynthsnotwar.com/modules/stringtheory/) eurorack module by Make Synths Not War.
The original String Theory was programmed by [Jan Ostman](https://janostman.wordpress.com).


