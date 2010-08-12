// -*- C++ -*-

namespace Tetra {

class Parameter {
protected:
  Parameter(const char* name, int nrpnNumber);
};

class OscillatorFrequency
  : public Parameter
{
public:
  OscillatorFrequency(const char* name, int nrpnNumber)
    : Parameter(name, nrpnNumber)
  {}
};


class OscillatorFineTune
  : public Parameter
{
public:
  OscillatorFineTune(const char* name, int nrpnNumber)
    : Parameter(name, nrpnNumber)
  {}
};

class OscillatorShape
  : public Parameter
{
public:
  OscillatorShape(const char* name, int nrpnNumber)
    : Parameter(name, nrpnNumber)
  {}
};

class Amount
  : public Parameter
{
public:
  Amount(const char* name, int nrpnNumber)
    : Parameter(name, nrpnNumber)
  {}
};

class OnOff
  : public Parameter
{
public:
  OnOff(const char* name, int nrpnNumber)
    : Parameter(name, nrpnNumber)
  {}
};

class GlideMode
  : public Parameter
{
public:
  GlideMode(const char* name, int nrpnNumber)
    : Parameter(name, nrpnNumber)
  {}
};

class OscillatorSlop
  : public Parameter
{
public:
  OscillatorSlop(const char* name, int nrpnNumber)
    : Parameter(name, nrpnNumber)
  {}
};

class PitchBendRange
  : public Parameter
{
public:
  PitchBendRange(const char* name, int nrpnNumber)
    : Parameter(name, nrpnNumber)
  {}
};

class OscillatorMix
  : public Parameter
{
public:
  OscillatorMix(const char* name, int nrpnNumber)
    : Parameter(name, nrpnNumber)
  {}
};

class FilterFrequency
  : public Parameter
{
public:
  FilterFrequency(const char* name, int nrpnNumber)
    : Parameter(name, nrpnNumber)
  {}
};

class FilterPoles
  : public Parameter
{
public:
  FilterPoles(const char* name, int nrpnNumber)
    : Parameter(name, nrpnNumber)
  {}
};

class PosNegAmount
  : public Parameter
{
public:
  PosNegAmount(const char* name, int nrpnNumber)
    : Parameter(name, nrpnNumber)
  {}
};

class LFOFrequency
  : public Parameter
{
public:
  LFOFrequency(const char* name, int nrpnNumber)
    : Parameter(name, nrpnNumber)
  {}
};

class LFOShape
  : public Parameter
{
public:
  LFOShape(const char* name, int nrpnNumber)
    : Parameter(name, nrpnNumber)
  {}
};

class ModulationDestination
  : public Parameter
{
public:
  ModulationDestination(const char* name, int nrpnNumber)
    : Parameter(name, nrpnNumber)
  {}
};

class ModulationSource
  : public Parameter
{
public:
  ModulationSource(const char* name, int nrpnNumber)
    : Parameter(name, nrpnNumber)
  {}
};

class UnisonMode
  : public Parameter
{
public:
  UnisonMode(const char* name, int nrpnNumber)
    : Parameter(name, nrpnNumber)
  {}
};

class KeyMode
  : public Parameter
{
public:
  KeyMode(const char* name, int nrpnNumber)
    : Parameter(name, nrpnNumber)
  {}
};

class PushItMode
  : public Parameter
{
public:
  PushItMode(const char* name, int nrpnNumber)
    : Parameter(name, nrpnNumber)
  {}
};

class KeyboardMode
  : public Parameter
{
public:
  KeyboardMode(const char* name, int nrpnNumber)
    : Parameter(name, nrpnNumber)
  {}
};

class ClockDivide
  : public Parameter
{
public:
  ClockDivide(const char* name, int nrpnNumber)
    : Parameter(name, nrpnNumber)
  {}
};

class ArpeggiatorMode
  : public Parameter
{
public:
  ArpeggiatorMode(const char* name, int nrpnNumber)
    : Parameter(name, nrpnNumber)
  {}
};

class SequencerTrigger
  : public Parameter
{
public:
  SequencerTrigger(const char* name, int nrpnNumber)
    : Parameter(name, nrpnNumber)
  {}
};

class ParameterNumber
  : public Parameter
{
public:
  ParameterNumber(const char* name, int nrpnNumber)
    : Parameter(name, nrpnNumber)
  {}
};

};
