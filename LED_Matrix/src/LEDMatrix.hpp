#pragma once
#include <Adafruit_NeoPixel.h>
#include <vector>


typedef std::array<unsigned char, 8*8*3> Image;

class LEDMatrix{
    private:
    int width;
    int height;
    int pin;
    int NUMPIXELS;

    public:

    //display public for debugging
    Adafruit_NeoPixel display;
    
    /// @brief LEDMatrix constructor
    /// @param w, h, serialpin 
    LEDMatrix(int serialpin);

    /// @brief display an image on the LED Matrix
    /// @param image 
    void showImage(const Image& image);

    void begin();
};


extern const Image ZERO, ONE, TWO, THREE, FOUR, FIVE, SIX, SEVEN, EIGHT, NINE,
                    UP, DOWN, LEFT, RIGHT, firefox;