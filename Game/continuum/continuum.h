#ifndef CONTINUUM_H_
#define CONTINUUM_H_

#define GLFW_DLL
#include <iostream>
#include <GL/glew.h>
#include <GLFW/glfw3.h>
#include "../test.h"
#include "../math/math.h"

namespace ctm
{
	class continuum
	{
		private:
			bool verifiedPJG;
			GLFWwindow *window;
		public:
			continuum();
			~continuum();
			int openGLVersionMajor;
			int openGLVersionMinor;
			void run();

	};
	class CTMrenderer
	{
		public:
	};

	class CTMshaderprograminfo
	{
		public:

	};
} /* namespace pjg */

#endif /* CONTINUUM_H_ */
