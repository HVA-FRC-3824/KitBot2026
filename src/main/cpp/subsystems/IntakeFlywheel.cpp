#include "subsystems/IntakeFlywheel.h"

#pragma region Constructor
IntakeFlywheel::IntakeFlywheel() 
{
    m_intakeFlywheelMotor.SetInverted(true);
    m_intakeOuttakeMotor.SetInverted(false);
}
#pragma endregion

#pragma region Run Flywheel
void IntakeFlywheel::RunFlywheel() 
{
    m_intakeFlywheelMotor.SetVoltage(Constants::SHOOT_VOLTAGE);
    m_intakeOuttakeMotor .SetInverted(false);
    m_intakeOuttakeMotor .SetVoltage(Constants::SHOOT_VOLTAGE);
}
#pragma endregion

#pragma region Run Intake
void IntakeFlywheel::RunIntake() 
{
    m_intakeFlywheelMotor.SetVoltage(Constants::INTAKING_FLYWHEEL_VOLTAGE);
    m_intakeOuttakeMotor .SetInverted(false);
    m_intakeOuttakeMotor .SetVoltage(-Constants::INTAKE_OUTTAKE_VOLTAGE);
}
#pragma endregion

#pragma region Stop
void IntakeFlywheel::Stop()
{
    m_intakeFlywheelMotor.SetVoltage(0_V);
    m_intakeOuttakeMotor .SetVoltage(0_V);
}
#pragma endregion