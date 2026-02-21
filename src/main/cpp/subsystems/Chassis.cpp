#include "subsystems/Chassis.h"

#pragma region Constructor
Chasis::Chasis() 
{
    m_leftChildMotor  .Configure(rev::spark::SparkBaseConfig().Follow(Constants::LEFT_MOTOR_1_CAN_ID, false), rev::spark::SparkBase::ResetMode::kResetSafeParameters, rev::spark::SparkBase::PersistMode::kPersistParameters);
    m_rightChildMotor .Configure(rev::spark::SparkBaseConfig().Follow(Constants::RIGHT_MOTOR_1_CAN_ID, false), rev::spark::SparkBase::ResetMode::kResetSafeParameters, rev::spark::SparkBase::PersistMode::kPersistParameters);
    m_leftParentMotor .SetInverted(true);
    m_rightParentMotor.SetInverted(true);
}
#pragma endregion

#pragma region Drive
void Chasis::Drive(frc::ChassisSpeeds &speeds) 
{
    double turning_power = speeds.vx();
    double drive_power = speeds.omega();
    m_leftParentMotor .Set((drive_power + turning_power));
    m_rightParentMotor.Set((drive_power - turning_power));
}
#pragma endregion