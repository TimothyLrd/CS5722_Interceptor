#pragma once
#include "CDPlayerController.h"
using namespace std;

enum Event
{
	stop = 0,
	play = 1
};

__interface IInterceptor
{
public:void playButtonPressCallback(CDPlayerController* controller);

public:void stopButtonPressCallback(CDPlayerController* controller);

};

class PlayerHardware: public IInterceptor	{

public:void playButtonPressCallback(CDPlayerController* controller);

public:void stopButtonPressCallback(CDPlayerController* controller);

};


