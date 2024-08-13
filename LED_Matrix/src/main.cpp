#include <Arduino.h>
#include <LEDMatrix.hpp>


int pin = 13;

LEDMatrix ledMatrix(pin);
std::array<Image, 10> numbers = {ZERO, ONE, TWO, THREE, FOUR, FIVE, SIX, SEVEN, EIGHT, NINE};

void setup() {
    ledMatrix.begin();
}

void loop() {
    for(int i = 0; i>=0; i++)
    {
        ledMatrix.showImage(numbers[i%10]);
        delay(500);
    }
}