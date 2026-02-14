// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#include "Robot.h"

#pragma region Constructor
Robot::Robot() 
{
  // Constructor
}
#pragma endregion

#pragma region TeleopPeriodic
void Robot::TeleopPeriodic() 
{
  m_robotContainer.Periodic();
}


#ifndef RUNNING_FRC_TESTS
int main() {
  return frc::StartRobot<Robot>();
}
#endif
