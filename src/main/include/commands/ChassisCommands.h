#pragma once

#pragma region Includes
#include <frc2/command/CommandPtr.h>
#include <frc2/command/InstantCommand.h>
#include <frc2/command/RunCommand.h>

#include "subsystems/Chassis.h"
#pragma endregion

frc2::InstantCommand DriveChasisCommand(Chasis *chassis, frc::ChassisSpeeds *speeds);