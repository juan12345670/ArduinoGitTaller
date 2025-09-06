#ifndef BUZZERCONTROL_H
#define BUZZERCONTROL_H

#include <Arduino.h>

class BuzzerControl {
  private:
    int pin;
  public:
    BuzzerControl(int p);   // Constructor
    void encender();
    void apagar();
    void beep(int tiempo_ms);
};

#endif
