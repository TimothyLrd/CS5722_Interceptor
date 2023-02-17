#include "PlayerSoftware.h"

std::string PlayerSoftware::service()
{
	return this->context.playerService();
}

void PlayerSoftware::registerInterceptor(PlayerHardware* interceptor)
{
	this->dispatcher.registerInterceptor(interceptor);
}

void PlayerSoftware::pressButtonEvent(Event e)
{
	this->dispatcher.dispatch(e, &(this->context));
}

CDPlayerController PlayerSoftware::accessInternals()
{
	return this->context;
}