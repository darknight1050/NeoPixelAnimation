#pragma once
#include "Animation.hpp"
 
class RainbowMovingAnimation : public Animation {
public:
    RainbowMovingAnimation(Display* display, uint8_t brightness, uint32_t speed = 25, uint32_t startTick = 0) : Animation(display, brightness, speed, 1, startTick) { }
    void animateTick();
};
