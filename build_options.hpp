#ifndef BUILD_OPTIONS_HPP
#define BUILD_OPTIONS_HPP

#include <stdint.h>
#include <Arduino.h>

#define DEBUG 0
#define SENSOR_PAIR_NUMBER 1


/****************************************************/
/* scaling and preliminary parameters               */
/****************************************************/
/* US_border
Border used for the ultra sonic sensor to determin
if an change in the distance is recognized.
Value written down in [cm].

Scaling factor:
[cm] <-> sw_value: 
value = ((343.0f * 100.0f) / 1000000.0f) * sw_value

sonic speed: 343 m/s 
m to cm: 100.0f
s to microSeconds: 1000000.0f

*/
#define US_border_cm 20.0f

#define sonicSpeed 343.0f
#define m2cm 100.0f
#define seconds2microSeconds 1000000.0f
#define US_border_sw  US_border_cm / ((sonicSpeed * m2cm) / seconds2microSeconds)
/****************************************************/

#endif /* BUILD_OPTIONS_HPP */
