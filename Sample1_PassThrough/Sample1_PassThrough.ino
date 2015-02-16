//
// Analog Shield 2 Modular
//
// Sample sourc to show a simple "pass through".
//
// reading everything at analog in 0 and writing to analog out 0 
//
// This sketch can be used to reach the maximum possible sampling 
// speed.
// 
// If the incomming frequency is to high, the sketch creates distorted/destroyed
// audio output.
//
// published by JTUS 2015/02/16
//
#include <stdint.h> 
#include <analogShield.h>
#include "as2m_helper.h"

//
// Init all ports
// Switch off all interrupt handling during run
// 
//
void setup() 
{
  as2m_helper::InitLeds();
  as2m_helper::InitPots();
  noInterrupts();
}

//
// Read a voltage from the Input and write the read value
// to the output, fast as possible
//
void loop() 
{
  int16_t voltage = analog.read(IN1);  // read the voltage at the jack numbered 1
  analog.write(OUT1, voltage);         // write out the voltage at the jace numbered 1 
}
