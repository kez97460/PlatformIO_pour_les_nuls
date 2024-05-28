#include "SerialLed.h"

/**
 * @brief Construct a new SerialLed object
 * 
 */
SerialLed::SerialLed()
{
}

/**
 * @brief Construct a new SerialLed object and link it to a pin
 * 
 * @param led_pin 
 */
SerialLed::SerialLed(uint32_t led_pin)
{
    _led_pin = led_pin;
    pinMode(_led_pin, OUTPUT);
    digitalWrite(_led_pin, LOW);
}

/**
 * @brief Link a SerialLed object to a pin (with a LED preferably)
 * 
 * @param led_pin 
 */
void SerialLed::begin(uint32_t led_pin)
{
    _led_pin = led_pin;
    pinMode(_led_pin, OUTPUT);
    digitalWrite(_led_pin, LOW);
}

/**
 * @brief Read a string from the given HardwareSerial object. 
 * If it contains "on", turns the LED on
 * If it contains "off", turns the LED off
 * 
 * @return -1 if nothing was read, the LED state otherwise
 * 
 */
int8_t SerialLed::ReadCommand(HardwareSerial S)
{
    if (S.available())
    {
        String str = S.readString();
        str.toLowerCase();
        if (str.indexOf("on") != -1)
        {
            digitalWrite(_led_pin, HIGH);
            return HIGH;
        }
        else if (str.indexOf("on") != -1)
        {
            digitalWrite(_led_pin, LOW);
            return LOW;
        }
    }
    return -1;
}