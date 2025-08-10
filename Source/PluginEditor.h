#pragma once
#include <JuceHeader.h>
class FullMixSculptorProAudioProcessor;

class FullMixSculptorProAudioProcessorEditor : public juce::AudioProcessorEditor {
public:
  explicit FullMixSculptorProAudioProcessorEditor (FullMixSculptorProAudioProcessor& p);
  void paint (juce::Graphics&) override;
  void resized() override;

private:
  FullMixSculptorProAudioProcessor& processor;
  JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (FullMixSculptorProAudioProcessorEditor)
};
