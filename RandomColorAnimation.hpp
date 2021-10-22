#pragma once
#include "Animation.hpp"
 
class RandomColorAnimation : public Animation {
public:
    RandomColorAnimation(Display* display, uint32_t startTick = 0) : Animation(display, 100, startTick) { }
    void animateTick();
};
