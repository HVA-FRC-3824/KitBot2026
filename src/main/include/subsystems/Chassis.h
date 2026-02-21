#pragma once

#pragma region Includes
#include <frc/Joystick.h>
#include <frc/TimedRobot.h>
#include <frc/drive/DifferentialDrive.h>
#include <frc/RobotBase.h>
#include <frc2/command/SubsystemBase.h>
#include <frc/kinematics/ChassisSpeeds.h>

#include <rev/SparkMax.h>

#include <studica/AHRS.h>


#include "Constants.h"
#pragma endregion

namespace ChasisConstants
{

}



class Chasis : public frc2::SubsystemBase {

    public:
        explicit Chasis();
        void     Drive(frc::ChassisSpeeds &speeds);
    private:
        studica::AHRS m_gyro{studica::AHRS::NavXComType::kMXP_SPI};

        rev::spark::SparkMax m_leftParentMotor{Constants::LEFT_MOTOR_1_CAN_ID, rev::spark::SparkMax::MotorType::kBrushed};
        rev::spark::SparkMax m_leftChildMotor{Constants::LEFT_MOTOR_2_CAN_ID, rev::spark::SparkMax::MotorType::kBrushed};
        rev::spark::SparkMax m_rightParentMotor{Constants::RIGHT_MOTOR_1_CAN_ID, rev::spark::SparkMax::MotorType::kBrushed};
        rev::spark::SparkMax m_rightChildMotor{Constants::RIGHT_MOTOR_2_CAN_ID, rev::spark::SparkMax::MotorType::kBrushed};

};

