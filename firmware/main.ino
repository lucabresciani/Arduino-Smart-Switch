/*
  DIY Smart Switch – Arduino Cloud Sketch
  ---------------------------------------
  This sketch controls an SG90 servo motor using an Arduino Nano ESP32,
  connected to the Arduino Cloud via a boolean variable (`pc`).

  When `pc` is set to true from the cloud dashboard, the servo moves
  to press a physical button or switch, then resets its position.

  Licensed under the MIT License. See LICENSE file for details.

  Required library:
  - ESP32Servo https://github.com/jkb-git/ESP32Servo.git
*/

#include "thingProperties.h"
#include <ESP32Servo.h>  // Make sure to install this library

#define POSITION_PRESSED   80
#define POSITION_RELEASED  0

Servo servo;

void setup() {
  Serial.begin(9600);
  delay(1500); // Wait for Serial Monitor

  initProperties();  // Arduino Cloud variable setup
  ArduinoCloud.begin(ArduinoIoTPreferredConnection);

  setDebugMessageLevel(2);  // Increase for more verbose debug info
  ArduinoCloud.printDebugInfo();

  pinMode(LED_BUILTIN, OUTPUT);

  // Configure PWM and attach servo
  ESP32PWM::allocateTimer(0);
  ESP32PWM::allocateTimer(1);
  ESP32PWM::allocateTimer(2);
  ESP32PWM::allocateTimer(3);
  servo.setPeriodHertz(50); // Standard 50 Hz for servo
  servo.attach(9, 1000, 2000); // Pin 9, pulse width range
}

void loop() {
  ArduinoCloud.update();
}

/*
  This function is triggered when the `pc` variable changes
  from the Arduino Cloud Dashboard.
*/
void onPcChange() {
  if (pc) {
    servo.write(POSITION_PRESSED);
    digitalWrite(LED_BUILTIN, HIGH);
    delay(1000);
    servo.write(POSITION_RELEASED);
    digitalWrite(LED_BUILTIN, LOW);

    // Optionally reset pc to false after action:
    // pc = false;
  }
}
