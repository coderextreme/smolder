#include "Component.hpp"

class Container : public Component {
public:
	virtual void add(glm::mat4 offset, Component *c) {
	}
};
