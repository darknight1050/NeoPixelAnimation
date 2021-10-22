#pragma once
#include "main.hpp"
#include "Color.hpp"
 
class Display {
private:
    uint16_t pixelCount;
public:
    Display(uint16_t pixelCount);

    uint16_t getPixelCount() const { return pixelCount; }
    
    virtual void showPixels(Color* pixels) = 0;
};
