#define GLM_FORCE_RADIANS
#include </opt/local/include/glm/vec3.hpp>
#include </opt/local/include/glm/vec4.hpp>
#include </opt/local/include/glm/mat4x4.hpp>
#include </opt/local/include/glm/gtc/matrix_transform.hpp>
#include </opt/local/include/glm/gtc/type_ptr.hpp>
#include "ActionEvent.hpp"
#include "ActionListener.hpp"
#include "Window.hpp"
#include "Font.hpp"
#include "ShaderProgram.hpp"
#include "Button.hpp"
#include "Label.hpp"
#include "TextField.hpp"
#include <iostream>

class TestCase {
public:
	virtual void before() {};
	virtual void after() {};
	virtual bool during() { return true;};
};


class TestGUI : public TestCase, ActionListener {
private:
	Window* window;
public:
	TestGUI(): TestCase(), ActionListener() {};
	virtual void setWindow(Window* w) {
		window = w;
	}
	virtual bool during();
	virtual void actionPerformed(ActionEvent *a);
};

