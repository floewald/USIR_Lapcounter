#include "global_definitions.hpp"
#include "build_options.hpp"

#include "pin_config.hpp"

#include "us_function.hpp"

void us_init(US_sensor_t * US_sensor)
{
    pin_init();
    US_sensor->us_data.boarder_distance = US_border_sw;
    
    /*TODO replace by for loop for multiple instances*/
    US_sensor->pinning.trigger = US_instance_0.trigger;
    US_sensor->pinning.echo = US_instance_0.echo;
}

void us_measureUSdistance(US_sensor_t * US_sensor)
{
    uint32_t duration;

    digitalWrite(US_sensor->pinning.trigger, LOW);
    delayMicroseconds(2);
    digitalWrite(US_sensor->pinning.trigger, HIGH);
    delayMicroseconds(5);
    digitalWrite(US_sensor->pinning.trigger, LOW);

    US_sensor->us_data.measured_distance = pulseIn(US_sensor->pinning.echo, HIGH);
}