#include "OI.h"
#include "RobotMap.h"
#include "Commands/ResetLifters.h"

OI::OI()
{
	// Process operator interface input here.
	copilot_stick = new Joystick(COPILOT_STICK_PORT);
	pilot_stick = new Joystick(PILOT_STICK_PORT);
}

double OI::getDriverJoystickX()
{
	return pilot_stick->GetX();
}

double OI::getDriverJoystickY()
{
	return pilot_stick->GetY();
}

double OI::getDriverJoystickZ()
{
	return pilot_stick->GetThrottle();
}

double OI::getCopilotStickThrottle()
{
	return copilot_stick->GetZ();
}
