#include "PluginProcessor.h"

// JUCE factory to create your processor instance
juce::AudioProcessor* JUCE_CALLTYPE createPluginFilter() {
    return new FullMixSculptorProAudioProcessor();
}
