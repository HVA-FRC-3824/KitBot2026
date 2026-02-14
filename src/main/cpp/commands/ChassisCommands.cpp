#include "commands/ChassisCommands.h"

frc2::InstantCommand DriveChasisCommand(Chasis *chassis, frc::ChassisSpeeds *speeds) 
{
    return frc2::InstantCommand(
        [=]() {chassis->Drive(*speeds);}, {chassis}
    );
}