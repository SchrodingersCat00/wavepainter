#pragma once

#include "juce_core/system/juce_PlatformDefs.h"
#include <juce_gui_extra/juce_gui_extra.h>

class Oscilloscope : public juce::AnimatedAppComponent
{
public:
    explicit Oscilloscope();
    ~Oscilloscope() override;

    //============================================================
    void paint (juce::Graphics&) override;
    void resized() override;
    void update() override;

private:
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (Oscilloscope)
};