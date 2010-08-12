// -*- C++ -*-

#include "Encoders.hh"
#include <util/delay.h>

class SequencerStepEncoder
: public RangeEncoder
{
public:
  SequencerStepEncoder(const char* name, int max = 126)
  : RangeEncoder(0, max, name) {}

private:
  virtual void displayAt(int i);
};

class Sequencer1StepEncoder
: public SequencerStepEncoder
{
public:
  Sequencer1StepEncoder(const char* name)
  : SequencerStepEncoder(name, 127) {}
};

