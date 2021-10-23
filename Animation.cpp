#include "Animation.hpp"
 
Animation::Animation(Display* display_, uint8_t brightness_, uint32_t tickDelay_, uint32_t startTick) {
    display = display_;
    pixels = new Color[display->getPixelCount()];
    brightness = brightness_;
    tickDelay = tickDelay_;
    currentTick = startTick;
}

void Animation::runTick() {
    currentTick++;
    animateTick();
    display->showPixels(pixels);
    if(tickDelay > 0)
        delay(tickDelay);
}
