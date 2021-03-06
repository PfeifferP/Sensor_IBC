#include <Arduino.h>
/*********
  HC-SR04
  VCC      -- Weiss
  GND      -- Blau
  Trigger  -- Braun
  Echo     -- Schwarz
*********/




#include <HCSR04.h>

byte triggerPin = 27;
byte echoPin = 14;

void setup () {
  Serial.begin(9600);
  HCSR04.begin(triggerPin, echoPin);
}

void loop () {
  float temperature = 25;
  
  double* distances = HCSR04.measureDistanceCm(temperature);
  
  Serial.print("1: ");
  Serial.print(distances[0]);
  Serial.println(" cm");
  
  Serial.println("---");
  delay(250);
}