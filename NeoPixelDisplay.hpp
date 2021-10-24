#pragma once
#include "Display.hpp"
#include <Adafruit_NeoPixel.h>

class NeoPixelDisplay : public Display {
private:
    Adafruit_NeoPixel neoPixelAPI;
public:
    NeoPixelDisplay(uint16_t pixelCount, int16_t pin, neoPixelType type = NEO_GRB + NEO_KHZ800) : Display(pixelCount), neoPixelAPI(Adafruit_NeoPixel(pixelCount, pin, type)) { }
    
    void begin() {
        neoPixelAPI.begin();
    }
    
    void showPixels(Color* pixels);
};
