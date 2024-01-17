#include "pin_config.hpp"

US_pinning_t US_instances_pinning[SENSOR_PAIR_NUMBER];

US_pinning_t US_instance_0;

void pin_init(void)
{
    pinMode(LED_GREEN, OUTPUT);
    pinMode(LED_RED, OUTPUT);
    
    US_instance_0.trigger = 12;
    pinMode(US_instance_0.trigger, OUTPUT);
    US_instance_0.echo = 13;
    pinMode(US_instance_0.echo, INPUT);

    US_instances_pinning[0] = US_instance_0;
}