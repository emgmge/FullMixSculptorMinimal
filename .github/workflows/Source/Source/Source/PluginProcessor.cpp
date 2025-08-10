#include "PluginProcessor.h"
#include "PluginEditor.h"

juce::AudioProcessorEditor* FullMixSculptorProAudioProcessor::createEditor() {
  return new FullMixSculptorProAudioProcessorEditor(*this);
}
