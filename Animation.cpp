#include "Animation.hpp"
 
Animation::Animation(Display* display_, uint32_t startTick) {
    display = display_;
    pixels = new Color[display->getPixelCount()];
    currentTick = startTick;
}

void Animation::runTick() {
    currentTick++;
    animateTick();
    display->showPixels(pixels);
}
