//
// Created by tomasdrah on 12.11.2023.
//

#ifndef VENTILATIONSYSTEM_EMBEDDED_FOUNDATION_HPP
#define VENTILATIONSYSTEM_EMBEDDED_FOUNDATION_HPP


//#define FOUNDATION_TARGET_PLATFORM_INCLUDE_ARDUINO 1

#include "Enums.hpp"
#include "Pin/IPin.hpp"

#if FOUNDATION_TARGET_PLATFORM_INCLUDE_ARDUINO == 1
#include "Foundation/Pin/PinArduino.hpp"
#endif


namespace Foundation {


} // Foundation

#endif //VENTILATIONSYSTEM_EMBEDDED_FOUNDATION_HPP
