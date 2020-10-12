// #define ESP32_RTOS  // Uncomment this line if you want to use the code with freertos (only works on the ESP32)

#include "OTA.h"

void setup() {
  Serial.begin(115200);
  Serial.println("Booting");

  setupOTA("TemplateSketch");

  // your code

}

void loop() {
#ifndef ESP32_RTOS
  ArduinoOTA.handle();
#endif

  delay(20);

  // your code here

}
