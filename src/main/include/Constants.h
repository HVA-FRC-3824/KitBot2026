#pragma once

#pragma region Includes
#include <units/voltage.h>
#pragma endregion

namespace Constants 
{
    constexpr auto LEFT_MOTOR_1_CAN_ID  = 10;
    constexpr auto LEFT_MOTOR_2_CAN_ID  = 11;
    constexpr auto RIGHT_MOTOR_1_CAN_ID = 20;
    constexpr auto RIGHT_MOTOR_2_CAN_ID = 21;

    constexpr auto INTAKE_FLYWHEEL_MOTOR_CAN_ID = 30;
    constexpr auto INTAKE_OUTTAKE_MOTOR_CAN_ID = 31;

    constexpr auto MAX_VOLTAGE          = 10.6_V;

}