#include "Animation.hpp"

void Animation::runTick() {
    currentTick++;
    animateTick();
    display->showPixels(pixels);
    if(tickDelay > 0)
        delay(tickDelay);
}
