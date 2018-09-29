#include "../math.h"

matrix2x2math::matrix2x2math() : matrixsquaremath(2) { }

#define CTM_MATH_MSMTY(ma0, ma1)\
ma0* matrix2x2math::squareMultiply(ma0* out, ma1* matrix, ma1* matrix1)\
{\
	ma0 ret[]\
	{\
		matrix[0] * matrix1[0] + matrix[1] * matrix1[2],\
		matrix[0] * matrix1[1] + matrix[1] * matrix1[3],\
		matrix[2] * matrix1[0] + matrix[3] * matrix1[2],\
		matrix[2] * matrix1[1] + matrix[3] * matrix1[3]\
	};\
	out[0] = ret[0];\
	out[1] = ret[1];\
	out[2] = ret[2];\
	out[3] = ret[3];\
	return out;\
}
CTM_MATH_MSMTY(__int8, __int8)
CTM_MATH_MSMTY(__int16, __int8)
CTM_MATH_MSMTY(__int16, __int16)
CTM_MATH_MSMTY(__int32, __int16)
CTM_MATH_MSMTY(__int32, __int32)
CTM_MATH_MSMTY(__int64, __int32)
CTM_MATH_MSMTY(__int64, __int64)
CTM_MATH_MSMTY(__int128, __int64)
CTM_MATH_MSMTY(__int128, __int128)
CTM_MATH_MSMTY(float, float)
CTM_MATH_MSMTY(double, float)
CTM_MATH_MSMTY(double, double)
CTM_MATH_MSMTY(__float128, double)
CTM_MATH_MSMTY(__float128, __float128)

#define CTM_MATH_MIDTY(ma0)\
ma0* matrix2x2math::identity(ma0* out)\
{\
	out[0] = out[3] = 1;\
	out[1] = out[2] = 0;\
	return out;\
}
CTM_MATH_MIDTY(__int8)
CTM_MATH_MIDTY(__int16)
CTM_MATH_MIDTY(__int32)
CTM_MATH_MIDTY(__int64)
CTM_MATH_MIDTY(__int128)
CTM_MATH_MIDTY(float)
CTM_MATH_MIDTY(double)
CTM_MATH_MIDTY(__float128)

#define CTM_MATH_MDTRM(ma0, ma1)\
ma0 matrix2x2math::determinant(const ma0&, ma1* matrix)\
{\
	return matrix[0] * matrix[3] - matrix[2] * matrix[1];\
}
CTM_MATH_MDTRM(__int8, __int8)
CTM_MATH_MDTRM(__int16, __int8)
CTM_MATH_MDTRM(__int16, __int16)
CTM_MATH_MDTRM(__int32, __int16)
CTM_MATH_MDTRM(__int32, __int32)
CTM_MATH_MDTRM(__int64, __int32)
CTM_MATH_MDTRM(__int64, __int64)
CTM_MATH_MDTRM(__int128, __int64)
CTM_MATH_MDTRM(__int128, __int128)
CTM_MATH_MDTRM(float, float)
CTM_MATH_MDTRM(double, float)
CTM_MATH_MDTRM(double, double)
CTM_MATH_MDTRM(__float128, double)
CTM_MATH_MDTRM(__float128, __float128)
