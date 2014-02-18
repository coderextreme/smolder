
#ifndef ACTION_LISTENER_H
#define ACTION_LISTENER_H

#include "ActionEvent.hpp"

class ActionListener {
public:
	ActionListener() {};
	virtual void actionPerformed(ActionEvent *al) {
	}
};

#endif
