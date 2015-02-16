#pragma once
//
// as2m_helper.h
//
// published by JTUS 2015/02/16
//
//
// published by JTUS 2015/02/16
//

#include "as2m_defs.h"

class as2m_helper 
{

public:

  //
  // Initialize ports and flash alle Lets after setup of the ports
  //
  // @param mustChaseOnStartup
  //   true, flash all LED after intialisation (default)
  //
  static inline void InitLeds(boolean mustChaseOnStartup = true)
  {
    // put your setup code here, to run once:
    pinMode(LED1, OUTPUT);
    pinMode(LED2, OUTPUT);
    pinMode(LED3, OUTPUT);
    pinMode(LED4, OUTPUT);
    
    if (!mustChaseOnStartup) return;
    
    // do not use a "for" iteration, cause LEDs maybe not in sequence!
    digitalWrite( LED1, HIGH);
    digitalWrite( LED2, HIGH);
    digitalWrite( LED3, HIGH);
    digitalWrite( LED4, HIGH);
    
    delay(500);

    digitalWrite( LED1, LOW);
    digitalWrite( LED2, LOW);
    digitalWrite( LED3, LOW);
    digitalWrite( LED4, LOW);
  }

  //
  // Initialize the Pins for the pots
  //  
  static inline void InitPots() 
  {
      pinMode(POT1, INPUT);
      pinMode(POT2, INPUT);
      pinMode(POT3, INPUT);
      pinMode(POT4, INPUT);
  }
  
private:

};
