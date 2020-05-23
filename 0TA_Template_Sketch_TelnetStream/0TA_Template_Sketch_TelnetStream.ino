#include "OTA.h"

unsigned long entry;

void setup() {
  Serial.begin(115200);
  Serial.println("Booting");
  
  setupOTA("TemplateSketch");

  // your code here
  
}

void loop() {
  entry=micros();
  ArduinoOTA.handle();
  TelnetStream.println(micros()-entry);
  TelnetStream.println("Loop");
  delay(1000);

  // your code here

}
