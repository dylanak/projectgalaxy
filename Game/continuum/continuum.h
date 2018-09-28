#define GLFW_DLL
#include <iostream>
#include <GL/glew.h>
#include <GLFW/glfw3.h>
#include "../test.h"
#include "../math/math.h"

int main(int argcount, char** args);

namespace ctm
{
	class continuum
	{
		private:
			GLFWwindow *window;
			int openGLVersionMajor;
			int openGLVersionMinor;

			continuum();
			~continuum();

			void run();
		public:
			const int& getopenglvmajor() const;
			const int& getopenglvminor() const;

			friend int ::main(int argcount, char** args);
	};
	class CTMrenderer
	{
		public:
	};

	class CTMshaderprograminfo
	{
		public:

	};
}
