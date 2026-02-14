#pragma region Includes
#include <frc2/command/SubsystemBase.h>
#include <ctre/phoenix/motorcontrol/can/TalonSRX.h>
#include <studica/AHRS.h>

#include "Constants.h"
#pragma endregion

class IntakeFlywheel : public frc2::SubsystemBase 
{
    public:
        explicit IntakeFlywheel();
        void     RunFlywheel();
        void     RunIntake();
        void     Stop();

    private:
        studica::AHRS m_gyro{studica::AHRS::NavXComType::kMXP_SPI};

        ctre::phoenix::motorcontrol::can::TalonSRX m_intakeFlywheelMotor{Constants::INTAKE_FLYWHEEL_MOTOR_CAN_ID};
        ctre::phoenix::motorcontrol::can::TalonSRX m_intakeOuttakeMotor {Constants::INTAKE_OUTTAKE_MOTOR_CAN_ID};
        
};