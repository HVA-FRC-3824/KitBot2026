#pragma once

#pragma region Includes
#include <frc/Joystick.h>
#include <frc/TimedRobot.h>
#include <frc/drive/DifferentialDrive.h>
#include <frc/motorcontrol/PWMSparkMax.h>
#include <frc/RobotBase.h>

#include "Constants.h"
#include "RobotContainer.h"
#pragma endregion



class Robot : public frc::TimedRobot 
{
  public:
    explicit Robot();

    void     TeleopPeriodic() override;
  private:
    RobotContainer m_robotContainer;

};

