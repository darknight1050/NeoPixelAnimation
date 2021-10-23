#pragma once
#include "Animation.hpp"
 
class RainbowMovingAnimation : public Animation {
private:
    uint32_t speed;
public:
    RainbowMovingAnimation(Display* display, uint8_t brightness, uint32_t speed_ = 25, uint32_t startTick = 0) : Animation(display, brightness, 1, startTick) {
        speed = speed_;
    }
    void animateTick();
};
