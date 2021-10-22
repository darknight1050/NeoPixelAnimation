#include "main.hpp"
#include "NeoPixelDisplay.hpp"
#include "RainbowMovingAnimation.hpp"

#define PIN 6 

#define NUMPIXELS 25

NeoPixelDisplay display(NUMPIXELS, PIN);
RainbowMovingAnimation animation(&display);

void setup() {
  Serial.begin(9600);
  display.begin();
}

void loop() {
  animation.runTick();
}
