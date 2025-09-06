#include "BuzzerControl.h"

BuzzerControl::BuzzerControl(int p) {
  pin = p;
  pinMode(pin, OUTPUT);
}

void BuzzerControl::encender() {
  digitalWrite(pin, HIGH);  // Enciende el buzzer
}

void BuzzerControl::apagar() {
  digitalWrite(pin, LOW);   // Apaga el buzzer
}

void BuzzerControl::beep(int tiempo_ms) {
  encender();
  delay(tiempo_ms);
  apagar();
}
