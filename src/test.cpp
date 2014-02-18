#include "testincludes.hpp"


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

void TestGUI::actionPerformed(ActionEvent *ae) {
	std::cout << ae->getActionCommand() << std::endl;
}
