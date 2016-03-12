#include "cam.h"

cam::cam(bool _mode)
{
	mode = _mode;
	// Use Requires() here to declare subsystem dependencies
	Requires(climber);
	SmartDashboard::init();
}

// Called just before this Command runs the first time
void cam::Initialize()
{

}

// Called repeatedly when this Command is scheduled to run
void cam::Execute()
{

	CommandBase::climber->Camera(mode);
		//SmartDashboard::PutBoolean("Set", mode);




}

// Make this return true when this Command no longer needs to run execute()
bool cam::IsFinished()
{
	return true;
}

// Called once after isFinished returns true
void cam::End()
{

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void cam::Interrupted()
{

}
