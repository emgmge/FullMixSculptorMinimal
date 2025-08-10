cmake_minimum_required(VERSION 3.16)
project(FullMixSculptorMinimal VERSION 0.1.0)

include(FetchContent)
FetchContent_Declare(juce GIT_REPOSITORY https://github.com/juce-framework/JUCE.git GIT_TAG 8.0.8)
FetchContent_MakeAvailable(juce)

set(PROJECT_SOURCES
    Source/PluginMain.cpp
    Source/PluginProcessor.h
    Source/PluginProcessor.cpp
    Source/PluginEditor.h
    Source/PluginEditor.cpp
)

juce_add_plugin(FullMixSculptorMinimal
    PRODUCT_NAME "FullMix Sculptor Pro"
    COMPANY_NAME "EMG Production Studios"
    BUNDLE_ID com.emg.fullmixsculptorpro
    PLUGIN_MANUFACTURER_CODE EMGP
    PLUGIN_CODE Fm00
    FORMATS VST3
    IS_SYNTH FALSE
    SOURCES ${PROJECT_SOURCES}
)

target_compile_features(FullMixSculptorMinimal PRIVATE cxx_std_20)
target_compile_definitions(FullMixSculptorMinimal PRIVATE
    JUCE_VST3_CAN_REPLACE_VST2=0 JUCE_WEB_BROWSER=0 JUCE_USE_CURL=0)
target_link_libraries(FullMixSculptorMinimal PRIVATE
    juce::juce_audio_utils juce::juce_dsp)
