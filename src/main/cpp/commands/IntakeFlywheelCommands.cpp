#include "commands/IntakeFlywheelCommands.h"

frc2::CommandPtr RunFlywheelCommand(IntakeFlywheel *intakeFlywheel) 
{
    return frc2::InstantCommand([=]() { intakeFlywheel->RunFlywheel(); }, {intakeFlywheel}).ToPtr();
}

frc2::CommandPtr RunIntakeCommand(IntakeFlywheel *intakeFlywheel) 
{
    return frc2::InstantCommand([=]() { intakeFlywheel->RunIntake(); }, {intakeFlywheel}).ToPtr();
}

frc2::CommandPtr StopIntakeFlywheelCommand(IntakeFlywheel *intakeFlywheel) 
{
    return frc2::InstantCommand([=]() { intakeFlywheel->Stop(); }, {intakeFlywheel}).ToPtr();
}