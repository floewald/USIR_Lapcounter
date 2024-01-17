#ifndef PIN_CONFIG_HPP
#define PIN_CONFIG_HPP

#include "build_options.hpp"
#include "global_definitions.hpp"

#if SENSOR_PAIR_NUMBER == 1
enum LED_PINS
{
    LED_RED = 5,
    LED_GREEN = 9,
};

/* Analog pins
The analog pins of the Arduino are mapped to a uint8.
    A0 <=> Pin 14
    A1 <=> Pin 15
    ...
*/
enum IR_PINS
{
    IR_ECHO = 14, 
};

extern US_pinning_t US_instance_0;

extern void pin_init(void);

#endif // SENSOR_PAIR_NUMBER == 1

#endif /* PIN_CONFIG_HPP */
