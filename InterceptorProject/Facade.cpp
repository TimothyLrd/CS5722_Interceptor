#include "Facade.h"
#include "InterceptorEvent.h"
#include "Button.h"
Facade *Facade::instance;

void Facade::registerInterceptor(ConcreteInterceptor* interceptor)
{
	this->dispatcher.registerInterceptor(interceptor);
}

void Facade::pressButtonEvent(InterceptorEvent e)
{
	this->dispatcher.dispatch(e, &(this->context));
}

Facade* Facade::GetInstance()
{
    if (instance == nullptr) {
        Button powerButtonObj = Button(InterceptorEvent::powerButton);
        Button nextSongButtonObj = Button(InterceptorEvent::nextSongButton);
        vector<Button> buttons = { powerButtonObj, nextSongButtonObj };
        CDPlayer player = CDPlayer(buttons);
        ContextObject context = ContextObject(player);
        instance = new Facade(context);
    }
    return instance;
}
