#include "ConcreteInterceptor.h"
#include <iostream>

void ConcreteInterceptor::powerButtonCallback(ContextObject* controller)
{
	cout << "Power button...\n";
	controller->powerButton();
}

void ConcreteInterceptor::nextSongButtonCallback(ContextObject* controller)
{
	cout << "Skipping song...\n";
	controller->nextSong();
}
