#ifndef DriveTrain_H
#define DriveTrain_H

#include "Commands/Subsystem.h"
#include "WPILib.h"

class DriveTrain: public Subsystem
{
private:
	// It's desirable that everything possible under private except
	// for methods that implement subsystem capabilities
	Victor *left_drive_motor, *right_drive_motor;
public:
	DriveTrain();
	void SetMotor(double, double, double);
	void InitDefaultCommand();
};

#endif
