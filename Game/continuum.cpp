
/*
 * projectgalaxy.cpp
 *
 *  Created on: Jul 23, 2018
 *      Author: SYSTEM
 */

#define GLFW_DLL

#include <iostream>
#include <GL/glew.h>
#include <GLFW/glfw3.h>
#include "continuum.h"
#include "math/math.h"

using namespace ctm;

namespace ctm
{
	continuum::continuum()
	{
		this->verifiedPJG = true;
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
		__float128 e = 0;
		__float128 m2[] = { 4, 3, 2, 5 };
		__float128* m41 = math::mat4.newMatrixF128();
		__float128 m3[] =
		{
				6, 8, 10,
				-3, -1, 2,
				3, -7, 13
		};
		__float128 m4[] = {
				/*4*/0, 3, 2, -8,
				-2, 5, -14, 3,
				5, -9, 1, -2,
				3, 4, 17, -9 };
		//math::mat4.inverse(m41, m4);
		//math::mat4.squareMultiply(m41, m4, m41);
		int anglex = rand() % 360, angley = rand() % 360, anglez = rand() % 360;
		std::cout << "x:" << anglex << " " << (double)((__float128)anglex / (__float128)180 * M_PIq) << std::endl;
		std::cout << "y:" << angley << " " << (double)((__float128)angley / (__float128)180 * M_PIq) << std::endl;
		std::cout << "z:" << anglez << " " << (double)((__float128)anglez / (__float128)180 * M_PIq) << std::endl;
		m41 = m4;
		//math::mat4.rotateX(m41, m41, (__float128)anglex / (__float128)180 * M_PIq);
		//math::mat4.rotateY(m41, m41, (__float128)angley / (__float128)180 * M_PIq);
		__float128 angles[] { (__float128)anglex / (__float128)180 * M_PIq, (__float128)angley / (__float128)180 * M_PIq };
		math::mat4.rotateXY(m41, m41, angles);
		math::mat4.rotateZ(m41, m41, (__float128)anglez / (__float128)180 * M_PIq);
		for(int i = 0; i < 16; i++)
		{
			char s[10];
			quadmath_snprintf(s, 10, "%.36Qg", m41[i]);
			//std::cout << s << std::endl;
			std::cout << (double)m41[i] << std::endl;
		}
		//std::cout << "2x2=" << math::mat2.determinantS(m2) << std::endl;
		//std::cout << "3x3=" << math::mat3.determinantS(m3) << std::endl;
		//std::cout << "4x4=" << math::mat4.determinantS(m4) << std::endl;
	};

	continuum::~continuum()
	{
		std::cout << "term:" << std::endl;
		glfwTerminate();
	}

	void continuum::run()
	{

	};

}

int main()
{
	continuum *ctm = new continuum();
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
