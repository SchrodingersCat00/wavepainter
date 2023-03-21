#include "PluginEditor.h"
#include "PluginProcessor.h"

//==============================================================================
WavepainterAudioProcessorEditor::WavepainterAudioProcessorEditor (WavepainterAudioProcessor& p)
    : AudioProcessorEditor (&p), processorRef (p)
{
    juce::ignoreUnused (processorRef);
    // Make sure that before the constructor has finished, you've set the
    // editor's size to whatever you need it to be.
    setSize (1500, 1500);
}

WavepainterAudioProcessorEditor::~WavepainterAudioProcessorEditor()
{
}

//==============================================================================
void WavepainterAudioProcessorEditor::paint (juce::Graphics& g)
{
    // (Our component is opaque, so we must completely fill the background with a solid colour)
    g.fillAll (getLookAndFeel().findColour (juce::ResizableWindow::backgroundColourId));

    g.setColour (juce::Colours::white);
    g.setFont (15.0f);
    g.drawFittedText ("WOw this is a nice setup", getLocalBounds(), juce::Justification::centred, 1);
}

void WavepainterAudioProcessorEditor::resized()
{
    // This is generally where you'll want to lay out the positions of any
    // subcomponents in your editor..
}
