#pragma once
#include "main.hpp"
#include "Display.hpp"
 
class Animation {
private:
    Display* display;
    uint8_t brightness;
    uint32_t tickDelay;
    uint32_t currentTick;
protected:
    Color* pixels;
    virtual void animateTick() = 0;
public:
    Animation(Display* display_, uint8_t brightness_ = 255, uint32_t tickDelay_ = 1, uint32_t startTick_ = 0) 
        : display(display_), brightness(brightness_), tickDelay(tickDelay_), currentTick(startTick_), pixels(new Color[display->getPixelCount()]) { }
    void runTick();
    Display* getDisplay() const { return display; }
    uint8_t getBrightness() const { return brightness; }
    void setBrightness(uint8_t brightness_) { brightness = brightness_; }
    uint32_t getTickDelay() const { return tickDelay; }
    uint32_t getCurrentTick() const { return currentTick; }
    uint16_t getPixelCount() const { return display->getPixelCount(); }

};
