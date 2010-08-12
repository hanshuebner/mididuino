// -*- C++ -*-

#include "WProgram.h"
#include "Encoders.hh"

class SequencerStepEncoder
: public RangeEncoder
{
public:
  SequencerStepEncoder(const char* name, int max = 126)
    : RangeEncoder(0, max, name),
      notesMode(false)
  {
  }

  void setNotesMode(bool mode) {
    if (mode) {
      fastmodestep = 24;
    } else {
      fastmodestep = 5;
    }
    notesMode = mode;
  }

private:
  virtual void displayAt(int i);

  bool notesMode;
};

class Sequencer1StepEncoder
: public SequencerStepEncoder
{
public:
  Sequencer1StepEncoder(const char* name)
  : SequencerStepEncoder(name, 127) {}
};

