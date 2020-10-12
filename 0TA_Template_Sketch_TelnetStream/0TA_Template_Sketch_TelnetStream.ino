// #define ESP32_RTOS  // Uncomment this line if you want to use the code with freertos (only works on the ESP32)
#include "OTA.h"

unsigned long entry;

void setup() {
  Serial.begin(115200);
  Serial.println("Booting");
  setupOTA("TemplateSketch");
  
}

void loop() {
  TelnetStream.read();  // Seems including this line in the loop is the only way to get anything to display with TelnetStream
  
  entry=micros();
  
  #ifndef ESP32_RTOS
  ArduinoOTA.handle();
  #endif
  
  TelnetStream.println(micros()-entry);
  TelnetStream.println("Loop");
  delay(1000);
}
