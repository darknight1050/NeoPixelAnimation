#pragma once
#include "main.hpp"
#include "Display.hpp"
 
class Animation {
private:
    uint32_t currentTick;
    Display* display;
protected:
    Color* pixels;
    virtual void animateTick() = 0;
public:
    Animation(Display* display, uint32_t startTick = 0);
    void runTick();
    uint32_t getCurrentTick() const { return currentTick; }
    Display* getDisplay() const { return display; }
    uint16_t getPixelCount() const { return display->getPixelCount(); }
};
