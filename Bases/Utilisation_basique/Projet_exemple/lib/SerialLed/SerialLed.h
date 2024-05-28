#ifndef SERIALLED_H
#define SERIALLED_H

#include <Arduino.h>

class SerialLed
{
private:
    uint32_t _led_pin;
public:
    SerialLed();
    SerialLed(uint32_t led_pin);

    void begin(uint32_t led_pin);

    int8_t ReadCommand(HardwareSerial S = Serial);
};

#endif /* SERIALLED_H */
