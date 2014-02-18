#include <string>

#ifndef ACTION_EVENT_H
#define ACTION_EVENT_H

#include "Component.hpp"

class ActionEvent {
	std::string command;
public:
	ActionEvent(Component source, std::string command) {
		this->command = command;
	}
	virtual std::string getActionCommand() {
		return this->command;
	}
};
#endif
