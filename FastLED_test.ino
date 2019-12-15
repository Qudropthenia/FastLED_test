#define NUM_LEDS 13
#define DI_PIN 13
#define CURRENT_LIMIT 2000
#define BRIGHT 200           // Яркость
#define MAX_BRIGHT 255       // максимальная яркость (0 - 255)
#define MIN_BRIGHT 50        // минимальная яркость (0 - 255)
#define BRIGHT_CONSTANT 500  // константа усиления от внешнего света (0 - 1023)

#include <FastLED.h>
CRGB leds[NUM_LEDS];  // создаём ленту

void setup() {
  // put your setup code here, to run once:
  FastLED.addLeds<WS2812, DI_PIN, GRB>(leds, NUM_LEDS);  // инициализация светодиодов
  FastLED.setBrightness(BRIGHT); // Яркость светодиодов
}

void loop() {
  // put your main code here, to run repeatedly:
    LEDS.showColor(CRGB(255, 0, 0));
    delay(500);
    LEDS.showColor(CRGB(0, 255, 0));
    delay(500);
    LEDS.showColor(CRGB(0, 0, 255));
    delay(500);
    LEDS.showColor(CRGB(0, 0, 0));
}
