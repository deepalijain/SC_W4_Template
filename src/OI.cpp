#include "OI.h"

OI::OI()
{
	driveStick = new Joystick(JOYSTICK);
	shootBallButton = new Button(driveStick, 1);
	intakeBallButton = new Button(driveStick, 2);
	intakeBallButton->WhenPressed(new IntakeBall());
	intakeBallButton->WhenReleased(new BrakeIntake());
	shootBallButton->WhenPressed(new ShootBall());
	shootBallButton->WhenReleased(new BrakeShooter());
	// Process operator interface input here.
}

Joystick* OI::getJoystick()
{
	return driveStick;
}
