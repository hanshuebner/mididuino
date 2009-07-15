#ifndef MIDI_H__
#define MIDI_H__

#include <stdlib.h>

#include <WProgram.h>

#include <MidiUartParent.hh>
#include <inttypes.h>

// #include "MidiSDS.hh"
#include "MidiSysex.hh"
#include "Vector.hh"
#include "Callback.hh"

extern "C" {
#include "midi-common.hh"
}

typedef struct {
  uint8_t      midi_status;
  midi_state_t next_state;
  midi_callback_t callback;
} midi_parse_t;

class MidiSysexClass;

class MidiClass {
 private:
  midi_state_t in_state;
  uint8_t last_status;
  uint8_t running_status;
  uint8_t in_msg_len;
  uint8_t msg[3];

  MidiUartParent *uart;

  uint8_t callback;
  midi_callback_t callbacks[7];
  Vector<midi_callback_t, 4>midiCallbacks[7];

 public:
  bool midiActive;

  uint8_t receiveChannel;

  MidiClass(MidiUartParent *_uart = NULL);

  void init();
  void handleByte(uint8_t c);

  void addCallback(uint8_t num, midi_callback_t cb);
  void removeCallback(uint8_t num, midi_callback_t cb);
  void setCallback(uint8_t num, midi_callback_t cb);

  void addOnControlChangeCallback(midi_callback_t);
  void removeOnControlChangeCallback(midi_callback_t);
  void setOnControlChangeCallback(midi_callback_t);

  void addOnNoteOnCallback(midi_callback_t);
  void removeOnNoteOnCallback(midi_callback_t);
  void setOnNoteOnCallback(midi_callback_t);

  void addOnNoteOffCallback(midi_callback_t);
  void removeOnNoteOffCallback(midi_callback_t);
  void setOnNoteOffCallback(midi_callback_t);

  void addOnAfterTouchCallback(midi_callback_t);
  void removeOnAfterTouchCallback(midi_callback_t);
  void setOnAfterTouchCallback(midi_callback_t);

  void addOnProgramChangeCallback(midi_callback_t);
  void removeOnProgramChangeCallback(midi_callback_t);
  void setOnProgramChangeCallback(midi_callback_t);

  void addOnChannelPressureCallback(midi_callback_t);
  void removeOnChannelPressureCallback(midi_callback_t);
  void setOnChannelPressureCallback(midi_callback_t);

  void addOnPitchWheelCallback(midi_callback_t);
  void removeOnPitchWheelCallback(midi_callback_t);
  void setOnPitchWheelCallback(midi_callback_t);
};

extern MidiClass Midi;
extern MidiClass Midi2;
extern MidiClass USBMidi;

#endif /* MIDI_H__ */
