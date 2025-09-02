#include <Arduino.h>
#include <FastLED.h>
#define MA_BROCHE_ANGLE 32

CRGB monPixel;


  
void setup() {
  Serial.begin(115200);
  FastLED.addLeds<WS2812, 27, GRB>(&monPixel, 1);


}

void loop() {
  int lectureAnalogique;
  lectureAnalogique = analogRead(MA_BROCHE_ANGLE);

  Serial.println(lectureAnalogique);
  delay(100);
  if(lectureAnalogique> 2000){
    monPixel = CRGB(0, 0, 255);
    FastLED.show();

  }else{
    monPixel = CRGB(0, 0, 0);
    FastLED.show();
  }
}
