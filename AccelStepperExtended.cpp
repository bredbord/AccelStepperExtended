#include "AccelStepperExtended.h"

// Constructors
AccelStepperExtended::AccelStepperExtended(uint8_t interface, uint8_t pin1, uint8_t pin2, uint8_t pin3, uint8_t pin4, bool enable) : AccelStepper(interface, pin1, pin2, pin3, pin4, enable) { };
AccelStepperExtended::AccelStepperExtended(void (*forward)(), void (*backward)()) : AccelStepper(forward, backward) { };

// Extended Direction Function
bool AccelStepperExtended::getDirection() { return this->_direction; }