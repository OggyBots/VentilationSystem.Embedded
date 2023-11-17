#include <gtest/gtest.h>
// uncomment line below if you plan to use GMock
// #include <gmock/gmock.h>

// TEST(...)
// TEST_F(...)

#if defined(ARDUINO)
#include <Arduino.h>

void setup()
{
    // should be the same value as for the `test_speed` option in "platformio.ini"
    // default value is test_speed=115200
    Serial.begin(115200);

    ::testing::InitGoogleTest();
    // if you plan to use GMock, replace the line above with
    // ::testing::InitGoogleMock();
}

void loop()
{
    // Run tests
    if (RUN_ALL_TESTS())
        ;

    // sleep for 1 sec
    delay(1000);
}

#else
int main(int argc, char **argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    // if you plan to use GMock, replace the line above with
    // ::testing::InitGoogleMock(&argc, argv);

    if (RUN_ALL_TESTS())
    ;

    // Always return zero-code and allow PlatformIO to parse results
    return 0;
}
#endif

//#define FOUNDATION_TARGET_PLATFORM_INCLUDE_ARDUINO 1
//
//#include <Arduino.h>
//#include "Foundation/Foundation.hpp"
//
//
//
//
//#include "googletest/include/gtest/gtest.h"
//
//void setup() {
//    Serial.begin(115200);
//    delay(1000);
//
//    ::testing::InitGoogleTest();
//
//    /*
//      workaround until
//      https://github.com/platformio/platformio-core/issues/3572
//      is resolved
//    */
//    if (!RUN_ALL_TESTS()) {
//        Serial.pritnln("Tests Failures Ignored :PASS");
//    } else {
//        Serial.println("Tests Failures Ignored :FAIL");
//    }
//}
//
//void loop() {}