/*
  Blink
  Turns on an LED on for one second, then off for one second, repeatedly.

  Most Arduinos have an on-board LED you can control. On the Uno and
  Leonardo, it is attached to digital pin 13. If you're unsure what
  pin the on-board LED is connected to on your Arduino model, check
  the documentation at http://arduino.cc

  This example code is in the public domain.

  modified 8 May 2014
  by Scott Fitzgerald
*/

const int builtinLed = 13;
const int switchButton = 9;

// the setup function runs once when you press reset or power the board
void setup() {
	// initialize digital pin 13 as an output & pin 9 as input.
	pinMode(builtinLed, OUTPUT);
	pinMode(switchButton, INPUT);
}

// the loop function runs over and over again forever
void loop() {
	if (switchButton == LOW) {
		digitalWrite(builtinLed, HIGH);
	}
	else {
		digitalWrite(builtinLed, LOW);
	}
}
