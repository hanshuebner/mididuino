
#include "TetraEncoders.h"
#include "GUI.h"

static char* noteNames = "C C#D D#E F F#G G#A A#H ";

void
SequencerStepEncoder::displayAt(int i) {
  int value = getValue();
  if (value < 126) {
    if (notesMode) {
      static char buf[5];
      uint8_t octave = value / 24;
      uint8_t note = (value % 24) >> 1;
      buf[0] = noteNames[note * 2];
      buf[1] = noteNames[note * 2 + 1];
      buf[2] = '0' + octave;
      buf[3] = (value & 1) ? '+' : ' ';
      GUI.put_string_at(i * 4, buf, 4);
    } else {
      RangeEncoder::displayAt(i);
    }
  } else {
    GUI.put_string_at(i * 4, (value == 126) ? "RST" : "PSE");
  }
}

