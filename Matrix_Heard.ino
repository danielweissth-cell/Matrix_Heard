#include <Wire.h>
#include "Adafruit_LEDBackpack.h"
#include "Adafruit_GFX.h"
Adafruit_LEDBackpack matrix = Adafruit_LEDBackpack();

void setup() {
  Serial.begin(9600);

  matrix.begin(0x70);

 matrix.setBrightness(5);
}



void loop() {
Frame1();
delay(1500);
Frame2();
delay(1500);
Frame3();
delay(1500);
Frame4();
delay(1500);
Frame3();
delay(1500);
Frame2();
delay(1500);
  // Можно добавить мигание (опционально)
 // delay(500);
 // matrix.clear();
 // matrix.writeDisplay();
 // delay(500);
}

void Frame1 () {
const uint8_t heart[8] = {
  0b00000000,  // ░░░░░░░░
  0b01100110,  // ░██░░██░
  0b11111111,  // ████████
  0b11111111,  // ████████
  0b01111110,  // ░██████░
  0b00111100,  // ░░████░░
  0b00011000,  // ░░░██░░░
  0b00000000   // ░░░░░░░░
};
  for (uint8_t i = 0; i < 8; i++) {
    matrix.displaybuffer[i] = heart[i];
  }
  matrix.writeDisplay();
}

void Frame2 () {
const uint8_t heart[8] = {
  0b00000000,  
  0b00100100,  
  0b01111110,  
  0b01111110,  
  0b00111100,  
  0b00011000,  
  0b00000000, 
  0b00000000   
};
  for (uint8_t i = 0; i < 8; i++) {
    matrix.displaybuffer[i] = heart[i];
  }
  matrix.writeDisplay();
}

void Frame3 () {
const uint8_t heart[8] = {
  0b00000000, 
  0b00000000,  
  0b00100100,  
  0b00111100,  
  0b00011000,  
  0b00000000,  
  0b00000000,  
  0b00000000   
};
  for (uint8_t i = 0; i < 8; i++) {
    matrix.displaybuffer[i] = heart[i];
  }
  matrix.writeDisplay();
}

void Frame4 () {
const uint8_t heart[8] = {
  0b00000000,  
  0b00000000,  
  0b00000000,  
  0b00011000,  
  0b00000000,  
  0b00000000,  
  0b00000000,  
  0b00000000   
};
  for (uint8_t i = 0; i < 8; i++) {
    matrix.displaybuffer[i] = heart[i];
  }
  matrix.writeDisplay();
}
