#include <Arduino.h>
#include <Adafruit_NeoPixel.h>
#include <LEDMatrix.hpp>
#include <vector>


LEDMatrix::LEDMatrix(int serialpin) 
  : display(8*8, serialpin, NEO_GRB + NEO_KHZ800)
{
  

}

void LEDMatrix::begin()
{
  display.begin();
  display.clear();
  display.show();
}


void LEDMatrix::showImage(const Image& image)
{
  display.clear();  //refresh display
  display.setBrightness(150);

  for(int pixel = 0; pixel < 8*8; pixel++){
    const int dataindex = pixel * 3;
    display.setPixelColor(pixel, image[dataindex], image[dataindex+1], image[dataindex+2]);

  }
  display.show();   //send serial signal
}
