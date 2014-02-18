#include <string>
#include "Component.hpp"
#include "ActionListener.hpp"

class TextField : public Component {
	std::string text;
	int size;
public:
	TextField(std::string text, ShaderProgram *bsp, Font *f, int size) {
		this->text = text;
		this->size = size;
	}
	void addActionListener(ActionListener *al) {
	}
};
