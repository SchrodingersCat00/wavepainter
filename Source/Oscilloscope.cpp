#include "Oscilloscope.h"

Oscilloscope::Oscilloscope()
{
    setFramesPerSecond (240);
}

Oscilloscope::~Oscilloscope()
{
}

void Oscilloscope::paint (juce::Graphics& g)
{
    g.setColour (getLookAndFeel().findColour (juce::Slider::thumbColourId));

    auto fishLength = 15;

    juce::Path spinePath;

    for (auto i = 0; i < fishLength; ++i)
    {
        int radius = 150;

        juce::Point<float> p (getWidth() / 2.0f + 1.0f * radius * std::sin (getFrameCounter() * 0.04f + i * 0.12f),
            getHeight() / 2.0f + 1.0f * radius * std::cos (getFrameCounter() * 0.04f + i * 0.12f));

        // draw the circles along the fish
        g.fillEllipse (p.x - i, p.y - i, 2.0f + 2.0f * i, 2.0f + 2.0f * i); // [1]

        if (i == 0)
            spinePath.startNewSubPath (p); // if this is the first point, start a new path..
        else
            spinePath.lineTo (p); // ...otherwise add the next point
    }

    // draw an outline around the path that we have created
    g.strokePath (spinePath, juce::PathStrokeType (4.0f));
}

void Oscilloscope::resized()
{
}

void Oscilloscope::update()
{
}