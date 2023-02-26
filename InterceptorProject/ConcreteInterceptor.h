#pragma once
#include "ContextObject.h"

__interface IInterceptor
{
public:
	void powerButtonCallback(ContextObject* controller);
	void nextSongButtonCallback(ContextObject* controller);
};

class ConcreteInterceptor: public IInterceptor	{

public:
	void powerButtonCallback(ContextObject* controller) ;
	void nextSongButtonCallback(ContextObject* controller) ;

};


