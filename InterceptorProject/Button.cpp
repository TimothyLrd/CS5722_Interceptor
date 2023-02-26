#include "Button.h"
#include "Facade.h"
#include "InterceptorEvent.h"

void Button::pressButton()
{
	Facade* facade = Facade::GetInstance();
	facade->pressButtonEvent(this->buttonEvent);
}
