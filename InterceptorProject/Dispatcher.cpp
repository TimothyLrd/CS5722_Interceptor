#include "Dispatcher.h"

void Dispatcher::dispatch(InterceptorEvent e, ContextObject* controller)
{
	this->iterate_list(e, controller);
}

void Dispatcher::registerInterceptor(ConcreteInterceptor* interceptor)
{
	this->interceptors.push_back(interceptor);
}

void Dispatcher::remove(ConcreteInterceptor* interceptor)
{
	auto it = std::find(this->interceptors.begin(), this->interceptors.end(), interceptor);
	if (it != this->interceptors.end()) { this->interceptors.erase(it); }
}

void Dispatcher::iterate_list(InterceptorEvent e, ContextObject* controller)
{
	switch (e)
	{
	case powerButton:
		for (ConcreteInterceptor* i : this->interceptors) {
			i->powerButtonCallback(controller);
		}	
		break;
	case nextSongButton:
		for (ConcreteInterceptor* i : this->interceptors) {
			i->nextSongButtonCallback(controller);
		}
		break;
	default:
		break;
	}
	
}
