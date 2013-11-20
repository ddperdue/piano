#include "sounds.h"
#include "mainwindow.h"

Sounds::Sounds()
{
    Sounds::setSound (1);
}


void Sounds::setSound (int sound){

    switch(sound){
     case 1: //wurlitzer
        Sounds::files[0] = "/Samples/Wurlitzer/WEP sus m3 C1 -11.mp3";
        Sounds::files[1] = "/Samples/Wurlitzer/WEP sus m3 C#1 -11.mp3";
        Sounds::files[2] = "/Samples/Wurlitzer/WEP sus m3 D1 -11.mp3";
        Sounds::files[3] = "/Samples/Wurlitzer/WEP sus m3 D#1 -11.mp3";
        Sounds::files[4] = "/Samples/Wurlitzer/WEP sus m3 E1 -11.mp3";
        Sounds::files[5] = "/Samples/Wurlitzer/WEP sus m3 F1 -11.mp3";
        Sounds::files[6] = "/Samples/Wurlitzer/WEP sus m3 F#1 -11.mp3";
        Sounds::files[7] = "/Samples/Wurlitzer/WEP sus m3 G1 -11.mp3";
        Sounds::files[8] = "/Samples/Wurlitzer/WEP sus m3 G#1 -11.mp3";
        Sounds::files[9] = "/Samples/Wurlitzer/WEP sus m3 A1 -11.mp3";
        Sounds::files[10] = "/Samples/Wurlitzer/WEP sus m3 A#1 -11.mp3";
        Sounds::files[11] = "/Samples/Wurlitzer/WEP sus m3 B1 -11.mp3";
        Sounds::files[12] = "/Samples/Wurlitzer/WEP sus m3 C2 -11.mp3";
        Sounds::files[13] = "/Samples/Wurlitzer/WEP sus m3 C#2 -11.mp3";
        Sounds::files[14] = "/Samples/Wurlitzer/WEP sus m3 D2 -11.mp3";
        Sounds::files[15] = "/Samples/Wurlitzer/WEP sus m3 D#2 -11.mp3";
        Sounds::files[16] = "/Samples/Wurlitzer/WEP sus m3 E2 -11.mp3";
        Sounds::files[17] = "/Samples/Wurlitzer/WEP sus m3 F2 -11.mp3";
        Sounds::files[18] = "/Samples/Wurlitzer/WEP sus m3 F#2 -11.mp3";
        Sounds::files[19] = "/Samples/Wurlitzer/WEP sus m3 G2 -11.mp3";
        Sounds::files[20] = "/Samples/Wurlitzer/WEP sus m3 G#2 -11.mp3";
        Sounds::files[21] = "/Samples/Wurlitzer/WEP sus m3 A2 -11.mp3";
        Sounds::files[22] = "/Samples/Wurlitzer/WEP sus m3 A#2 -11.mp3";
        Sounds::files[23] = "/Samples/Wurlitzer/WEP sus m3 B2 -11.mp3";
        Sounds::files[24] = "/Samples/Wurlitzer/WEP sus m3 C3 -11.mp3";
        Sounds::files[25] = "/Samples/Wurlitzer/WEP sus m3 C#3 -11.mp3";
        Sounds::files[26] = "/Samples/Wurlitzer/WEP sus m3 D3 -11.mp3";
        Sounds::files[27] = "/Samples/Wurlitzer/WEP sus m3 D#3 -11.mp3";
        Sounds::files[28] = "/Samples/Wurlitzer/WEP sus m3 E3 -11.mp3";
        Sounds::files[29] = "/Samples/Wurlitzer/WEP sus m3 F3 -11.mp3";
        Sounds::files[30] = "/Samples/Wurlitzer/WEP sus m3 F#3 -11.mp3";
        Sounds::files[31] = "/Samples/Wurlitzer/WEP sus m3 G3 -11.mp3";
        Sounds::files[32] = "/Samples/Wurlitzer/WEP sus m3 G#3 -11.mp3";
        Sounds::files[33] = "/Samples/Wurlitzer/WEP sus m3 A3 -11.mp3";
        Sounds::files[34] = "/Samples/Wurlitzer/WEP sus m3 A#3 -11.mp3";
        Sounds::files[35] = "/Samples/Wurlitzer/WEP sus m3 B3 -11.mp3";
        Sounds::files[36] = "/Samples/Wurlitzer/WEP sus m3 C4 -11.mp3";
        Sounds::files[37] = "/Samples/Wurlitzer/WEP sus m3 C#4 -11.mp3";
        Sounds::files[38] = "/Samples/Wurlitzer/WEP sus m3 D4 -11.mp3";
        Sounds::files[39] = "/Samples/Wurlitzer/WEP sus m3 D#4 -11.mp3";
        Sounds::files[40] = "/Samples/Wurlitzer/WEP sus m3 E4 -11.mp3";
        Sounds::files[41] = "/Samples/Wurlitzer/WEP sus m3 F4 -11.mp3";
        Sounds::files[42] = "/Samples/Wurlitzer/WEP sus m3 F#4 -11.mp3";
        Sounds::files[43] = "/Samples/Wurlitzer/WEP sus m3 G4 -11.mp3";
        Sounds::files[44] = "/Samples/Wurlitzer/WEP sus m3 G#4 -11.mp3";
        Sounds::files[45] = "/Samples/Wurlitzer/WEP sus m3 A4 -11.mp3";
        Sounds::files[46] = "/Samples/Wurlitzer/WEP sus m3 A#4 -11.mp3";
        Sounds::files[47] = "/Samples/Wurlitzer/WEP sus m3 B4 -11.mp3";
        Sounds::files[48] = "/Samples/Wurlitzer/WEP sus m3 C5 -11.mp3";
        Sounds::files[49] = "/Samples/Wurlitzer/WEP sus m3 C#5 -11.mp3";
        Sounds::files[50] = "/Samples/Wurlitzer/WEP sus m3 D5 -11.mp3";
        Sounds::files[51] = "/Samples/Wurlitzer/WEP sus m3 D#5 -11.mp3";
        Sounds::files[52] = "/Samples/Wurlitzer/WEP sus m3 E5 -11.mp3";
        Sounds::files[53] = "/Samples/Wurlitzer/WEP sus m3 F5 -11.mp3";
        Sounds::files[54] = "/Samples/Wurlitzer/WEP sus m3 F#5 -11.mp3";
        Sounds::files[55] = "/Samples/Wurlitzer/WEP sus m3 G5 -11.mp3";
        Sounds::files[56] = "/Samples/Wurlitzer/WEP sus m3 G#5 -11.mp3";
        Sounds::files[57] = "/Samples/Wurlitzer/WEP sus m3 A5 -11.mp3";
        Sounds::files[58] = "/Samples/Wurlitzer/WEP sus m3 A#5 -11.mp3";
        Sounds::files[59] = "/Samples/Wurlitzer/WEP sus m3 B5 -11.mp3";
        Sounds::files[60] = "/Samples/Wurlitzer/WEP sus m3 C6 -11.mp3";


        break;
    case 2: // Vibes
        Sounds::files[0] = "/Samples/Vibes/C2 VIBES.mp3";
        Sounds::files[1] = "/Samples/Vibes/C#2 VIBES.mp3";
        Sounds::files[2] = "/Samples/Vibes/D2 VIBES.mp3";
        Sounds::files[3] = "/Samples/Vibes/D#2 VIBES.mp3";
        Sounds::files[4] = "/Samples/Vibes/E2 VIBES.mp3";
        Sounds::files[5] = "/Samples/Vibes/F2 VIBES.mp3";
        Sounds::files[6] = "/Samples/Vibes/F#2 VIBES.mp3";
        Sounds::files[7] = "/Samples/Vibes/G2 VIBES.mp3";
        Sounds::files[8] = "/Samples/Vibes/G#2 VIBES.mp3";
        Sounds::files[9] = "/Samples/Vibes/A2 VIBES.mp3";
        Sounds::files[10] = "/Samples/Vibes/A#2 VIBES.mp3";
        Sounds::files[11] = "/Samples/Vibes/B2 VIBES.mp3";
        Sounds::files[12] = "/Samples/Vibes/C3 VIBES.mp3";
        Sounds::files[13] = "/Samples/Vibes/C#3 VIBES.mp3";
        Sounds::files[14] = "/Samples/Vibes/D3 VIBES.mp3";
        Sounds::files[15] = "/Samples/Vibes/D#3 VIBES.mp3";
        Sounds::files[16] = "/Samples/Vibes/E3 VIBES.mp3";
        Sounds::files[17] = "/Samples/Vibes/F3 VIBES.mp3";
        Sounds::files[18] = "/Samples/Vibes/F#3 VIBES.mp3";
        Sounds::files[19] = "/Samples/Vibes/G3 VIBES.mp3";
        Sounds::files[20] = "/Samples/Vibes/G#3 VIBES.mp3";
        Sounds::files[21] = "/Samples/Vibes/A1 VIBES.mp3";
        Sounds::files[22] = "/Samples/Vibes/A#1 VIBES.mp3";
        Sounds::files[23] = "/Samples/Vibes/B1 VIBES.mp3";
        Sounds::files[24] = "/Samples/Vibes/C2 VIBES.mp3";
        Sounds::files[25] = "/Samples/Vibes/C#2 VIBES.mp3";
        Sounds::files[26] = "/Samples/Vibes/D2 VIBES.mp3";
        Sounds::files[27] = "/Samples/Vibes/D#2 VIBES.mp3";
        Sounds::files[28] = "/Samples/Vibes/E2 VIBES.mp3";
        Sounds::files[29] = "/Samples/Vibes/F2 VIBES.mp3";
        Sounds::files[30] = "/Samples/Vibes/F#2 VIBES.mp3";
        Sounds::files[31] = "/Samples/Vibes/G2 VIBES.mp3";
        Sounds::files[32] = "/Samples/Vibes/G#2 VIBES.mp3";
        Sounds::files[33] = "/Samples/Vibes/A2 VIBES.mp3";
        Sounds::files[34] = "/Samples/Vibes/A#2 VIBES.mp3";
        Sounds::files[35] = "/Samples/Vibes/B2 VIBES.mp3";
        Sounds::files[36] = "/Samples/Vibes/C3 VIBES.mp3";
        Sounds::files[37] = "/Samples/Vibes/C#3 VIBES.mp3";
        Sounds::files[38] = "/Samples/Vibes/D3 VIBES.mp3";
        Sounds::files[39] = "/Samples/Vibes/D#3 VIBES.mp3";
        Sounds::files[40] = "/Samples/Vibes/E3 VIBES.mp3";
        Sounds::files[41] = "/Samples/Vibes/F3 VIBES.mp3";
        Sounds::files[42] = "/Samples/Vibes/F#3 VIBES.mp3";
        Sounds::files[43] = "/Samples/Vibes/G3 VIBES.mp3";
        Sounds::files[44] = "/Samples/Vibes/G#3 VIBES.mp3";
        Sounds::files[45] = "/Samples/Vibes/A3 VIBES.mp3";
        Sounds::files[46] = "/Samples/Vibes/A#3 VIBES.mp3";
        Sounds::files[47] = "/Samples/Vibes/B3 VIBES.mp3";
        Sounds::files[48] = "/Samples/Vibes/C4 VIBES.mp3";
        Sounds::files[49] = "/Samples/Vibes/C#4 VIBES.mp3";
        Sounds::files[50] = "/Samples/Vibes/D4 VIBES.mp3";
        Sounds::files[51] = "/Samples/Vibes/D#4 VIBES.mp3";
        Sounds::files[52] = "/Samples/Vibes/E4 VIBES.mp3";
        Sounds::files[53] = "/Samples/Vibes/F4 VIBES.mp3";
        Sounds::files[54] = "/Samples/Vibes/F#3 VIBES.mp3";
        Sounds::files[55] = "/Samples/Vibes/G3 VIBES.mp3";
        Sounds::files[56] = "/Samples/Vibes/G#3 VIBES.mp3";
        Sounds::files[57] = "/Samples/Vibes/A3 VIBES.mp3";
        Sounds::files[58] = "/Samples/Vibes/A#3 VIBES.mp3";
        Sounds::files[59] = "/Samples/Vibes/B3 VIBES.mp3";
        Sounds::files[60] = "/Samples/Vibes/C4 VIBES.mp3";

        break;

    case 3: // Harpsichord
        Sounds::files[0] = "/Samples/Harpsichord/007_036R_wav.mp3";
        Sounds::files[1] = "/Samples/Harpsichord/007_038R_wav.mp3";
        Sounds::files[2] = "/Samples/Harpsichord/007_040R_wav.mp3";
        Sounds::files[3] = "/Samples/Harpsichord/007_041R_wav.mp3";
        Sounds::files[4] = "/Samples/Harpsichord/007_043R_wav.mp3";
        Sounds::files[5] = "/Samples/Harpsichord/007_045R_wav.mp3";
        Sounds::files[6] = "/Samples/Harpsichord/007_047R_wav.mp3";
        Sounds::files[7] = "/Samples/Harpsichord/007_048R_wav.mp3";
        Sounds::files[8] = "/Samples/Harpsichord/007_050R_wav.mp3";
        Sounds::files[9] = "/Samples/Harpsichord/007_052R_wav.mp3";
        Sounds::files[10] = "/Samples/Harpsichord/007_053R_wav.mp3";
        Sounds::files[11] = "/Samples/Harpsichord/007_055R_wav.mp3";
        Sounds::files[12] = "/Samples/Harpsichord/007_057R_wav.mp3";
        Sounds::files[13] = "/Samples/Harpsichord/007_059R_wav.mp3";
        Sounds::files[14] = "/Samples/Harpsichord/007_060R_wav.mp3";
        Sounds::files[15] = "/Samples/Harpsichord/007_062R_wav.mp3";
        Sounds::files[16] = "/Samples/Harpsichord/007_064R_wav.mp3";
        Sounds::files[17] = "/Samples/Harpsichord/007_065R_wav.mp3";
        Sounds::files[18] = "/Samples/Harpsichord/007_067R_wav.mp3";
        Sounds::files[19] = "/Samples/Harpsichord/007_069R_wav.mp3";
        Sounds::files[20] = "/Samples/Harpsichord/007_071R_wav.mp3";
        Sounds::files[21] = "/Samples/Harpsichord/007_072R_wav.mp3";
        Sounds::files[22] = "/Samples/Harpsichord/007_074R_wav.mp3";
        Sounds::files[23] = "/Samples/Harpsichord/007_076R_wav.mp3";
        Sounds::files[24] = "/Samples/Harpsichord/007_077R_wav.mp3";
        Sounds::files[25] = "/Samples/Harpsichord/007_079R_wav.mp3";
        Sounds::files[26] = "/Samples/Harpsichord/007_080R_wav.mp3";
        Sounds::files[27] = "/Samples/Harpsichord/007_081R_wav.mp3";
        Sounds::files[28] = "/Samples/Harpsichord/007_083R_wav.mp3";

        break;
    case 4: //Piano
        Sounds::files[0] = "/Samples/Piano/Piano.ff.C2.mp3";
        Sounds::files[1] = "/Samples/Piano/Piano.ff.D2.mp3";
        Sounds::files[2] = "/Samples/Piano/Piano.ff.E2.mp3";
        Sounds::files[3] = "/Samples/Piano/Piano.ff.F2.mp3";
        Sounds::files[4] = "/Samples/Piano/Piano.ff.G2.mp3";
        Sounds::files[5] = "/Samples/Piano/Piano.ff.A2.mp3";
        Sounds::files[6] = "/Samples/Piano/Piano.ff.B2.mp3";
        Sounds::files[7] = "/Samples/Piano/Piano.ff.C3.mp3";
        Sounds::files[8] = "/Samples/Piano/Piano.ff.D3.mp3";
        Sounds::files[9] = "/Samples/Piano/Piano.ff.E3.mp3";
        Sounds::files[10] = "/Samples/Piano/Piano.ff.F3.mp3";
        Sounds::files[11] = "/Samples/Piano/Piano.ff.G3.mp3";
        Sounds::files[12] = "/Samples/Piano/Piano.ff.A3.mp3";
        Sounds::files[13] = "/Samples/Piano/Piano.ff.B3.mp3";
        Sounds::files[14] = "/Samples/Piano/Piano.ff.C4.mp3";
        Sounds::files[15] = "/Samples/Piano/Piano.ff.D4.mp3";
        Sounds::files[16] = "/Samples/Piano/Piano.ff.E4.mp3";
        Sounds::files[17] = "/Samples/Piano/Piano.ff.F4.mp3";
        Sounds::files[18] = "/Samples/Piano/Piano.ff.G4.mp3";
        Sounds::files[19] = "/Samples/Piano/Piano.ff.A4.mp3";
        Sounds::files[20] = "/Samples/Piano/Piano.ff.B4.mp3";
        Sounds::files[21] = "/Samples/Piano/Piano.ff.C5.mp3";
        Sounds::files[22] = "/Samples/Piano/Piano.ff.D5.mp3";
        Sounds::files[23] = "/Samples/Piano/Piano.ff.E5.mp3";
        Sounds::files[24] = "/Samples/Piano/Piano.ff.F5.mp3";
        Sounds::files[25] = "/Samples/Piano/Piano.ff.G5.mp3";
        Sounds::files[26] = "/Samples/Piano/Piano.ff.A5.mp3";
        Sounds::files[27] = "/Samples/Piano/Piano.ff.B5.mp3";
        Sounds::files[28] = "/Samples/Piano/Piano.ff.C6.mp3";
        break;
    case 5: // Rhodes
        Sounds::files[0] = "/Samples/Rhodes/RSP73 sus m3 C2 -11.mp3";
        Sounds::files[1] = "/Samples/Rhodes/RSP73 sus m3 C#2 -11.mp3";
        Sounds::files[2] = "/Samples/Rhodes/RSP73 sus m3 D2 -11.mp3";
        Sounds::files[3] = "/Samples/Rhodes/RSP73 sus m3 D#2 -11.mp3";
        Sounds::files[4] = "/Samples/Rhodes/RSP73 sus m3 E2 -11.mp3";
        Sounds::files[5] = "/Samples/Rhodes/RSP73 sus m3 F2 -11.mp3";
        Sounds::files[6] = "/Samples/Rhodes/RSP73 sus m3 F#2 -11.mp3";
        Sounds::files[7] = "/Samples/Rhodes/RSP73 sus m3 G2 -11.mp3";
        Sounds::files[8] = "/Samples/Rhodes/RSP73 sus m3 G#2 -11.mp3";
        Sounds::files[9] = "/Samples/Rhodes/RSP73 sus m3 A2 -11.mp3";
        Sounds::files[10] = "/Samples/Rhodes/RSP73 sus m3 A#2 -11.mp3";
        Sounds::files[11] = "/Samples/Rhodes/RSP73 sus m3 B2 -11.mp3";
        Sounds::files[12] = "/Samples/Rhodes/RSP73 sus m3 C3 -11.mp3";
        Sounds::files[13] = "/Samples/Rhodes/RSP73 sus m3 C#3 -11.mp3";
        Sounds::files[14] = "/Samples/Rhodes/RSP73 sus m3 D3 -11.mp3";
        Sounds::files[15] = "/Samples/Rhodes/RSP73 sus m3 D#3 -11.mp3";
        Sounds::files[16] = "/Samples/Rhodes/RSP73 sus m3 E3 -11.mp3";
        Sounds::files[17] = "/Samples/Rhodes/RSP73 sus m3 F3 -11.mp3";
        Sounds::files[18] = "/Samples/Rhodes/RSP73 sus m3 F#3 -11.mp3";
        Sounds::files[19] = "/Samples/Rhodes/RSP73 sus m3 G3 -11.mp3";
        Sounds::files[20] = "/Samples/Rhodes/RSP73 sus m3 G#3 -11.mp3";
        Sounds::files[21] = "/Samples/Rhodes/RSP73 sus m3 A3 -11.mp3";
        Sounds::files[22] = "/Samples/Rhodes/RSP73 sus m3 A#3 -11.mp3";
        Sounds::files[23] = "/Samples/Rhodes/RSP73 sus m3 B3 -11.mp3";
        Sounds::files[24] = "/Samples/Rhodes/RSP73 sus m3 C4 -11.mp3";
        Sounds::files[25] = "/Samples/Rhodes/RSP73 sus m3 C#4 -11.mp3";
        Sounds::files[26] = "/Samples/Rhodes/RSP73 sus m3 D4 -11.mp3";
        Sounds::files[27] = "/Samples/Rhodes/RSP73 sus m3 D#4 -11.mp3";
        Sounds::files[28] = "/Samples/Rhodes/RSP73 sus m3 E4 -11.mp3";
        Sounds::files[29] = "/Samples/Rhodes/RSP73 sus m3 F4 -11.mp3";
        Sounds::files[30] = "/Samples/Rhodes/RSP73 sus m3 F#4 -11.mp3";
        Sounds::files[31] = "/Samples/Rhodes/RSP73 sus m3 G4 -11.mp3";
        Sounds::files[32] = "/Samples/Rhodes/RSP73 sus m3 G#4 -11.mp3";
        Sounds::files[33] = "/Samples/Rhodes/RSP73 sus m3 A4 -11.mp3";
        Sounds::files[34] = "/Samples/Rhodes/RSP73 sus m3 A#4 -11.mp3";
        Sounds::files[35] = "/Samples/Rhodes/RSP73 sus m3 B4 -11.mp3";
        Sounds::files[36] = "/Samples/Rhodes/RSP73 sus m3 C5 -11.mp3";
        Sounds::files[37] = "/Samples/Rhodes/RSP73 sus m3 C#5 -11.mp3";
        Sounds::files[38] = "/Samples/Rhodes/RSP73 sus m3 D5 -11.mp3";
        Sounds::files[39] = "/Samples/Rhodes/RSP73 sus m3 D#5 -11.mp3";
        Sounds::files[40] = "/Samples/Rhodes/RSP73 sus m3 E5 -11.mp3";
        Sounds::files[41] = "/Samples/Rhodes/RSP73 sus m3 F5 -11.mp3";
        Sounds::files[42] = "/Samples/Rhodes/RSP73 sus m3 F#5 -11.mp3";
        Sounds::files[43] = "/Samples/Rhodes/RSP73 sus m3 G5 -11.mp3";
        Sounds::files[44] = "/Samples/Rhodes/RSP73 sus m3 G#5 -11.mp3";
        Sounds::files[45] = "/Samples/Rhodes/RSP73 sus m3 A5 -11.mp3";
        Sounds::files[46] = "/Samples/Rhodes/RSP73 sus m3 A#5 -11.mp3";
        Sounds::files[47] = "/Samples/Rhodes/RSP73 sus m3 B5 -11.mp3";
        Sounds::files[48] = "/Samples/Rhodes/RSP73 sus m3 C6 -11.mp3";
        Sounds::files[49] = "/Samples/Rhodes/RSP73 sus m3 C#6 -11.mp3";
        Sounds::files[50] = "/Samples/Rhodes/RSP73 sus m3 D6 -11.mp3";
        Sounds::files[51] = "/Samples/Rhodes/RSP73 sus m3 D#6 -11.mp3";
        Sounds::files[52] = "/Samples/Rhodes/RSP73 sus m3 E6 -11.mp3";
        Sounds::files[53] = "/Samples/Rhodes/RSP73 sus m3 F6 -11.mp3";
        Sounds::files[54] = "/Samples/Rhodes/RSP73 sus m3 F#6 -11.mp3";
        Sounds::files[55] = "/Samples/Rhodes/RSP73 sus m3 G6 -11.mp3";
        Sounds::files[56] = "/Samples/Rhodes/RSP73 sus m3 G#6 -11.mp3";
        Sounds::files[57] = "/Samples/Rhodes/RSP73 sus m3 A6 -11.mp3";
        Sounds::files[58] = "/Samples/Rhodes/RSP73 sus m3 A#6 -11.mp3";
        Sounds::files[59] = "/Samples/Rhodes/RSP73 sus m3 B6 -11.mp3";
        Sounds::files[60] = "/Samples/Rhodes/RSP73 sus m3 C7 -11.mp3";
        break;
    case 6: // Clavichord
        Sounds::files[0] = "/Samples/Clavichord/D6C-DB s-M2 -10 C1.mp3";
        Sounds::files[1] = "/Samples/Clavichord/D6C-DB s-M4 -10 C#1.mp3";
        Sounds::files[2] = "/Samples/Clavichord/D6C-DB s-M4 -10 D1.mp3";
        Sounds::files[3] = "/Samples/Clavichord/D6C-DB s-M4 -10 D#1.mp3";
        Sounds::files[4] = "/Samples/Clavichord/D6C-DB s-M4 -10 E1.mp3";
        Sounds::files[5] = "/Samples/Clavichord/D6C-DB s-M4 -10 F0.mp3";
        Sounds::files[6] = "/Samples/Clavichord/D6C-DB s-M4 -10 F#0.mp3";
        Sounds::files[7] = "/Samples/Clavichord/D6C-DB s-M4 -10 G0.mp3";
        Sounds::files[8] = "/Samples/Clavichord/D6C-DB s-M4 -10 G#0.mp3";
        Sounds::files[9] = "/Samples/Clavichord/D6C-DB s-M4 -10 A1.mp3";
        Sounds::files[10] = "/Samples/Clavichord/D6C-DB s-M4 -10 A#1.mp3";
        Sounds::files[11] = "/Samples/Clavichord/D6C-DB s-M4 -10 B0.mp3";
        Sounds::files[12] = "/Samples/Clavichord/D6C-DB s-M4 -10 C1.mp3";
        Sounds::files[13] = "/Samples/Clavichord/D6C-DB s-M4 -10 C#1.mp3";
        Sounds::files[14] = "/Samples/Clavichord/D6C-DB s-M4 -10 D1.mp3";
        Sounds::files[15] = "/Samples/Clavichord/D6C-DB s-M4 -10 D#1.mp3";
        Sounds::files[16] = "/Samples/Clavichord/D6C-DB s-M4 -10 E1.mp3";
        Sounds::files[17] = "/Samples/Clavichord/D6C-DB s-M4 -10 F1.mp3";
        Sounds::files[18] = "/Samples/Clavichord/D6C-DB s-M4 -10 F#1.mp3";
        Sounds::files[19] = "/Samples/Clavichord/D6C-DB s-M4 -10 G1.mp3";
        Sounds::files[20] = "/Samples/Clavichord/D6C-DB s-M4 -10 G#1.mp3";
        Sounds::files[21] = "/Samples/Clavichord/D6C-DB s-M4 -10 A1.mp3";
        Sounds::files[22] = "/Samples/Clavichord/D6C-DB s-M4 -10 A#1.mp3";
        Sounds::files[23] = "/Samples/Clavichord/D6C-DB s-M4 -10 B1.mp3";
        Sounds::files[24] = "/Samples/Clavichord/D6C-DB s-M4 -10 C2.mp3";
        Sounds::files[25] = "/Samples/Clavichord/D6C-DB s-M4 -10 C#2.mp3";
        Sounds::files[26] = "/Samples/Clavichord/D6C-DB s-M4 -10 D2.mp3";
        Sounds::files[27] = "/Samples/Clavichord/D6C-DB s-M4 -10 D#2.mp3";
        Sounds::files[28] = "/Samples/Clavichord/D6C-DB s-M4 -22 E2.mp3";
        Sounds::files[29] = "/Samples/Clavichord/D6C-DB s-M4 -22 F2.mp3";
        Sounds::files[30] = "/Samples/Clavichord/D6C-DB s-M4 -22 F#2.mp3";
        Sounds::files[31] = "/Samples/Clavichord/D6C-DB s-M4 -22 G2.mp3";
        Sounds::files[32] = "/Samples/Clavichord/D6C-DB s-M4 -22 G#2.mp3";
        Sounds::files[33] = "/Samples/Clavichord/D6C-DB s-M4 -22 A2.mp3";
        Sounds::files[34] = "/Samples/Clavichord/D6C-DB s-M4 -22 A#2.mp3";
        Sounds::files[35] = "/Samples/Clavichord/D6C-DB s-M4 -22 B2.mp3";
        Sounds::files[36] = "/Samples/Clavichord/D6C-DB s-M4 -22 C3.mp3";
        Sounds::files[37] = "/Samples/Clavichord/D6C-DB s-M4 -22 C#3.mp3";
        Sounds::files[38] = "/Samples/Clavichord/D6C-DB s-M4 -22 D3.mp3";
        Sounds::files[39] = "/Samples/Clavichord/D6C-DB s-M4 -22 D#3.mp3";
        Sounds::files[40] = "/Samples/Clavichord/D6C-DB s-M4 -22 E3.mp3";
        Sounds::files[41] = "/Samples/Clavichord/D6C-DB s-M4 -22 F3.mp3";
        Sounds::files[42] = "/Samples/Clavichord/D6C-DB s-M4 -22 F#3.mp3";
        Sounds::files[43] = "/Samples/Clavichord/D6C-DB s-M4 -22 G3.mp3";
        Sounds::files[44] = "/Samples/Clavichord/D6C-DB s-M4 -22 G#3.mp3";
        Sounds::files[45] = "/Samples/Clavichord/D6C-DB s-M4 -22 A3.mp3";
        Sounds::files[46] = "/Samples/Clavichord/D6C-DB s-M4 -22 A#3.mp3";
        Sounds::files[47] = "/Samples/Clavichord/D6C-DB s-M4 -20 B3.mp3";
        Sounds::files[48] = "/Samples/Clavichord/D6C-DB s-M4 -20 C4.mp3";
        Sounds::files[49] = "/Samples/Clavichord/D6C-DB s-M4 -20 C#4.mp3";
        Sounds::files[50] = "/Samples/Clavichord/D6C-DB s-M4 -20 D4.mp3";
        Sounds::files[51] = "/Samples/Clavichord/D6C-DB s-M4 -20 D#4.mp3";
        Sounds::files[52] = "/Samples/Clavichord/D6C-DB s-M4 -20 E4.mp3";
        Sounds::files[53] = "/Samples/Clavichord/D6C-DB s-M4 -20 F4.mp3";
        Sounds::files[54] = "/Samples/Clavichord/D6C-DB s-M4 -20 F#4.mp3";
        Sounds::files[55] = "/Samples/Clavichord/D6C-DB s-M4 -20 G4.mp3";
        Sounds::files[56] = "/Samples/Clavichord/D6C-DB s-M4 -20 G#4.mp3";
        Sounds::files[57] = "/Samples/Clavichord/D6C-DB s-M4 -20 A4.mp3";
        Sounds::files[58] = "/Samples/Clavichord/D6C-DB s-M4 -20 A#4.mp3";
        Sounds::files[59] = "/Samples/Clavichord/D6C-DB s-M4 -20 B4.mp3";
        Sounds::files[60] = "/Samples/Clavichord/D6C-DB s-M4 -20 C5.mp3";
        break;
    case 7: // Guitar
        Sounds::files[0] = "/Samples/Guitar/Sound L5-9.mp3";
        Sounds::files[1] = "/Samples/Guitar/Sound L5-10.mp3";
        Sounds::files[2] = "/Samples/Guitar/Sound L5-11.mp3";
        Sounds::files[3] = "/Samples/Guitar/Sound L5-12.mp3";
        Sounds::files[4] = "/Samples/Guitar/Sound L5-13.mp3";
        Sounds::files[5] = "/Samples/Guitar/Sound L5-14.mp3";
        Sounds::files[6] = "/Samples/Guitar/Sound L5-15.mp3";
        Sounds::files[7] = "/Samples/Guitar/Sound L5-16.mp3";
        Sounds::files[8] = "/Samples/Guitar/Sound L5-17.mp3";
        Sounds::files[9] = "/Samples/Guitar/Sound L5-18.mp3";
        Sounds::files[10] = "/Samples/Guitar/Sound L5-19.mp3";
        Sounds::files[11] = "/Samples/Guitar/Sound L5-20.mp3";
        Sounds::files[12] = "/Samples/Guitar/Sound L5-21.mp3";
        Sounds::files[13] = "/Samples/Guitar/Sound L5-22.mp3";
        Sounds::files[14] = "/Samples/Guitar/Sound L5-23.mp3";
        Sounds::files[15] = "/Samples/Guitar/Sound L5-24.mp3";
        Sounds::files[16] = "/Samples/Guitar/Sound L5-1.mp3";
        Sounds::files[17] = "/Samples/Guitar/Sound L5-2.mp3";
        Sounds::files[18] = "/Samples/Guitar/Sound L5-3.mp3";
        Sounds::files[19] = "/Samples/Guitar/Sound L5-4.mp3";
        Sounds::files[20] = "/Samples/Guitar/Sound L5-5.mp3";
        Sounds::files[21] = "/Samples/Guitar/Sound L5-6.mp3";
        Sounds::files[22] = "/Samples/Guitar/Sound L5-7.mp3";
        Sounds::files[23] = "/Samples/Guitar/Sound L5-8.mp3";
        Sounds::files[24] = "/Samples/Guitar/Sound L5-9.mp3";
        Sounds::files[25] = "/Samples/Guitar/Sound L5-10.mp3";
        Sounds::files[26] = "/Samples/Guitar/Sound L5-11.mp3";
        Sounds::files[27] = "/Samples/Guitar/Sound L5-12.mp3";
        Sounds::files[28] = "/Samples/Guitar/Sound L5-13.mp3";
        Sounds::files[29] = "/Samples/Guitar/Sound L5-14.mp3";
        Sounds::files[30] = "/Samples/Guitar/Sound L5-15.mp3";
        Sounds::files[31] = "/Samples/Guitar/Sound L5-16.mp3";
        Sounds::files[32] = "/Samples/Guitar/Sound L5-17.mp3";
        Sounds::files[33] = "/Samples/Guitar/Sound L5-18.mp3";
        Sounds::files[34] = "/Samples/Guitar/Sound L5-19.mp3";
        Sounds::files[35] = "/Samples/Guitar/Sound L5-20.mp3";
        Sounds::files[36] = "/Samples/Guitar/Sound L5-21.mp3";
        Sounds::files[37] = "/Samples/Guitar/Sound L5-22.mp3";
        Sounds::files[38] = "/Samples/Guitar/Sound L5-23.mp3";
        Sounds::files[39] = "/Samples/Guitar/Sound L5-24.mp3";
        Sounds::files[40] = "/Samples/Guitar/Sound L5-25.mp3";
        Sounds::files[41] = "/Samples/Guitar/Sound L5-26.mp3";
        Sounds::files[42] = "/Samples/Guitar/Sound L5-27.mp3";
        Sounds::files[43] = "/Samples/Guitar/Sound L5-28.mp3";
        Sounds::files[44] = "/Samples/Guitar/Sound L5-29.mp3";
        Sounds::files[45] = "/Samples/Guitar/Sound L5-30.mp3";
        Sounds::files[46] = "/Samples/Guitar/Sound L5-31.mp3";
        Sounds::files[47] = "/Samples/Guitar/Sound L5-32.mp3";
        Sounds::files[48] = "/Samples/Guitar/Sound L5-33.mp3";
        Sounds::files[49] = "/Samples/Guitar/Sound L5-34.mp3";
        Sounds::files[50] = "/Samples/Guitar/Sound L5-35.mp3";
        Sounds::files[51] = "/Samples/Guitar/Sound L5-36.mp3";
        Sounds::files[52] = "/Samples/Guitar/Sound L5-37.mp3";
        Sounds::files[53] = "/Samples/Guitar/Sound L5-38.mp3";
        Sounds::files[54] = "/Samples/Guitar/Sound L5-39.mp3";
        Sounds::files[55] = "/Samples/Guitar/Sound L5-40.mp3";
        Sounds::files[56] = "/Samples/Guitar/Sound L5-41.mp3";
        Sounds::files[57] = "/Samples/Guitar/Sound L5-42.mp3";
        Sounds::files[58] = "/Samples/Guitar/Sound L5-43.mp3";
        Sounds::files[59] = "/Samples/Guitar/Sound L5-44.mp3";
        Sounds::files[60] = "/Samples/Guitar/Sound 46 L3.mp3";
        break;
    case 8: // Glockenspiel
        Sounds::files[0] = "/Samples/Glockenspiel/Angel_C3.mp3";
        Sounds::files[1] = "/Samples/Glockenspiel/Angel_C#3.mp3";
        Sounds::files[2] = "/Samples/Glockenspiel/Angel_D3.mp3";
        Sounds::files[3] = "/Samples/Glockenspiel/Angel_D#3.mp3";
        Sounds::files[4] = "/Samples/Glockenspiel/Angel_E3.mp3";
        Sounds::files[5] = "/Samples/Glockenspiel/Angel_F3.mp3";
        Sounds::files[6] = "/Samples/Glockenspiel/Angel_F#3.mp3";
        Sounds::files[7] = "/Samples/Glockenspiel/Angel_G3.mp3";
        Sounds::files[8] = "/Samples/Glockenspiel/Angel_G#3.mp3";
        Sounds::files[9] = "/Samples/Glockenspiel/Angel_A2.mp3";
        Sounds::files[10] = "/Samples/Glockenspiel/Angel_A#2.mp3";
        Sounds::files[11] = "/Samples/Glockenspiel/Angel_B2.mp3";
        Sounds::files[12] = "/Samples/Glockenspiel/Angel_C3.mp3";
        Sounds::files[13] = "/Samples/Glockenspiel/Angel_C#3.mp3";
        Sounds::files[14] = "/Samples/Glockenspiel/Angel_D3.mp3";
        Sounds::files[15] = "/Samples/Glockenspiel/Angel_D#3.mp3";
        Sounds::files[16] = "/Samples/Glockenspiel/Angel_E3.mp3";
        Sounds::files[17] = "/Samples/Glockenspiel/Angel_F3.mp3";
        Sounds::files[18] = "/Samples/Glockenspiel/Angel_F#3.mp3";
        Sounds::files[19] = "/Samples/Glockenspiel/Angel_G3.mp3";
        Sounds::files[20] = "/Samples/Glockenspiel/Angel_G#3.mp3";
        Sounds::files[21] = "/Samples/Glockenspiel/Angel_A3.mp3";
        Sounds::files[22] = "/Samples/Glockenspiel/Angel_A#3.mp3";
        Sounds::files[23] = "/Samples/Glockenspiel/Angel_B3.mp3";
        Sounds::files[24] = "/Samples/Glockenspiel/Angel_C4.mp3";
        Sounds::files[25] = "/Samples/Glockenspiel/Angel_C#4.mp3";
        Sounds::files[26] = "/Samples/Glockenspiel/Angel_D4.mp3";
        Sounds::files[27] = "/Samples/Glockenspiel/Angel_D#4.mp3";
        Sounds::files[28] = "/Samples/Glockenspiel/Angel_E4.mp3";
        Sounds::files[29] = "/Samples/Glockenspiel/Angel_F4.mp3";
        Sounds::files[30] = "/Samples/Glockenspiel/Angel_F#4.mp3";
        Sounds::files[31] = "/Samples/Glockenspiel/Angel_G4.mp3";
        Sounds::files[32] = "/Samples/Glockenspiel/Angel_A2.mp3";
        Sounds::files[33] = "/Samples/Glockenspiel/Angel_A#2.mp3";
        Sounds::files[34] = "/Samples/Glockenspiel/Angel_B2.mp3";
        Sounds::files[35] = "/Samples/Glockenspiel/Angel_C3.mp3";
        Sounds::files[36] = "/Samples/Glockenspiel/Angel_C#3.mp3";
        Sounds::files[37] = "/Samples/Glockenspiel/Angel_D3.mp3";
        Sounds::files[38] = "/Samples/Glockenspiel/Angel_D#3.mp3";
        Sounds::files[39] = "/Samples/Glockenspiel/Angel_E3.mp3";
        Sounds::files[40] = "/Samples/Glockenspiel/Angel_F3.mp3";
        Sounds::files[41] = "/Samples/Glockenspiel/Angel_F#3.mp3";
        Sounds::files[42] = "/Samples/Glockenspiel/Angel_G3.mp3";
        Sounds::files[43] = "/Samples/Glockenspiel/Angel_G#3.mp3";
        Sounds::files[44] = "/Samples/Glockenspiel/Angel_A3.mp3";
        Sounds::files[45] = "/Samples/Glockenspiel/Angel_A#3.mp3";
        Sounds::files[46] = "/Samples/Glockenspiel/Angel_B3.mp3";
        Sounds::files[47] = "/Samples/Glockenspiel/Angel_C4.mp3";
        Sounds::files[48] = "/Samples/Glockenspiel/Angel_C#4.mp3";
        Sounds::files[49] = "/Samples/Glockenspiel/Angel_D4.mp3";
        Sounds::files[50] = "/Samples/Glockenspiel/Angel_D#4.mp3";
        Sounds::files[51] = "/Samples/Glockenspiel/Angel_E4.mp3";
        Sounds::files[52] = "/Samples/Glockenspiel/Angel_F4.mp3";
        Sounds::files[53] = "/Samples/Glockenspiel/Angel_F#4.mp3";
        Sounds::files[54] = "/Samples/Glockenspiel/Angel_G4.mp3";
        Sounds::files[55] = "/Samples/Glockenspiel/Angel_G#3.mp3";
        Sounds::files[56] = "/Samples/Glockenspiel/Angel_A3.mp3";
        Sounds::files[57] = "/Samples/Glockenspiel/Angel_A#3.mp3";
        Sounds::files[58] = "/Samples/Glockenspiel/Angel_B3.mp3";
        Sounds::files[59] = "/Samples/Glockenspiel/Angel_Gliss_Down_02.mp3";
        Sounds::files[60] = "/Samples/Glockenspiel/Angel_Gliss_Up_03.mp3";
        break;
    case 9: // Drums
        Sounds::files[0] = "/Samples/Glockenspiel/Angel_C3.mp3";
        Sounds::files[1] = "/Samples/Glockenspiel/Angel_C#3.mp3";
        Sounds::files[2] = "/Samples/Glockenspiel/Angel_D3.mp3";
        Sounds::files[3] = "/Samples/Glockenspiel/Angel_D#3.mp3";
        Sounds::files[4] = "/Samples/Glockenspiel/Angel_E3.mp3";
        Sounds::files[5] = "/Samples/Glockenspiel/Angel_F3.mp3";
        Sounds::files[6] = "/Samples/Glockenspiel/Angel_F#3.mp3";
        Sounds::files[7] = "/Samples/Glockenspiel/Angel_G3.mp3";
        Sounds::files[8] = "/Samples/Glockenspiel/Angel_G#3.mp3";
        Sounds::files[9] = "/Samples/Glockenspiel/Angel_A2.mp3";
        Sounds::files[10] = "/Samples/Glockenspiel/Angel_A#2.mp3";
        Sounds::files[11] = "/Samples/Glockenspiel/Angel_B2.mp3";
        Sounds::files[12] = "/Samples/Glockenspiel/Angel_C3.mp3";
        Sounds::files[13] = "/Samples/Glockenspiel/Angel_C#3.mp3";
        Sounds::files[14] = "/Samples/Glockenspiel/Angel_D3.mp3";
        Sounds::files[15] = "/Samples/Glockenspiel/Angel_D#3.mp3";
        Sounds::files[16] = "/Samples/Glockenspiel/Angel_E3.mp3";
        Sounds::files[17] = "/Samples/Glockenspiel/Angel_F3.mp3";
        Sounds::files[18] = "/Samples/Glockenspiel/Angel_F#3.mp3";
        Sounds::files[19] = "/Samples/Glockenspiel/Angel_G3.mp3";
        Sounds::files[20] = "/Samples/Glockenspiel/Angel_G#3.mp3";
        Sounds::files[21] = "/Samples/Glockenspiel/Angel_A3.mp3";
        Sounds::files[22] = "/Samples/Glockenspiel/Angel_A#3.mp3";
        Sounds::files[23] = "/Samples/Glockenspiel/Angel_B3.mp3";
        Sounds::files[24] = "/Samples/Glockenspiel/Angel_C4.mp3";
        Sounds::files[25] = "/Samples/Glockenspiel/Angel_C#4.mp3";
        Sounds::files[26] = "/Samples/Glockenspiel/Angel_D4.mp3";
        Sounds::files[27] = "/Samples/Glockenspiel/Angel_D#4.mp3";
        Sounds::files[28] = "/Samples/Glockenspiel/Angel_E4.mp3";
        Sounds::files[29] = "/Samples/Glockenspiel/Angel_F4.mp3";
        Sounds::files[30] = "/Samples/Glockenspiel/Angel_F#4.mp3";
        Sounds::files[31] = "/Samples/Glockenspiel/Angel_G4.mp3";
        Sounds::files[32] = "/Samples/Glockenspiel/Angel_A2.mp3";
        Sounds::files[33] = "/Samples/Glockenspiel/Angel_A#2.mp3";
        Sounds::files[34] = "/Samples/Glockenspiel/Angel_B2.mp3";
        Sounds::files[35] = "/Samples/Drums/YMkit-Kick-78.mp3";
        Sounds::files[36] = "/Samples/Glockenspiel/Angel_C#3.mp3";
        Sounds::files[37] = "/Samples/Glockenspiel/Angel_D3.mp3";
        Sounds::files[38] = "/Samples/Glockenspiel/Angel_D#3.mp3";
        Sounds::files[39] = "/Samples/Glockenspiel/Angel_E3.mp3";
        Sounds::files[40] = "/Samples/Drums/YMkit-Snare-Hit-42.mp3";
        Sounds::files[41] = "/Samples/Glockenspiel/Angel_F#3.mp3";
        Sounds::files[42] = "/Samples/Glockenspiel/Angel_G3.mp3";
        Sounds::files[43] = "/Samples/Glockenspiel/Angel_G#3.mp3";
        Sounds::files[44] = "/Samples/Glockenspiel/Angel_A3.mp3";
        Sounds::files[45] = "/Samples/Drums/YMkit-Hihat-Tip00-24.mp3";
        Sounds::files[46] = "/Samples/Glockenspiel/Angel_B3.mp3";
        Sounds::files[47] = "/Samples/Drums/YMkit-Ride-Mid-15.mp3";
        Sounds::files[48] = "/Samples/Glockenspiel/Angel_C#4.mp3";
        Sounds::files[49] = "/Samples/Glockenspiel/Angel_D4.mp3";
        Sounds::files[50] = "/Samples/Glockenspiel/Angel_D#4.mp3";
        Sounds::files[51] = "/Samples/Glockenspiel/Angel_E4.mp3";
        Sounds::files[52] = "/Samples/Glockenspiel/Angel_F4.mp3";
        Sounds::files[53] = "/Samples/Glockenspiel/Angel_F#4.mp3";
        Sounds::files[54] = "/Samples/Glockenspiel/Angel_G4.mp3";
        Sounds::files[55] = "/Samples/Glockenspiel/Angel_G#3.mp3";
        Sounds::files[56] = "/Samples/Glockenspiel/Angel_A3.mp3";
        Sounds::files[57] = "/Samples/Glockenspiel/Angel_A#3.mp3";
        Sounds::files[58] = "/Samples/Glockenspiel/Angel_B3.mp3";
        Sounds::files[59] = "/Samples/Glockenspiel/Angel_Gliss_Down_02.mp3";
        Sounds::files[60] = "/Samples/Glockenspiel/Angel_Gliss_Up_03.mp3";
        break;
    default:
        break;
    }


}