#pragma once
#include "CDPlayer.h"

class ContextObject
{
private:
	CDPlayer player;
public:
	ContextObject() {};
	ContextObject(CDPlayer player) { this->player = player; }
	void powerButton() { this->player.setPlayerState(!this->player.getPlayerState()); }
	void nextSong() { this->player.nextSong(); };
	CDPlayer* getCDPlayer() { return (&this->player); };
};