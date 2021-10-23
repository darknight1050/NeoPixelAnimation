#include "RainbowMovingAnimation.hpp"

void RainbowMovingAnimation::animateTick() {
  uint16_t stepCount = 65535/getPixelCount();
  for(int i = 0; i < getPixelCount(); i++) {
    uint16_t h = stepCount*i;
    h += getCurrentTick()*speed;
    uint8_t s = 255;
    uint8_t v = getBrightness();
    pixels[i] = Color::fromHSV(h, s, v);
  }
}
