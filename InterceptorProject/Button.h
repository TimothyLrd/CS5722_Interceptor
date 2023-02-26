#pragma once
#include <functional>
#include "InterceptorEvent.h"
using namespace std;

class Button
{
protected:
	InterceptorEvent buttonEvent;

public:
	void pressButton();
	InterceptorEvent getEvent(){ return this->buttonEvent; };
	Button(InterceptorEvent callback) { this->buttonEvent = callback; }
};

