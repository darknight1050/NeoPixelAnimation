#pragma once
#include "Animation.hpp"
 
class RainbowMovingAnimation : public Animation {
public:
    RainbowMovingAnimation(Display* display, uint32_t startTick = 0) : Animation(display, startTick) { }
    void animateTick();
};
