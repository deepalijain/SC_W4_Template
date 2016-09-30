/*
 * ArcadeDrive.cpp
 *
 *  Created on: Sep 30, 2016
 *      Author: nidhi
 */

#include <Commands/ArcadeDrive.h>

namespace wvrobotics {

ArcadeDrive::ArcadeDrive() {
	// TODO Auto-generated constructor stub

}

ArcadeDrive::~ArcadeDrive() {
	// TODO Auto-generated destructor stub
}

} /* namespace wvrobotics */

// Called just before this Command runs the first time
void ArcadeDrive::Initialize()
{

}

// Called repeatedly when this Command is scheduled to run
void ArcadeDrive::Execute()
{
	Joystick* stick = oi->getJoystick();
	DriveTrain::arcadeDrive(stick->getX(), stick->getY());


}

// Make this return true when this Command no longer needs to run execute()
bool ArcadeDrive::IsFinished()
{
	return false;
}

// Called once after isFinished returns true
void ArcadeDrive::End()
{

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void ArcadeDrive::Interrupted()
{

}
