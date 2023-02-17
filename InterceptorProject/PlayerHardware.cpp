#include "PlayerHardware.h"
void PlayerHardware::playButtonPressCallback(CDPlayerController* controller)
{
	controller->setState(true);
}

void PlayerHardware::stopButtonPressCallback(CDPlayerController* controller)
{
	controller->setState(false);
}
