#include "Dispatcher.h"
#include <functional>
void Dispatcher::dispatch(Event e, CDPlayerController* controller)
{
	this->iterate_list(e, controller);
}

void Dispatcher::registerInterceptor(PlayerHardware* interceptor)
{
	this->interceptors.push_back(interceptor);
}

void Dispatcher::remove(PlayerHardware* interceptor)
{
	auto it = std::find(this->interceptors.begin(), this->interceptors.end(), interceptor);
	if (it != this->interceptors.end()) { this->interceptors.erase(it); }
}

void Dispatcher::iterate_list(Event e, CDPlayerController* controller)
{
	function<void(PlayerHardware* i)> valueFunction;
	switch (e)
	{
	case stop:
		valueFunction = [controller](PlayerHardware* i) { i->stopButtonPressCallback(controller); };
		break;
	case play:
		valueFunction = [controller](PlayerHardware* i) { i->playButtonPressCallback(controller); };
		break;
	default:
		break;
	}
	for (PlayerHardware* i : this->interceptors) {
		valueFunction(i);
	}
}
