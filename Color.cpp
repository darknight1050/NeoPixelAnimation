#include "Color.hpp"
#include <Adafruit_NeoPixel.h>

Color Color::fromHSV(uint16_t hue, uint8_t sat = 255, uint8_t val = 255) {
  return Color(Adafruit_NeoPixel::ColorHSV(hue, sat, val));
}
