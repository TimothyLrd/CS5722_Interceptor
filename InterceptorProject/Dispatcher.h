#pragma once
#include "ConcreteInterceptor.h"

using namespace std;

class Dispatcher
{
protected:
	vector<ConcreteInterceptor*> interceptors;
	void iterate_list(InterceptorEvent event, ContextObject* controller);

public:
	void dispatch(InterceptorEvent event, ContextObject* controller);
	void registerInterceptor(ConcreteInterceptor* interceptor);
	void remove(ConcreteInterceptor* interceptor);
};

