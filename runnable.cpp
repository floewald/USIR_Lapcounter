#include "build_options.hpp"
#include "pin_config.hpp"

#include "us_function.hpp"

#include "runnable.hpp"

Sensor_pair_t Sensor_pair[SENSOR_PAIR_NUMBER];


void usir_init()
{
    us_init(&(Sensor_pair->us_sensor));
}


void usir_cyclicRunMain(void)
{
    us_measureUSdistance(&(Sensor_pair[0].us_sensor));
    reaction(&(Sensor_pair[0].us_sensor.us_data));
}


/* Placeholder for reaction based on US data*/
void reaction(US_data_t * US_data)
{
    Serial.print("Measured distance: ");
    Serial.println(US_data->measured_distance);
    Serial.print("Border distance: ");
    Serial.println(US_data->boarder_distance);
    if ( (US_data->measured_distance) < (US_data->boarder_distance) )
    {
        digitalWrite(LED_GREEN, HIGH);
        digitalWrite(LED_RED, LOW);
    } else
    {
        digitalWrite(LED_GREEN, LOW);
        digitalWrite(LED_RED, HIGH);
    }
}