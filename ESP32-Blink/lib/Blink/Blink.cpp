#include "Arduino.h"
#include "Blink.h"

Blink::Blink(int pin) {
  pinMode(pin, OUTPUT);
  _pin = pin;
}

void Blink::now(void) {
  digitalWrite(_pin, HIGH);
  delay(_timeBetweenOnOffMillis);
  digitalWrite(_pin, LOW);
  delay(_timeBetweenOnOffMillis);
}