#pragma once
#include "Animation.hpp"
 
class RandomColorAnimation : public Animation {
public:
    RandomColorAnimation(Display* display, uint8_t brightness, uint32_t tickDelay = 100, uint32_t startTick = 0) : Animation(display, brightness, 0, tickDelay, startTick) { }
    void animateTick();
};
