#include <Adafruit_NeoPixel.h>
 
// On définit le pin où est connecté la patte DATA du bandeau
#define PIN 0
 
// Parameter 1 = number of pixels in strip
// Parameter 2 = pin number (most are valid)
// Parameter 3 = pixel type flags, add together as needed:
//   NEO_KHZ800  800 KHz bitstream (most NeoPixel products w/WS2812 LEDs)
//   NEO_KHZ400  400 KHz (classic 'v1' (not v2) FLORA pixels, WS2811 drivers)
//   NEO_GRB     Pixels are wired for GRB bitstream (most NeoPixel products)
//   NEO_RGB     Pixels are wired for RGB bitstream (v1 FLORA pixels, not v2)
 
//Ici, le 150 correspond au nombre de led
Adafruit_NeoPixel strip (16, PIN, NEO_RGB + NEO_KHZ800);
 
void setup() {
  strip.begin();
  strip.clear();
  strip.setBrightness(5); 
  strip.show(); // Initialise toute les led à 'off'

  delay(1000);
}
 
void loop()
{
      for(int i = 0; i < 16; i++ ) 
      { // On fait une boucle pour définir les 50 premières led en rouge
      strip.setPixelColor(i, 255, 0, 0);
      strip.show(); // on affiche
      delay(200);
      }
      for(int i = 0; i < 16; i++ ) { // On fait une boucle pour définir les 50 led suivantes en bleu
        strip.setPixelColor(i, 0, 0, 255);
        strip.show(); // on affiche
      delay(200);
      }
      for(int i = 0; i < 16; i++ ) { // On fait une boucle pour définir les 50 dernières led en vert
        strip.setPixelColor(i, 0, 255, 0);
        strip.show(); // on affiche
      delay(200);
      }
//strip.show(); // on affiche 

delay(1000); }
