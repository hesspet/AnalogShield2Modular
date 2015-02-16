#pragma once
// 
// as2m_defs.h
//
// definitions for hardware depended constants
//
// For better understanding, Leds and Pots are numbered
// in the same way as on the faceplate. There is no channel 0!
// We start counting by 1. We have 4 INs and 4 OUTs and we
// use the logical not the technical numbering!
//
// published by JTUS 2015/02/16
//

#include <stdint.h> 
#include <Arduino.h>

// LEDs on the faceplate
const uint8_t LED1 = 7;
const uint8_t LED2 = 8;
const uint8_t LED3 = 9;
const uint8_t LED4 = 10;

// POTs on the faceplate
const uint8_t POT1 = A0;
const uint8_t POT2 = A1;
const uint8_t POT3 = A2;
const uint8_t POT4 = A3;

// logical numbering of the input jacks
const uint16_t IN1 = 0;
const uint16_t IN2 = 1;
const uint16_t IN3 = 2;
const uint16_t IN4 = 3;

// logical numbering of the output jacks
const uint16_t OUT1 = 0;
const uint16_t OUT2 = 1;
const uint16_t OUT3 = 2;
const uint16_t OUT4 = 3;

