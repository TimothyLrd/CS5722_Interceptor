#pragma once
#include <vector>
#include  <string>
#include <sstream>
#include "Button.h"
using namespace std;
class CDPlayer
{
protected:
	vector<string> *trackList;
	int currentTrack = 0;
	int trackListLength = 0;
	bool playerState = false;

public:
	vector<Button> buttons;
	CDPlayer() {};
	CDPlayer(vector<Button> buttons) { this->buttons = buttons; }
	void setTrackList(vector<string>* newCD);
	string nowPlaying();
	void nextSong();
	bool getPlayerState() { return this->playerState; };
	void setPlayerState(bool newState) { this->playerState = newState; };
	string playerStatus();
	void pressButton(int buttonNumber) { this->buttons[buttonNumber].pressButton(); };
};

