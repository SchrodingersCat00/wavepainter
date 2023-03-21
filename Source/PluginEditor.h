#pragma once

#include "Oscilloscope.h"
#include "PluginProcessor.h"

//==============================================================================
class WavepainterAudioProcessorEditor  : public juce::AudioProcessorEditor
{
public:
    explicit WavepainterAudioProcessorEditor (WavepainterAudioProcessor&);
    ~WavepainterAudioProcessorEditor() override;

    //==============================================================================
    void paint (juce::Graphics&) override;
    void resized() override;

private:
    // This reference is provided as a quick way for your editor to
    // access the processor object that created it.
    WavepainterAudioProcessor& processorRef;

    Oscilloscope oscilloscope;

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (WavepainterAudioProcessorEditor)
};
