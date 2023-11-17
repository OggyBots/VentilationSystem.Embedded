//
// Created by tomasdrah on 12.11.2023.
//

#ifndef VENTILATIONSYSTEM_EMBEDDED_PINARDUINO_HPP
#define VENTILATIONSYSTEM_EMBEDDED_PINARDUINO_HPP

#include "IPin.hpp"
#include "Arduino.h"

namespace Foundation {

    class PinArduino : public IPin {
        int Pin;
    public:
        explicit PinArduino(int pin) : Pin(pin) {}

        void PinMode(GpioDirection mode) override {
            pinMode(Pin, OUTPUT);
        }

        void DigitalWrite(GpioDigitalState state) override {
            digitalWrite(Pin, state);
        }

        GpioDigitalState DigitalRead() override {
            return static_cast<GpioDigitalState>(digitalRead(Pin));
        }

        bool SupportsPWMWrite() override {
            return true;
        }

        void PWMWrite(int value) override {
            analogWrite(Pin, value);
        }

        bool SupportsAnalogRead() override {
            return true;
        }

        int AnalogRead() override {
            return analogRead(Pin);
        }
    };

} // Foundation

#endif //VENTILATIONSYSTEM_EMBEDDED_PINARDUINO_HPP
