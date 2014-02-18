#include <string>
#include "Component.hpp"

class Label : public Component {
	std::string text;
public:
	Label(std::string text, glm::mat4 m, ShaderProgram *bsp, Font *f) {
		this->text = text;
	}
};
