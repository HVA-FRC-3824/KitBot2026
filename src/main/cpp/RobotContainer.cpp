#include "RobotContainer.h"

#pragma region Constructor
RobotContainer::RobotContainer()
{

    m_chassis.SetDefaultCommand(
        DriveChasisCommand(&m_chassis, &m_chassisSpeeds)
    );
    frc2::JoystickButton(&m_controller, frc::XboxController::Button::kA).OnTrue(
        RunIntakeCommand(&m_intakeFlywheel)
    );
    frc2::JoystickButton(&m_controller, frc::XboxController::Button::kB).OnTrue(
        RunFlywheelCommand(&m_intakeFlywheel)
    );
    frc2::JoystickButton(&m_controller, frc::XboxController::Button::kX).OnTrue(
        StopIntakeFlywheelCommand(&m_intakeFlywheel)
    );
}
#pragma endregion

void RobotContainer::Periodic() 
{
    m_chassisSpeeds.vx = -1.0_mps * m_controller.GetLeftY();
    m_chassisSpeeds.omega = 1.0_rad_per_s * m_controller.GetRightX();
}