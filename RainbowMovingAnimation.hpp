#pragma once
#include "Animation.hpp"
 
class RainbowMovingAnimation : public Animation {
public:
    RainbowMovingAnimation(Display* display, uint32_t tickDelay = 0, uint32_t startTick = 0) : Animation(display, tickDelay, startTick) { }
    void animateTick();
};
