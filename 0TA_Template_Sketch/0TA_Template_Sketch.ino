#include "OTA.h"
unsigned long entry;
void setup() {
  Serial.begin(115200);
  Serial.println("Booting");

  setupOTA("TemplateSketch");

  // your code

}

void loop() {
  ArduinoOTA.handle();
  
  // your code here

}
