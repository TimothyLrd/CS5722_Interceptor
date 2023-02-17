#pragma once
#include "PlayerState.h"
#include<string>
#include <sstream>

class CDPlayerController
{
	PlayerState state = PlayerState();

public: bool getState();

public: void setState(bool newState);

public:std::string playerService();

};


