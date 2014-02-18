#include <string>
#include "Component.hpp"
#include "ActionListener.hpp"

class Button : public Component {
	std::string text;
public:
	Button(std::string text, ShaderProgram * bsp, Font * f) {
		this->text = text;
	}
	void addActionListener(ActionListener *al) {
	}
};
