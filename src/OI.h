#ifndef OI_H
#define OI_H

#include "WPILib.h"

class OI
{
private:
	Joystick *copilot_stick, *pilot_stick;
public:
	OI();
	double getDriverJoystickX();
	double getDriverJoystickY();
	double getDriverJoystickZ();
	double getCopilotStickThrottle();
};

#endif
