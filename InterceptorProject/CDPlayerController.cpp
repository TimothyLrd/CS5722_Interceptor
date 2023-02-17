#include "CDPlayerController.h"
#include "PlayerState.h"

bool CDPlayerController::getState()
{
	return this->state.getState();
}

void CDPlayerController::setState(bool newState)
{
	this->state.setState(newState);
}

std::string CDPlayerController::playerService()
{
	std::ostringstream oss;
	oss << "The CD Player is currently " << (this->getState()? "playing" : "paused");
	return oss.str();
}

