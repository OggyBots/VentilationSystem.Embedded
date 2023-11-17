#define FOUNDATION_TARGET_PLATFORM_INCLUDE_ARDUINO 1

#include <Arduino.h>
#include "Foundation/Foundation.hpp"


using Foundation::PinArduino;

PinArduino ledPin(LED_BUILTIN);
PinArduino analogPin(PIN_A0);


void setup() {
    ledPin.PinMode(Foundation::GpioDirection::Output);
    Serial.begin(9600);
}

void loop() {

    ledPin.DigitalWrite(Foundation::High);
    delay(2000);
    Serial.println(analogPin.AnalogRead());

    ledPin.DigitalWrite(Foundation::Low);
    delay(1000);
    Serial.println(analogPin.AnalogRead());
}