/*
Created by: Andre Deveau
Created on: October 2023
Rotates a servo
*/

#include <Servo.h>

Servo servo;

void setup() {
  servo.attach(2);
  servo.write(0);
  delay(2000);
    
}

void loop() {
  servo.write(20);
  delay(1000);
  servo.write(0);
  delay(1000);
  
}