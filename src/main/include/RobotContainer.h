#pragma once

#pragma region Includes
#include <frc/XboxController.h>
#include <frc2/command/InstantCommand.h>
#include <frc2/command/RunCommand.h>
#include <frc2/command/button/JoystickButton.h>

#include "commands/ChassisCommands.h"
#include "commands/IntakeFlywheelCommands.h"
#pragma endregion

class RobotContainer 
{
  public:
    explicit RobotContainer();

    void Periodic();

  private:
    Chasis m_chassis{};
    IntakeFlywheel m_intakeFlywheel{};


    frc::XboxController m_controller{0};

    frc::ChassisSpeeds m_chassisSpeeds;
    
    void ConfigureButtonBindings();
};