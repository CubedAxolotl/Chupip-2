#include <SPI.h>
#include <Adafruit_GFX.h>
#include <Adafruit_ST7735.h>

// frames for animation
#include "pb1.h"
#include "pb2.h"
#include "pb3.h"
#include "pb4.h"
#include "pb5.h"
#include "pb6.h"
#include "pb7.h"
#include "pb8.h"



// Define your ESP32 pins for the TFT connection
#define TFT_CS    5   // Chip select pin
#define TFT_DC    16  // Data/Command pin
#define TFT_RST   17  // Reset pin (can be tied to ESP32 RST pin if needed, or another GPIO)
#define TFT_MOSI  23  // MOSI pin (default VSPI MOSI)
#define TFT_SCK   18  // Clock pin (default VSPI SCK)
#define TFT_LITE  4   // Backlight 



// Initialize the display instance
// Use hardware SPI by passing the pins in the constructor
Adafruit_ST7735 tft = Adafruit_ST7735(TFT_CS, TFT_DC, TFT_RST);

void setup() {
  pinMode(TFT_LITE, OUTPUT);
  digitalWrite(TFT_LITE, HIGH);

  tft.initR(INITR_BLACKTAB);
  tft.setRotation(1);
  tft.fillScreen(ST77XX_BLACK);
  
  uint16_t green = 0x1FE0;
 
  tft.drawBitmap(0, 0, pb1, 128, 60, green); 
}



void loop() {


/*

  tft.drawBitmap(0, 0, pb1, 128, 60, green); 
  delay(100);
  tft.drawBitmap(0, 0, pb2, 128, 60, green); 
  delay(100);
  tft.drawBitmap(0, 0, pb3, 128, 60, green); 
  delay(100);
  tft.drawBitmap(0, 0, pb4, 128, 60, green); 
  delay(100);
  tft.drawBitmap(0, 0, pb5, 128, 60, green); 
  delay(100);
  tft.drawBitmap(0, 0, pb6, 128, 60, green); 
  delay(100);
  tft.drawBitmap(0, 0, pb7, 128, 60, green); 
  delay(100);
  tft.drawBitmap(0, 0, pb8, 128, 60, green); 
  delay(100);


*/

  

}
