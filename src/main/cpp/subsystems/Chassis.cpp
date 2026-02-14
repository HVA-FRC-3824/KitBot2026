#include "subsystems/Chassis.h"

#pragma region Constructor
Chasis::Chasis() 
{
    m_leftChildMotor .Set(ctre::phoenix::motorcontrol::ControlMode::Follower, Constants::LEFT_MOTOR_1_CAN_ID);
    m_leftChildMotor.SetInverted(true);
    m_rightChildMotor.Set(ctre::phoenix::motorcontrol::ControlMode::Follower, Constants::RIGHT_MOTOR_1_CAN_ID);
    m_rightChildMotor.SetInverted(true);
    m_leftParentMotor .SetInverted(false);
    m_rightParentMotor.SetInverted(false);
}
#pragma endregion

#pragma region Drive
void Chasis::Drive(frc::ChassisSpeeds &speeds) 
{
    double turning_power = -1.0 * speeds.omega.value();
    double drive_power = -1.0 * speeds.vx();
    m_leftParentMotor .Set(ctre::phoenix::motorcontrol::ControlMode::PercentOutput, drive_power - turning_power);
    m_rightParentMotor.Set(ctre::phoenix::motorcontrol::ControlMode::PercentOutput, drive_power + turning_power);
}
#pragma endregion