#include <string>
#include "Component.hpp"

class Label : public Component {
	std::string text;
public:
	Label(std::string text, ShaderProgram *bsp, Font *f) {
		this->text = text;
	}
};
