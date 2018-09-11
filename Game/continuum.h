/*
 * PJGmonitorinfo.h
 *
 *  Created on: Jul 23, 2018
 *      Author: SYSTEM
 */

#ifndef CONTINUUM_H_
#define CONTINUUM_H_

#include <GLFW/glfw3.h>

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
