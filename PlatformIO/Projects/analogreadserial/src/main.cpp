#include <Arduino.h>



void setup() {
    Serial.begin(9600);
}

void loop() {
  float sensorValue = analogRead(A0);
  Serial.println(sensorValue/204.6f);
}

