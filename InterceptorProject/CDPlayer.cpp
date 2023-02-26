#include "CDPlayer.h"

void CDPlayer::setTrackList(vector<string>* newCD) {
	this->trackList = newCD; 
	this->currentTrack = 0;
	this->trackListLength = (int)newCD->size();
}

string CDPlayer::playerStatus()
{
	std::ostringstream oss;
	oss << "The CD player is currently " << (this->playerState ? "on." : "off.");
	return oss.str();
}

string CDPlayer::nowPlaying()
{
	std::ostringstream oss;
	oss << (this->playerState ? ("The current track is " + (*this->trackList)[this->currentTrack % this->trackListLength]) : "The CD player is not playing.");
	return oss.str();
}

void CDPlayer::nextSong() {
	this->currentTrack = this->currentTrack + 1 % this->trackListLength;
}

