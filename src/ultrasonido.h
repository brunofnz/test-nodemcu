#ifndef __INCLUDE_ULTRASONIDO
#define __INCLUDE_ULTRASONIDO
#include <Arduino.h>

#define Pecho D6
#define Ptrig D7
extern long distancia;   

void setup_ultrasonic();
void measure();
#endif