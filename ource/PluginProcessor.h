#pragma once
#include <JuceHeader.h>

class FullMixSculptorProAudioProcessor : public juce::AudioProcessor {
public:
  FullMixSculptorProAudioProcessor()
    : juce::AudioProcessor (BusesProperties()
        .withInput ("In",  juce::AudioChannelSet::stereo(), true)
        .withOutput("Out", juce::AudioChannelSet::stereo(), true)) {}

  void prepareToPlay (double, int) override {}
  void releaseResources() override {}

  bool isBusesLayoutSupported (const BusesLayout& l) const override {
    auto in  = l.getChannelSet (true, 0);
    auto out = l.getChannelSet (false, 0);
    return in == out &&
           (in == juce::AudioChannelSet::mono() || in == juce::AudioChannelSet::stereo());
  }

  void processBlock (juce::AudioBuffer<float>& buffer, juce::MidiBuffer& midi) override {
    juce::ignoreUnused(midi);
    // passthrough for now
  }

  juce::AudioProcessorEditor* createEditor() override;
  bool hasEditor() const override { return true; }

  const juce::String getName() const override { return "FullMixSculptorMinimal"; }
  bool acceptsMidi() const override { return false; }
  bool producesMidi() const override { return false; }
  bool isMidiEffect() const override { return false; }
  double getTailLengthSeconds() const override { return 0.0; }

  int getNumPrograms() override { return 1; }
  int getCurrentProgram() override { return 0; }
  void setCurrentProgram (int) override {}
  const juce::String getProgramName (int) override { return {}; }
  void changeProgramName (int, const juce::String&) override {}

  void getStateInformation (juce::MemoryBlock& destData) override { destData.clear(); }
  void setStateInformation (const void*, int) override {}
};
