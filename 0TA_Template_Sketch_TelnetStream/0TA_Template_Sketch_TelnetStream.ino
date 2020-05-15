#include "OTA.h"

unsigned long entry;

void setup() {
  Serial.begin(115200);
  Serial.println("Booting");
  ArduinoOTA.setHostname("TemplateSketch");
  setupOTA();
  
}

void loop() {
  entry=micros();
  ArduinoOTA.handle();
  TelnetStream.println(micros()-entry);
  TelnetStream.println("Loop");
  delay(1000);
}
