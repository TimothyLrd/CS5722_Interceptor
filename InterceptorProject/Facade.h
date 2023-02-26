#pragma once
#include "ContextObject.h"
#include "Dispatcher.h"
#include "InterceptorEvent.h"
#include "CDPlayer.h"


class Facade
{
private:
	ContextObject context;
	Dispatcher dispatcher = Dispatcher();
	static Facade* instance;

protected:
	Facade(ContextObject context) { this->context = context; };
	void setCDPlayer(CDPlayer player);
public:
	Facade(Facade& other) = delete;
	void operator=(const Facade&) = delete;
	static Facade* GetInstance();
	void registerInterceptor(ConcreteInterceptor* interceptor);
	void pressButtonEvent(InterceptorEvent e);
	CDPlayer* getCDPlayer() { return this->context.getCDPlayer(); };
};