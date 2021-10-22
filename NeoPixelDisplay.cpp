#include "NeoPixelDisplay.hpp"

void NeoPixelDisplay::showPixels(Color* pixels) {
    for (int i = 0; i < getPixelCount(); i++) {
        neoPixelAPI.setPixelColor(i, pixels[i]);
    }
    neoPixelAPI.show();
}
