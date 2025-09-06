#ifndef BUZZERCONTROL_H
#define BUZZERCONTROL_H

#include <Arduino.h>

class BuzzerControl {
  private:
    int pin;
  public:
    BuzzerControl(int p);   // Constructor
<<<<<<< HEAD
    void encender();
    void apagar();        // Comeent
    void beep(int tiempo_ms); 
=======
    void encender();        //Enceneder el Led
    void apagar();
    void beep(int tiempo_ms);
>>>>>>> e5f4fc753c0a1f7d57a58c286096b4da7fcf9163
};

#endif
