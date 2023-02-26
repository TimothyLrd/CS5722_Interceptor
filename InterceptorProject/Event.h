#pragma once
#include <functional>
#include"ContextObject.h"
using namespace std;
class Event
{
	function<void(ContextObject* i)> eventCallback;
	Event(function<void(ContextObject* i)> eventCallback);
};