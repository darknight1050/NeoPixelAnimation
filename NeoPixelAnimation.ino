#include "main.hpp"
#include "NeoPixelDisplay.hpp"
#include "RainbowMovingAnimation.hpp"
#include "RandomColorAnimation.hpp"

#define PIN 6 

#define NUMPIXELS 25

NeoPixelDisplay display(NUMPIXELS, PIN);
RainbowMovingAnimation animation(&display, 20, 25);
//RandomColorAnimation animation(&display, 20, 100);

void setup() {
  Serial.begin(9600);
  display.begin();
}

void loop() {
  animation.runTick();
}
