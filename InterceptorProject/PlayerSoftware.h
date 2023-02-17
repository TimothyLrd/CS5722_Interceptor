#pragma once
#include "CDPlayerController.h"
#include "Dispatcher.h"

class PlayerSoftware
{
	CDPlayerController context = CDPlayerController();
	Dispatcher dispatcher = Dispatcher();

public:string service();

public:void registerInterceptor(PlayerHardware* interceptor);

public:void pressButtonEvent(Event e);

public:CDPlayerController accessInternals();

};
