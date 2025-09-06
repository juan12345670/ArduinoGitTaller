#include "BuzzerControl.h"

const int PinB = 7; // Cambio a PIN 7
// Buzzer conectado al pin 4
BuzzerControl buzzer(PinB);

void setup() {
  buzzer.apagar();
}

void loop() {
  buzzer.beep(5000);   // Pitido de 500 ms
  delay(1000);        // Pausa 1 segundo
  buzzer.beep(200);   // Pitido corto de 200 ms
  delay(1000);        //Delay más largo :v
}
