#pragma once
#include "main.hpp"
 
class Color {
private:
    uint32_t color;

public:
    Color() {
        color = 0;
    }
    
    Color(uint32_t color_) {
        color = color_;
    }
    
    Color(uint8_t r, uint8_t g, uint8_t b, uint8_t w = 0) {
        color = ((uint32_t)w << 24) | ((uint32_t)r << 16) | ((uint32_t)g << 8) | b;
    }
    
    uint8_t getR() const { return (uint8_t)(color >> 16); }

    uint8_t getG() const { return (uint8_t)(color >> 8); }

    uint8_t getB() const { return (uint8_t)(color); }
    
    uint8_t getW() const { return (uint8_t)(color >> 24); }

    void setR(uint8_t r) {
        color &= 0xFF00FFFF; color |= ((uint32_t)r << 16); }

    void setG(uint8_t g) {
        color &= 0xFFFF00FF;
        color |= ((uint32_t)g << 8);
    }

    void setB(uint8_t b) {
        color &= 0xFFFFFF00;
        color |= ((uint32_t)b);
    }

    void setW(uint8_t w) {
        color &= 0x00FFFFFF;
        color |= ((uint32_t)w << 24);
    }

    void changeBrightness(uint8_t brightness) {
        float factor = 255.0/brightness;
        color = ((uint32_t)(getW()/factor) << 24) | ((uint32_t)(getR()/factor) << 16) | ((uint32_t)(getG()/factor) << 8) | (uint32_t)(getB()/factor);
    }
    
    operator uint32_t() const { return color; }
    
    static Color fromHSV(uint16_t hue, uint8_t sat = 255, uint8_t val = 255);
};
