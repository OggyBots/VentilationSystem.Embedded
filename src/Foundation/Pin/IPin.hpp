//
// Created by tomasdrah on 12.11.2023.
//

#ifndef VENTILATIONSYSTEM_EMBEDDED_IPIN_HPP
#define VENTILATIONSYSTEM_EMBEDDED_IPIN_HPP

#include "Foundation/Enums.hpp"

namespace Foundation {


    class IPin {
    public:
        virtual void PinMode(GpioDirection mode) = 0;

        virtual void DigitalWrite(GpioDigitalState state) = 0;

        virtual GpioDigitalState DigitalRead() = 0;

        virtual bool SupportsPWMWrite() = 0;

        // 0 always off - 100 always on
        virtual void PWMWrite(int value) = 0;

        // Should return digital if not supported
        virtual bool SupportsAnalogRead() = 0;
        virtual int AnalogRead() = 0;

    };


} // Foundation

#endif //VENTILATIONSYSTEM_EMBEDDED_IPIN_HPP
