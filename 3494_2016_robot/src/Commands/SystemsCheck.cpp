#include "SystemsCheck.h"

SystemsCheck::SystemsCheck()
{
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(chassis);
	SmartDashboard::init();
	Requires(CommandBase::driveTrain);
}

// Called just before this Command runs the first time
void SystemsCheck::Initialize()
{

}

// Called repeatedly when this Command is scheduled to run
void SystemsCheck::Execute()
{

}

// Make this return true when this Command no longer needs to run execute()
bool SystemsCheck::IsFinished()
{
	return true;
}

// Called once after isFinished returns true
void SystemsCheck::End()
{

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void SystemsCheck::Interrupted()
{

}
