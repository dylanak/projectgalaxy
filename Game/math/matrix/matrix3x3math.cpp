#include "../math.h"

matrix3x3math::matrix3x3math() : matrixsquaremath(3) { }

#define CTM_MATH_MSMTY(ma0, ma1)\
ma0* matrix3x3math::squareMultiply(ma0* out, ma1* matrix, ma1* matrix1)\
{\
	ma0 ret[]\
	{\
		matrix[0] * matrix1[0] + matrix[1] * matrix1[3] + matrix[2] * matrix1[6],\
		matrix[0] * matrix1[1] + matrix[1] * matrix1[4] + matrix[2] * matrix1[7],\
		matrix[0] * matrix1[2] + matrix[1] * matrix1[5] + matrix[2] * matrix1[8],\
		matrix[3] * matrix1[0] + matrix[4] * matrix1[3] + matrix[5] * matrix1[6],\
		matrix[3] * matrix1[1] + matrix[4] * matrix1[4] + matrix[5] * matrix1[7],\
		matrix[3] * matrix1[2] + matrix[4] * matrix1[5] + matrix[5] * matrix1[8],\
		matrix[6] * matrix1[0] + matrix[7] * matrix1[3] + matrix[8] * matrix1[6],\
		matrix[6] * matrix1[1] + matrix[7] * matrix1[4] + matrix[8] * matrix1[7],\
		matrix[6] * matrix1[2] + matrix[7] * matrix1[5] + matrix[8] * matrix1[8]\
	};\
	out[0] = ret[0];\
	out[1] = ret[1];\
	out[2] = ret[2];\
	out[3] = ret[3];\
	out[4] = ret[4];\
	out[5] = ret[5];\
	out[6] = ret[6];\
	out[7] = ret[7];\
	out[8] = ret[8];\
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
ma0* matrix3x3math::identity(ma0* out)\
{\
	out[0] = out[4] = out[8] = 1;\
	out[1] = out[2] = out[3] = out[5] = out[6] = out[7] = 0;\
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
ma0 matrix3x3math::determinant(const ma0&, ma1* matrix)\
{\
	return matrix[0] * (matrix[4] * matrix[8] - matrix[5] * matrix[7])\
	- matrix[1] * (matrix[3] * matrix[8] - matrix[5] * matrix[6])\
	+ matrix[2] * (matrix[0] * matrix[7] - matrix[1] * matrix[6]);\
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
