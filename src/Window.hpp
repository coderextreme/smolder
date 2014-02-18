#include "Container.hpp"
#include </opt/local/include/GLFW/glfw3.h>

class Window : public Container {
private:
	GLFWwindow *window;
public:
	Window(GLFWwindow *win) : window(win) {
	}
};
