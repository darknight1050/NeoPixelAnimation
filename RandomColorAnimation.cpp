#include "RandomColorAnimation.hpp"

void RandomColorAnimation::animateTick() {
    for(int i = 0; i < getPixelCount(); i++) {
        uint16_t h = random(0, 65535);
        uint8_t s = 255;
        uint8_t v = getBrightness();
        pixels[i] = Color::fromHSV(h, s, v);
    }
}
