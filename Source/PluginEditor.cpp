#include "PluginEditor.h"
#include "PluginProcessor.h"

FullMixSculptorProAudioProcessorEditor::FullMixSculptorProAudioProcessorEditor (FullMixSculptorProAudioProcessor& p)
: juce::AudioProcessorEditor (&p), processor(p)
{
  setSize (500, 260);
}

void FullMixSculptorProAudioProcessorEditor::paint (juce::Graphics& g) {
  g.fillAll (juce::Colour::fromRGB (10,10,12));
  g.setColour (juce::Colours::white);
  g.setFont (juce::Font (24.0f, juce::Font::bold));
  g.drawFittedText ("EMG PRODUCTION STUDIOS", {0,12,getWidth(),28}, juce::Justification::centredTop, 1);
  g.setFont (16.0f);
  g.drawFittedText ("FullMix Sculptor Pro (Minimal Build)", {0,48,getWidth(),24}, juce::Justification::centredTop, 1);
}

void FullMixSculptorProAudioProcessorEditor::resized() {}
