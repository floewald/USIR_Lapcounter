#ifndef GLOBAL_DEFINITION_HPP
#define GLOBAL_DEFINITION_HPP

#include "build_options.hpp"


typedef uint8_t pin_number_t;

typedef struct
{   pin_number_t trigger;
    pin_number_t echo;
} US_pinning_t;

typedef struct
{   pin_number_t trigger;
    pin_number_t echo;
} IR_pinning_t;

typedef struct
{   uint16_t measured_distance; 
    uint16_t boarder_distance;
} US_data_t;

typedef struct
{   uint16_t measured_distance;
    uint16_t boarder_distance;
} IR_data_t;

typedef struct
{   US_pinning_t pinning;
    US_data_t us_data;
} US_sensor_t;

typedef struct
{   IR_pinning_t pinning;
    IR_data_t ir_data;
} IR_sensor_t;

typedef struct
{
    US_sensor_t us_sensor;
    IR_sensor_t ir_sensor;
} Sensor_pair_t;


#endif /* GLOBAL_DEFINITION_HPP */
