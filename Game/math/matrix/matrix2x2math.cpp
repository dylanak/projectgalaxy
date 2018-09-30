#include "../math.h"

matrix2x2math::matrix2x2math() : matrixsquaremath(2) { }

#ifndef CTM_MATH_M2x2SMTY
#define CTM_MATH_M2x2SMTY(ma0, ma1)\
ma0* matrix2x2math::squareMultiply(ma0* out, ma1* matrix, ma1* matrix1)\
{\
	ma0 ret[]\
	{\
		(ma0)matrix[0] * matrix1[0] + (ma0)matrix[1] * matrix1[2],\
		(ma0)matrix[0] * matrix1[1] + (ma0)matrix[1] * matrix1[3],\
		(ma0)matrix[2] * matrix1[0] + (ma0)matrix[3] * matrix1[2],\
		(ma0)matrix[2] * matrix1[1] + (ma0)matrix[3] * matrix1[3]\
	};\
	out[0] = ret[0];\
	out[1] = ret[1];\
	out[2] = ret[2];\
	out[3] = ret[3];\
	return out;\
}
CTM_MATH_M2x2SMTY(__int8, __int8)
CTM_MATH_M2x2SMTY(__int16, __int8)
CTM_MATH_M2x2SMTY(__int16, __int16)
CTM_MATH_M2x2SMTY(__int32, __int16)
CTM_MATH_M2x2SMTY(__int32, __int32)
CTM_MATH_M2x2SMTY(__int64, __int32)
CTM_MATH_M2x2SMTY(__int64, __int64)
CTM_MATH_M2x2SMTY(__int128, __int64)
CTM_MATH_M2x2SMTY(__int128, __int128)
CTM_MATH_M2x2SMTY(float, float)
CTM_MATH_M2x2SMTY(double, float)
CTM_MATH_M2x2SMTY(double, double)
CTM_MATH_M2x2SMTY(__float128, double)
CTM_MATH_M2x2SMTY(__float128, __float128)
#endif

#ifndef CTM_MATH_M2x2IDTY
#define CTM_MATH_M2x2IDTY(ma0)\
ma0* matrix2x2math::identity(ma0* out)\
{\
	out[0] = out[3] = 1;\
	out[1] = out[2] = 0;\
	return out;\
}
CTM_MATH_M2x2IDTY(__int8)
CTM_MATH_M2x2IDTY(__int16)
CTM_MATH_M2x2IDTY(__int32)
CTM_MATH_M2x2IDTY(__int64)
CTM_MATH_M2x2IDTY(__int128)
CTM_MATH_M2x2IDTY(float)
CTM_MATH_M2x2IDTY(double)
CTM_MATH_M2x2IDTY(__float128)
#endif

#ifndef CTM_MATH_M2x2DTRM
#define CTM_MATH_M2x2DTRM(ma0, ma1)\
ma0 matrix2x2math::determinant(const ma0&, ma1* matrix)\
{\
	return (ma0)matrix[0] * matrix[3] - (ma0)matrix[2] * matrix[1];\
}
CTM_MATH_M2x2DTRM(__int8, __int8)
CTM_MATH_M2x2DTRM(__int16, __int8)
CTM_MATH_M2x2DTRM(__int16, __int16)
CTM_MATH_M2x2DTRM(__int32, __int16)
CTM_MATH_M2x2DTRM(__int32, __int32)
CTM_MATH_M2x2DTRM(__int64, __int32)
CTM_MATH_M2x2DTRM(__int64, __int64)
CTM_MATH_M2x2DTRM(__int128, __int64)
CTM_MATH_M2x2DTRM(__int128, __int128)
CTM_MATH_M2x2DTRM(float, float)
CTM_MATH_M2x2DTRM(double, float)
CTM_MATH_M2x2DTRM(double, double)
CTM_MATH_M2x2DTRM(__float128, double)
CTM_MATH_M2x2DTRM(__float128, __float128)
#endif
