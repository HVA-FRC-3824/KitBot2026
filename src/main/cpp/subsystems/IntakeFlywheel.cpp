#include "subsystems/IntakeFlywheel.h"

#pragma region Constructor
IntakeFlywheel::IntakeFlywheel() 
{
    m_intakeFlywheelMotor.SetInverted(false);
    m_intakeOuttakeMotor.SetInverted(false);
}
#pragma endregion

#pragma region Run Flywheel
void IntakeFlywheel::RunFlywheel() 
{
    m_intakeFlywheelMotor.Set(ctre::phoenix::motorcontrol::ControlMode::PercentOutput, Constants::MAX_VOLTAGE.value());
    m_intakeOuttakeMotor .SetInverted(true);
    m_intakeOuttakeMotor .Set(ctre::phoenix::motorcontrol::ControlMode::PercentOutput, Constants::MAX_VOLTAGE.value());
}
#pragma endregion

#pragma region Run Intake
void IntakeFlywheel::RunIntake() 
{
    m_intakeFlywheelMotor.Set(ctre::phoenix::motorcontrol::ControlMode::PercentOutput, Constants::MAX_VOLTAGE.value());
    m_intakeOuttakeMotor .SetInverted(false);
    m_intakeOuttakeMotor .Set(ctre::phoenix::motorcontrol::ControlMode::PercentOutput, Constants::MAX_VOLTAGE.value());
}
#pragma endregion

#pragma region Stop
void IntakeFlywheel::Stop()
{
    m_intakeFlywheelMotor.Set(ctre::phoenix::motorcontrol::ControlMode::PercentOutput, 0);
    m_intakeOuttakeMotor .Set(ctre::phoenix::motorcontrol::ControlMode::PercentOutput, 0);
}
#pragma endregion