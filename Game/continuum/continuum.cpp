#include "continuum.h"

using namespace ctm;

namespace ctm
{
	continuum::continuum()
	{
		glfwSetErrorCallback([](int error, const char* desc)
		{
			//TODO #1" improve logging
			std::cerr << desc << std::endl;
		});
		if(glfwInit() == GLFW_FALSE)
		{
			//TODO #2: cpp equivalent of  throw new IllegalStateException("Failed to initialize GLFW.");
		}
		glfwDefaultWindowHints();
		glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
		glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
		glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
		glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GLFW_TRUE);
		glfwWindowHint(GLFW_VISIBLE, GLFW_FALSE);
		GLFWmonitor* primaryMonitor = glfwGetPrimaryMonitor();
		const GLFWvidmode *primaryMonitorVideoMode;
		if(primaryMonitor == NULL || (primaryMonitorVideoMode = glfwGetVideoMode(primaryMonitor)) == NULL)
		{
			this->window = glfwCreateWindow(480, 320, "Project: Galaxy", NULL, NULL);
		}
		else
		{
			this->window = glfwCreateWindow(primaryMonitorVideoMode->width / 2, primaryMonitorVideoMode->height / 2, "Project: Galaxy", NULL, NULL);
			int monitorOffsetX;
			int monitorOffsetY;
			glfwGetMonitorPos(primaryMonitor, &monitorOffsetX, &monitorOffsetY);
			glfwSetWindowPos(this->window, monitorOffsetX + primaryMonitorVideoMode->width / 4, monitorOffsetY + primaryMonitorVideoMode->height / 4);
		}
		//TODO #3: cpp equivalent of  GLFW.glfwSetWindowSizeCallback(this.windowId, (windowId, newWidth, newHeight) -> WindowResizeEvent.onResize(this, newWidth, newHeight));
		glfwShowWindow(this->window);
		glfwMakeContextCurrent(this->window);
		if(glewInit() != GLEW_OK)
		{
			//TODO #4: error handling for glew init
			this->openGLVersionMajor = 0;
			this->openGLVersionMinor = 0;
		}
		if(GLEW_VERSION_4_6)
		{
			this->openGLVersionMajor = 4;
			this->openGLVersionMinor = 6;
		}
		else if(GLEW_VERSION_4_5)
		{
			this->openGLVersionMajor = 4;
			this->openGLVersionMinor = 5;
		}
		else if(GLEW_VERSION_4_4)
		{
			this->openGLVersionMajor = 4;
			this->openGLVersionMinor = 4;
		}
		else if(GLEW_VERSION_4_3)
		{
			this->openGLVersionMajor = 4;
			this->openGLVersionMinor = 3;
		}
		else if(GLEW_VERSION_4_2)
		{
			this->openGLVersionMajor = 4;
			this->openGLVersionMinor = 2;
		}
		else if(GLEW_VERSION_4_1)
		{
			this->openGLVersionMajor = 4;
			this->openGLVersionMinor = 1;
		}
		else if(GLEW_VERSION_4_0)
		{
			this->openGLVersionMajor = 4;
			this->openGLVersionMinor = 0;
		}
		else if(GLEW_VERSION_3_3)
		{
			this->openGLVersionMajor = 3;
			this->openGLVersionMinor = 3;
		}
		else if(GLEW_VERSION_3_2)
		{
			this->openGLVersionMajor = 3;
			this->openGLVersionMinor = 2;
		}
		else if(GLEW_VERSION_3_1)
		{
			this->openGLVersionMajor = 3;
			this->openGLVersionMinor = 1;
		}
		else if(GLEW_VERSION_3_0)
		{
			this->openGLVersionMajor = 3;
			this->openGLVersionMinor = 0;
		}
		else if(GLEW_VERSION_2_1)
		{
			this->openGLVersionMajor = 2;
			this->openGLVersionMinor = 1;
		}
		else if(GLEW_VERSION_2_0)
		{
			this->openGLVersionMajor = 2;
			this->openGLVersionMinor = 0;
		}
		else if(GLEW_VERSION_1_5)
		{
			this->openGLVersionMajor = 1;
			this->openGLVersionMinor = 5;
		}
		else if(GLEW_VERSION_1_4)
		{
			this->openGLVersionMajor = 1;
			this->openGLVersionMinor = 4;
		}
		else if(GLEW_VERSION_1_3)
		{
			this->openGLVersionMajor = 1;
			this->openGLVersionMinor = 3;
		}
		else if(GLEW_VERSION_1_2)
		{
			this->openGLVersionMajor = 1;
			this->openGLVersionMinor = 2;
		}
		else
		{
			this->openGLVersionMajor = 1;
			this->openGLVersionMinor = 1;
		}
		std::cout << this->openGLVersionMajor << std::endl;
		std::cout << this->openGLVersionMinor << std::endl;
		test();
	};

	continuum::~continuum()
	{
		std::cout << "term:" << std::endl;
		glfwTerminate();
	}

	void continuum::run()
	{

	};

	const int& continuum::getopenglvmajor() const { return this->openGLVersionMajor; }

	const int& continuum::getopenglvminor() const { return this->openGLVersionMinor; }
}

int main(int argcount, char** args)
{
	continuum* ctm = new continuum();
	int code = 0;
	try
	{
		ctm->run();
	}
	catch(int error)
	{
		code = error;
	}
	delete ctm;
	return code;
}
