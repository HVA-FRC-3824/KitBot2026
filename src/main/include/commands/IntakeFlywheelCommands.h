#pragma region Includes
#include <frc2/command/InstantCommand.h>
#include <frc2/command/CommandPtr.h>

#include "subsystems/IntakeFlywheel.h"
#pragma endregion

frc2::CommandPtr RunFlywheelCommand(IntakeFlywheel *intakeFlywheel);

frc2::CommandPtr RunIntakeCommand(IntakeFlywheel *intakeFlywheel);

frc2::CommandPtr StopIntakeFlywheelCommand(IntakeFlywheel *intakeFlywheel);