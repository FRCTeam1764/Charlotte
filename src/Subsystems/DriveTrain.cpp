#include <RobotMap.h>
#include <Subsystems/DriveTrain.h>
#include <Victor.h>
#include "../Commands/DriveWithJoystick.h"

DriveTrain::DriveTrain() :
		Subsystem("ExampleSubsystem")
{
	left_drive_motor = new Victor(LEFT_DRIVE_MOTOR);
	right_drive_motor = new Victor(RIGHT_DRIVE_MOTOR);
}

void DriveTrain::SetMotor(double x, double y, double z)
{
	left_drive_motor->SetSpeed(-x-y+z);
	right_drive_motor->SetSpeed(-x+y+z);
}

void DriveTrain::InitDefaultCommand()
{
	SetDefaultCommand(new DriveWithJoystick());
	// Set the default command for a subsystem here.
	//SetDefaultCommand(new MySpecialCommand());
}
// Put methods for controlling this subsystem
// here. Call these from Commands.
