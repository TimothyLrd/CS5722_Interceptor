#pragma once
#include "PlayerHardware.h"
#include <vector>

class Dispatcher
{
	std::vector<PlayerHardware*> interceptors;

public:void dispatch(Event event, CDPlayerController* controller);

public:void registerInterceptor(PlayerHardware* interceptor);

public:void remove(PlayerHardware* interceptor);

	void iterate_list(Event event, CDPlayerController* controller);

};

