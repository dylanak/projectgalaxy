#include "../math.h"

matrix3x3math::matrix3x3math() : matrixsquaremath(3) { }

#ifndef CTM_MATH_M3x3SMTY
#define CTM_MATH_M3x3SMTY(ma0, ma1)\
ma0* matrix3x3math::squareMultiply(ma0* out, ma1* matrix, ma1* matrix1)\
{\
	ma0 ret[]\
	{\
		(ma0)matrix[0] * matrix1[0] + (ma0)matrix[1] * matrix1[3] + (ma0)matrix[2] * matrix1[6],\
		(ma0)matrix[0] * matrix1[1] + (ma0)matrix[1] * matrix1[4] + (ma0)matrix[2] * matrix1[7],\
		(ma0)matrix[0] * matrix1[2] + (ma0)matrix[1] * matrix1[5] + (ma0)matrix[2] * matrix1[8],\
		(ma0)matrix[3] * matrix1[0] + (ma0)matrix[4] * matrix1[3] + (ma0)matrix[5] * matrix1[6],\
		(ma0)matrix[3] * matrix1[1] + (ma0)matrix[4] * matrix1[4] + (ma0)matrix[5] * matrix1[7],\
		(ma0)matrix[3] * matrix1[2] + (ma0)matrix[4] * matrix1[5] + (ma0)matrix[5] * matrix1[8],\
		(ma0)matrix[6] * matrix1[0] + (ma0)matrix[7] * matrix1[3] + (ma0)matrix[8] * matrix1[6],\
		(ma0)matrix[6] * matrix1[1] + (ma0)matrix[7] * matrix1[4] + (ma0)matrix[8] * matrix1[7],\
		(ma0)matrix[6] * matrix1[2] + (ma0)matrix[7] * matrix1[5] + (ma0)matrix[8] * matrix1[8]\
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
CTM_MATH_M3x3SMTY(__int8, __int8)
CTM_MATH_M3x3SMTY(__int16, __int8)
CTM_MATH_M3x3SMTY(__int16, __int16)
CTM_MATH_M3x3SMTY(__int32, __int16)
CTM_MATH_M3x3SMTY(__int32, __int32)
CTM_MATH_M3x3SMTY(__int64, __int32)
CTM_MATH_M3x3SMTY(__int64, __int64)
CTM_MATH_M3x3SMTY(__int128, __int64)
CTM_MATH_M3x3SMTY(__int128, __int128)
CTM_MATH_M3x3SMTY(float, float)
CTM_MATH_M3x3SMTY(double, float)
CTM_MATH_M3x3SMTY(double, double)
CTM_MATH_M3x3SMTY(__float128, double)
CTM_MATH_M3x3SMTY(__float128, __float128)
#endif

#ifndef CTM_MATH_M3x3IDTY
#define CTM_MATH_M3x3IDTY(ma0)\
ma0* matrix3x3math::identity(ma0* out)\
{\
	out[0] = out[4] = out[8] = 1;\
	out[1] = out[2] = out[3] = out[5] = out[6] = out[7] = 0;\
	return out;\
}
CTM_MATH_M3x3IDTY(__int8)
CTM_MATH_M3x3IDTY(__int16)
CTM_MATH_M3x3IDTY(__int32)
CTM_MATH_M3x3IDTY(__int64)
CTM_MATH_M3x3IDTY(__int128)
CTM_MATH_M3x3IDTY(float)
CTM_MATH_M3x3IDTY(double)
CTM_MATH_M3x3IDTY(__float128)
#endif

#ifndef CTM_MATH_M3x3DTRM
#define CTM_MATH_M3x3DTRM(ma0, ma1)\
ma0 matrix3x3math::determinant(const ma0&, ma1* matrix)\
{\
	return (ma0)matrix[0] * ((ma0)matrix[4] * matrix[8] - (ma0)matrix[5] * matrix[7])\
	- (ma0)matrix[1] * ((ma0)matrix[3] * matrix[8] - (ma0)matrix[5] * matrix[6])\
	+ (ma0)matrix[2] * ((ma0)matrix[0] * matrix[7] - (ma0)matrix[1] * matrix[6]);\
}
CTM_MATH_M3x3DTRM(__int8, __int8)
CTM_MATH_M3x3DTRM(__int16, __int8)
CTM_MATH_M3x3DTRM(__int16, __int16)
CTM_MATH_M3x3DTRM(__int32, __int16)
CTM_MATH_M3x3DTRM(__int32, __int32)
CTM_MATH_M3x3DTRM(__int64, __int32)
CTM_MATH_M3x3DTRM(__int64, __int64)
CTM_MATH_M3x3DTRM(__int128, __int64)
CTM_MATH_M3x3DTRM(__int128, __int128)
CTM_MATH_M3x3DTRM(float, float)
CTM_MATH_M3x3DTRM(double, float)
CTM_MATH_M3x3DTRM(double, double)
CTM_MATH_M3x3DTRM(__float128, double)
CTM_MATH_M3x3DTRM(__float128, __float128)
#endif
