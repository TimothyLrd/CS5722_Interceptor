#include "PlayerState.h"

	void PlayerState::setState(bool newState) {
		this->state = newState;
	}

	bool PlayerState::getState() {
		return this->state;
	}
