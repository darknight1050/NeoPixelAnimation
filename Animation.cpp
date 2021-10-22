#include "Animation.hpp"
 
Animation::Animation(Display* display_, uint32_t tickDelay_, uint32_t startTick) {
    tickDelay = tickDelay_;
    display = display_;
    pixels = new Color[display->getPixelCount()];
    currentTick = startTick;
}

void Animation::runTick() {
    currentTick++;
    animateTick();
    display->showPixels(pixels);
    if(tickDelay > 0)
        delay(tickDelay);
}
