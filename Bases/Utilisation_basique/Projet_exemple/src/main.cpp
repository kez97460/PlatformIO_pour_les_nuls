#include <Arduino.h>

#include "SerialLed.h"

SerialLed led;

void setup()
{
    led.begin(LED_BUILTIN);
    Serial.begin(9600);
    while(!Serial);

    Serial.println("Init OK");
}

void loop()
{
    led.ReadCommand(Serial);
}