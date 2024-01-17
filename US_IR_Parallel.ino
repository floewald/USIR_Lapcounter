#include "runnable.hpp"

void setup()
{
    Serial.begin(115200);
    usir_init();
}

void loop()
{
    usir_cyclicRunMain();
}