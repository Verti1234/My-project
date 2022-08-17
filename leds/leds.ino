#include <FastLED.h>



#define NUM_LEDS 111  //ilosc diod

#define DATA_PIN 7   //D7
CRGB leds[NUM_LEDS];

void setup() {
 delay(2000);

     FastLED.addLeds<WS2812B, DATA_PIN, GRB>(leds, NUM_LEDS);  
     FastLED.setBrightness(255);
}

void loop() {
  for (int i = 0; i <NUM_LEDS; i++) {
    leds[i] = CRGB(255,0,0);  // (x,x,x) podmianka na inne kolory
  }
  FastLED.show();
}

//fiolet (150,0,255)
