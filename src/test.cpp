#define GLM_FORCE_RADIANS

class TestCase {
	virtual void before() {};
	virtual void after() {};
	virtual bool during() { return true;};
};

#include "ActionEvent.hpp"
#include "ActionListener.hpp"
#include "Window.hpp"

class TestGUI : public TestCase, ActionListener {
private:
	Window* window;
public:
	virtual void before();
	virtual void setWindow(Window* w) {
		window = w;
	}
	virtual bool during();
	virtual void after();
	virtual void actionPerformed(ActionEvent *a);
};

#include </opt/local/include/glm/vec3.hpp>
#include </opt/local/include/glm/vec4.hpp>
#include </opt/local/include/glm/mat4x4.hpp>
#include </opt/local/include/glm/gtc/matrix_transform.hpp>
#include </opt/local/include/glm/gtc/type_ptr.hpp>
#include "Font.hpp"
#include "ShaderProgram.hpp"
#include "Button.hpp"
#include "Label.hpp"
#include "TextField.hpp"

bool TestGUI::during() {
	glm::mat4 m;
	Font* f = new Font("Helvetica", "Regular", 14);

	ShaderProgram* bsp = new ShaderProgram("bvertex.glsl", "bfragment.glsl");
	Button* b = new Button("Press Me", m, bsp, f);
	b->addActionListener((ActionListener *)this);

	window->add(b);

	int cols = 35;
	m = glm::translate(glm::mat4(1.0f), glm::vec3(0.0f, 20.0f, 0.0f));
	ShaderProgram* tfsp = new ShaderProgram("tfvertex.glsl", "tffragment.glsl");
	TextField* tf = new TextField("Enter Text Here", m, tfsp, f, cols);
	tf->addActionListener((ActionListener *)this);

	m = glm::translate(glm::mat4(1.0f), glm::vec3(0.0f, 40.0f, 0.0f));
	ShaderProgram* lsp = new ShaderProgram("lvertex.glsl", "lfragment.glsl");
	Label* l = new Label("Text Here", m, lsp, f);

	window->add(tf);
	return true;
}

#include <iostream>

void TestGUI::actionPerformed(ActionEvent *ae) {
	std::cout << ae->getActionCommand() << std::endl;
}
