#include "../math.h"

matrix4x4math::matrix4x4math() : matrixsquaremath(4) { }

#ifndef CTM_MATH_M4x4SMTY
#define CTM_MATH_M4x4SMTY(ma0, ma1)\
ma0* matrix4x4math::squareMultiply(ma0* out, ma1* matrix, ma1* matrix1)\
{\
	ma0 ret[]\
	{\
		(ma0)matrix[0] * matrix1[0] + (ma0)matrix[1] * matrix1[4] + (ma0)matrix[2] * matrix1[8] + (ma0)matrix[3] * matrix1[12],\
		(ma0)matrix[0] * matrix1[1] + (ma0)matrix[1] * matrix1[5] + (ma0)matrix[2] * matrix1[9] + (ma0)matrix[3] * matrix1[13],\
		(ma0)matrix[0] * matrix1[2] + (ma0)matrix[1] * matrix1[6] + (ma0)matrix[2] * matrix1[10] + (ma0)matrix[3] * matrix1[14],\
		(ma0)matrix[0] * matrix1[3] + (ma0)matrix[1] * matrix1[7] + (ma0)matrix[2] * matrix1[11] + (ma0)matrix[3] * matrix1[15],\
		(ma0)matrix[4] * matrix1[0] + (ma0)matrix[5] * matrix1[4] + (ma0)matrix[6] * matrix1[8] + (ma0)matrix[7] * matrix1[12],\
		(ma0)matrix[4] * matrix1[1] + (ma0)matrix[5] * matrix1[5] + (ma0)matrix[6] * matrix1[9] + (ma0)matrix[7] * matrix1[13],\
		(ma0)matrix[4] * matrix1[2] + (ma0)matrix[5] * matrix1[6] + (ma0)matrix[6] * matrix1[10] + (ma0)matrix[7] * matrix1[14],\
		(ma0)matrix[4] * matrix1[3] + (ma0)matrix[5] * matrix1[7] + (ma0)matrix[6] * matrix1[11] + (ma0)matrix[7] * matrix1[15],\
		(ma0)matrix[8] * matrix1[0] + (ma0)matrix[9] * matrix1[4] + (ma0)matrix[10] * matrix1[8] + (ma0)matrix[11] * matrix1[12],\
		(ma0)matrix[8] * matrix1[1] + (ma0)matrix[9] * matrix1[5] + (ma0)matrix[10] * matrix1[9] + (ma0)matrix[11] * matrix1[13],\
		(ma0)matrix[8] * matrix1[2] + (ma0)matrix[9] * matrix1[6] + (ma0)matrix[10] * matrix1[10] + (ma0)matrix[11] * matrix1[14],\
		(ma0)matrix[8] * matrix1[3] + (ma0)matrix[9] * matrix1[7] + (ma0)matrix[10] * matrix1[11] + (ma0)matrix[11] * matrix1[15],\
		(ma0)matrix[12] * matrix1[0] + (ma0)matrix[13] * matrix1[4] + (ma0)matrix[14] * matrix1[8] + (ma0)matrix[15] * matrix1[12],\
		(ma0)matrix[12] * matrix1[1] + (ma0)matrix[13] * matrix1[5] + (ma0)matrix[14] * matrix1[9] + (ma0)matrix[15] * matrix1[13],\
		(ma0)matrix[12] * matrix1[2] + (ma0)matrix[13] * matrix1[6] + (ma0)matrix[14] * matrix1[10] + (ma0)matrix[15] * matrix1[14],\
		(ma0)matrix[12] * matrix1[3] + (ma0)matrix[13] * matrix1[7] + (ma0)matrix[14] * matrix1[11] + (ma0)matrix[15] * matrix1[15]\
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
	out[9] = ret[9];\
	out[10] = ret[10];\
	out[11] = ret[11];\
	out[12] = ret[12];\
	out[13] = ret[13];\
	out[14] = ret[14];\
	out[15] = ret[15];\
	return out;\
}
CTM_MATH_M4x4SMTY(__int8, __int8)
CTM_MATH_M4x4SMTY(__int16, __int8)
CTM_MATH_M4x4SMTY(__int16, __int16)
CTM_MATH_M4x4SMTY(__int32, __int16)
CTM_MATH_M4x4SMTY(__int32, __int32)
CTM_MATH_M4x4SMTY(__int64, __int32)
CTM_MATH_M4x4SMTY(__int64, __int64)
CTM_MATH_M4x4SMTY(__int128, __int64)
CTM_MATH_M4x4SMTY(__int128, __int128)
CTM_MATH_M4x4SMTY(float, float)
CTM_MATH_M4x4SMTY(double, float)
CTM_MATH_M4x4SMTY(double, double)
CTM_MATH_M4x4SMTY(__float128, double)
CTM_MATH_M4x4SMTY(__float128, __float128)
#endif

#ifndef CTM_MATH_M4x4IDTY
#define CTM_MATH_M4x4IDTY(ma0)\
ma0* matrix4x4math::identity(ma0* out)\
{\
	out[0] = out[5] = out[10] = out[15] = 1;\
	out[1] = out[2] = out[3] = out[4] = out[6] = out[7] = out[8] = out[9] = out[11] = out[12] = out[13] = out[14] = 0;\
	return out;\
}
CTM_MATH_M4x4IDTY(__int8)
CTM_MATH_M4x4IDTY(__int16)
CTM_MATH_M4x4IDTY(__int32)
CTM_MATH_M4x4IDTY(__int64)
CTM_MATH_M4x4IDTY(__int128)
CTM_MATH_M4x4IDTY(float)
CTM_MATH_M4x4IDTY(double)
CTM_MATH_M4x4IDTY(__float128)
#endif

#ifndef CTM_MATH_M4x4DTRM
#define CTM_MATH_M4x4DTRM(ma0, ma1)\
ma0 matrix4x4math::determinant(const ma0&, ma1* matrix)\
{\
	ma0 d01 = (ma0)matrix[8] * matrix[13] - (ma0)matrix[9] * matrix[12],\
	d02 = (ma0)matrix[8] * matrix[14] - (ma0)matrix[10] * matrix[12],\
	d03 = (ma0)matrix[8] * matrix[15] - (ma0)matrix[11] * matrix[12],\
	d12 = (ma0)matrix[9] * matrix[14] - (ma0)matrix[10] * matrix[13],\
	d13 = (ma0)matrix[9] * matrix[15] - (ma0)matrix[11] * matrix[13],\
	d23 = (ma0)matrix[10] * matrix[15] - (ma0)matrix[11] * matrix[14];\
	return (ma0)matrix[0] * (matrix[5] * d23 - matrix[6] * d13 + matrix[7] * d12)\
	- (ma0)matrix[1] * (matrix[4] * d23 - matrix[6] * d03 + matrix[7] * d02)\
	+ (ma0)matrix[2] * (matrix[4] * d13 - matrix[5] * d03 + matrix[7] * d01)\
	- (ma0)matrix[3] * (matrix[4] * d12 - matrix[5] * d02 + matrix[6] * d01);\
}
CTM_MATH_M4x4DTRM(__int8, __int8)
CTM_MATH_M4x4DTRM(__int16, __int8)
CTM_MATH_M4x4DTRM(__int16, __int16)
CTM_MATH_M4x4DTRM(__int32, __int16)
CTM_MATH_M4x4DTRM(__int32, __int32)
CTM_MATH_M4x4DTRM(__int64, __int32)
CTM_MATH_M4x4DTRM(__int64, __int64)
CTM_MATH_M4x4DTRM(__int128, __int64)
CTM_MATH_M4x4DTRM(__int128, __int128)
CTM_MATH_M4x4DTRM(float, float)
CTM_MATH_M4x4DTRM(double, float)
CTM_MATH_M4x4DTRM(double, double)
CTM_MATH_M4x4DTRM(__float128, double)
CTM_MATH_M4x4DTRM(__float128, __float128)
#endif

#ifndef CTM_MATH_M4x4TRSL
#define CTM_MATH_M4x4TRSL(ma0, ma1, ma2)\
ma0* matrix4x4math::translate(ma0* out, ma1* matrix, ma2* vector)\
{\
	ma0 x = vector[0], y = vector[1], z = vector[2];\
	out[12] = x * (out[0] = matrix[0]) + y * (out[4] = matrix[4]) + z * (out[8] = matrix[8]) + matrix[12];\
	out[13] = x * (out[1] = matrix[1]) + y * (out[5] = matrix[5]) + z * (out[9] = matrix[9]) + matrix[13];\
	out[14] = x * (out[2] = matrix[2]) + y * (out[6] = matrix[6]) + z * (out[10] = matrix[10]) + matrix[14];\
	out[15] = x * (out[3] = matrix[3]) + y * (out[7] = matrix[7]) + z * (out[11] = matrix[11]) + matrix[15];\
	return out;\
}
#ifndef CTM_MATH_M4x4TRSL_0
#define CTM_MATH_M4x4TRSL_0(ma0, ma1) CTM_MATH_M4x4TRSL(ma0, ma1, ma1)
#endif
#ifndef CTM_MATH_M4x4TRSL_1
#define CTM_MATH_M4x4TRSL_1(ma0, ma1) CTM_MATH_M4x4TRSL(ma0, ma1, ma0)
#endif
CTM_MATH_M4x4TRSL_0(__int8, __int8)
CTM_MATH_M4x4TRSL_0(__int16, __int8)
CTM_MATH_M4x4TRSL_0(__int16, __int16)
CTM_MATH_M4x4TRSL_0(__int32, __int16)
CTM_MATH_M4x4TRSL_0(__int32, __int32)
CTM_MATH_M4x4TRSL_0(__int64, __int32)
CTM_MATH_M4x4TRSL_0(__int64, __int64)
CTM_MATH_M4x4TRSL_0(__int128, __int64)
CTM_MATH_M4x4TRSL_0(__int128, __int128)
CTM_MATH_M4x4TRSL_1(float, __int8)
CTM_MATH_M4x4TRSL_1(float, __int16)
CTM_MATH_M4x4TRSL_1(float, __int32)
CTM_MATH_M4x4TRSL_1(float, __int64)
CTM_MATH_M4x4TRSL_1(float, __int128)
CTM_MATH_M4x4TRSL_1(float, float)
CTM_MATH_M4x4TRSL_0(double, float)
CTM_MATH_M4x4TRSL_1(double, __int8)
CTM_MATH_M4x4TRSL_1(double, __int16)
CTM_MATH_M4x4TRSL_1(double, __int32)
CTM_MATH_M4x4TRSL_1(double, __int64)
CTM_MATH_M4x4TRSL_1(double, __int128)
CTM_MATH_M4x4TRSL_1(double, float)
CTM_MATH_M4x4TRSL_1(double, double)
CTM_MATH_M4x4TRSL_0(__float128, double)
CTM_MATH_M4x4TRSL_1(__float128, __int8)
CTM_MATH_M4x4TRSL_1(__float128, __int16)
CTM_MATH_M4x4TRSL_1(__float128, __int32)
CTM_MATH_M4x4TRSL_1(__float128, __int64)
CTM_MATH_M4x4TRSL_1(__float128, __int128)
CTM_MATH_M4x4TRSL_1(__float128, float)
CTM_MATH_M4x4TRSL_1(__float128, double)
CTM_MATH_M4x4TRSL_1(__float128, __float128)
#endif

#ifndef CTM_MATH_M4x4ROTX
#define CTM_MATH_M4x4ROTX(ma0, ma1, ma2, ma3)\
ma0* matrix4x4math::rotateX(ma0* out, ma1* matrix, ma0 anglex)\
{\
	ma0 sx = ma2(anglex), cx = ma3(anglex);\
	ma1 m10 = matrix[4], m11 = matrix[5], m12 = matrix[6], m13 = matrix[7],\
	m20 = matrix[8], m21 = matrix[9], m22 = matrix[10], m23 = matrix[11];\
	out[0] = matrix[0];\
	out[1] = matrix[1];\
	out[2] = matrix[2];\
	out[3] = matrix[3];\
	out[12] = matrix[12];\
	out[13] = matrix[13];\
	out[14] = matrix[14];\
	out[15] = matrix[15];\
	out[4] = m10 * cx + m20 * sx;\
	out[5] = m11 * cx + m21 * sx;\
	out[6] = m12 * cx + m22 * sx;\
	out[7] = m13 * cx + m23 * sx;\
	out[8] = m20 * cx - m10 * sx;\
	out[9] = m21 * cx - m11 * sx;\
	out[10] = m22 * cx - m12 * sx;\
	out[11] = m23 * cx - m13 * sx;\
	return out;\
}
CTM_MATH_M4x4ROTX(float, __int8, sinf, cosf)
CTM_MATH_M4x4ROTX(float, __int16, sinf, cosf)
CTM_MATH_M4x4ROTX(float, __int32, sinf, cosf)
CTM_MATH_M4x4ROTX(float, __int64, sinf, cosf)
CTM_MATH_M4x4ROTX(float, __int128, sinf, cosf)
CTM_MATH_M4x4ROTX(float, float, sinf, cos)
CTM_MATH_M4x4ROTX(double, __int8, sin, cos)
CTM_MATH_M4x4ROTX(double, __int16, sin, cos)
CTM_MATH_M4x4ROTX(double, __int32, sin, cos)
CTM_MATH_M4x4ROTX(double, __int64, sin, cos)
CTM_MATH_M4x4ROTX(double, __int128, sin, cos)
CTM_MATH_M4x4ROTX(double, float, sin, cos)
CTM_MATH_M4x4ROTX(double, double, sin, cos)
CTM_MATH_M4x4ROTX(__float128, __int8, sinq, cosq)
CTM_MATH_M4x4ROTX(__float128, __int16, sinq, cosq)
CTM_MATH_M4x4ROTX(__float128, __int32, sinq, cosq)
CTM_MATH_M4x4ROTX(__float128, __int64, sinq, cosq)
CTM_MATH_M4x4ROTX(__float128, __int128, sinq, cosq)
CTM_MATH_M4x4ROTX(__float128, float, sinq, cosq)
CTM_MATH_M4x4ROTX(__float128, double, sinq, cosq)
CTM_MATH_M4x4ROTX(__float128, __float128, sinq, cosq)
#endif

#ifndef CTM_MATH_M4x4ROTY
#define CTM_MATH_M4x4ROTY(ma0, ma1, ma2, ma3)\
ma0* matrix4x4math::rotateY(ma0* out, ma1* matrix, ma0 angley)\
{\
	ma0 sy = ma2(angley), cy = ma3(angley);\
	ma1 m00 = matrix[0], m01 = matrix[1], m02 = matrix[2], m03 = matrix[3],\
	m20 = matrix[8], m21 = matrix[9], m22 = matrix[10], m23 = matrix[11];\
	out[4] = matrix[4];\
	out[5] = matrix[5];\
	out[6] = matrix[6];\
	out[7] = matrix[7];\
	out[12] = matrix[12];\
	out[13] = matrix[13];\
	out[14] = matrix[14];\
	out[15] = matrix[15];\
	out[0] = m00 * cy - m20 * sy;\
	out[1] = m01 * cy - m21 * sy;\
	out[2] = m02 * cy - m22 * sy;\
	out[3] = m03 * cy - m23 * sy;\
	out[8] = m00 * sy + m20 * cy;\
	out[9] = m01 * sy + m21 * cy;\
	out[10] = m02 * sy + m22 * cy;\
	out[11] = m03 * sy + m23 * cy;\
	return out;\
}
CTM_MATH_M4x4ROTY(float, __int8, sinf, cosf)
CTM_MATH_M4x4ROTY(float, __int16, sinf, cosf)
CTM_MATH_M4x4ROTY(float, __int32, sinf, cosf)
CTM_MATH_M4x4ROTY(float, __int64, sinf, cosf)
CTM_MATH_M4x4ROTY(float, __int128, sinf, cosf)
CTM_MATH_M4x4ROTY(float, float, sinf, cos)
CTM_MATH_M4x4ROTY(double, __int8, sin, cos)
CTM_MATH_M4x4ROTY(double, __int16, sin, cos)
CTM_MATH_M4x4ROTY(double, __int32, sin, cos)
CTM_MATH_M4x4ROTY(double, __int64, sin, cos)
CTM_MATH_M4x4ROTY(double, __int128, sin, cos)
CTM_MATH_M4x4ROTY(double, float, sin, cos)
CTM_MATH_M4x4ROTY(double, double, sin, cos)
CTM_MATH_M4x4ROTY(__float128, __int8, sinq, cosq)
CTM_MATH_M4x4ROTY(__float128, __int16, sinq, cosq)
CTM_MATH_M4x4ROTY(__float128, __int32, sinq, cosq)
CTM_MATH_M4x4ROTY(__float128, __int64, sinq, cosq)
CTM_MATH_M4x4ROTY(__float128, __int128, sinq, cosq)
CTM_MATH_M4x4ROTY(__float128, float, sinq, cosq)
CTM_MATH_M4x4ROTY(__float128, double, sinq, cosq)
CTM_MATH_M4x4ROTY(__float128, __float128, sinq, cosq)
#endif

#ifndef CTM_MATH_M4x4ROTZ
#define CTM_MATH_M4x4ROTZ(ma0, ma1, ma2, ma3)\
ma0* matrix4x4math::rotateZ(ma0* out, ma1* matrix, ma0 anglez)\
{\
	ma0 sz = ma2(anglez), cz = ma3(anglez);\
	ma1 m00 = matrix[0], m01 = matrix[1], m02 = matrix[2], m03 = matrix[3],\
	m10 = matrix[4], m11 = matrix[5], m12 = matrix[6], m13 = matrix[7];\
	out[8] = matrix[8];\
	out[9] = matrix[9];\
	out[10] = matrix[10];\
	out[11] = matrix[11];\
	out[12] = matrix[12];\
	out[13] = matrix[13];\
	out[14] = matrix[14];\
	out[15] = matrix[15];\
	out[0] = m00 * cz + m10 * sz;\
	out[1] = m01 * cz + m11 * sz;\
	out[2] = m02 * cz + m12 * sz;\
	out[3] = m03 * cz + m13 * sz;\
	out[4] = m10 * cz - m00 * sz;\
	out[5] = m11 * cz - m01 * sz;\
	out[6] = m12 * cz - m02 * sz;\
	out[7] = m13 * cz - m03 * sz;\
	return out;\
}
CTM_MATH_M4x4ROTZ(float, __int8, sinf, cosf)
CTM_MATH_M4x4ROTZ(float, __int16, sinf, cosf)
CTM_MATH_M4x4ROTZ(float, __int32, sinf, cosf)
CTM_MATH_M4x4ROTZ(float, __int64, sinf, cosf)
CTM_MATH_M4x4ROTZ(float, __int128, sinf, cosf)
CTM_MATH_M4x4ROTZ(float, float, sinf, cos)
CTM_MATH_M4x4ROTZ(double, __int8, sin, cos)
CTM_MATH_M4x4ROTZ(double, __int16, sin, cos)
CTM_MATH_M4x4ROTZ(double, __int32, sin, cos)
CTM_MATH_M4x4ROTZ(double, __int64, sin, cos)
CTM_MATH_M4x4ROTZ(double, __int128, sin, cos)
CTM_MATH_M4x4ROTZ(double, float, sin, cos)
CTM_MATH_M4x4ROTZ(double, double, sin, cos)
CTM_MATH_M4x4ROTZ(__float128, __int8, sinq, cosq)
CTM_MATH_M4x4ROTZ(__float128, __int16, sinq, cosq)
CTM_MATH_M4x4ROTZ(__float128, __int32, sinq, cosq)
CTM_MATH_M4x4ROTZ(__float128, __int64, sinq, cosq)
CTM_MATH_M4x4ROTZ(__float128, __int128, sinq, cosq)
CTM_MATH_M4x4ROTZ(__float128, float, sinq, cosq)
CTM_MATH_M4x4ROTZ(__float128, double, sinq, cosq)
CTM_MATH_M4x4ROTZ(__float128, __float128, sinq, cosq)
#endif

#ifndef CTM_MATH_M4x4RTXY
#define CTM_MATH_M4x4RTXY(ma0, ma1, ma2, ma3)\
ma0* matrix4x4math::rotateXY(ma0* out, ma1* matrix, ma0* angles)\
{\
	ma0 anglex = angles[0], angley = angles[1],\
	sx = ma2(anglex), cx = ma3(anglex),\
	sy = ma2(angley), cy = ma3(angley);\
	ma1 m00 = matrix[0], m01 = matrix[1], m02 = matrix[2], m03 = matrix[3],\
	m10 = matrix[4], m11 = matrix[5], m12 = matrix[6], m13 = matrix[7],\
	m20 = matrix[8], m21 = matrix[9], m22 = matrix[10], m23 = matrix[11];\
	ma0 n20 = m20 * cx - m10 * sx, n21 = m21 * cx - m11 * sx, n22 = m22 * cx - m12 * sx, n23 = m23 * cx - m13 * sx;\
	out[12] = matrix[12];\
	out[13] = matrix[13];\
	out[14] = matrix[14];\
	out[15] = matrix[15];\
	out[0] = m00 * cy - n20 * sy;\
	out[1] = m01 * cy - n21 * sy;\
	out[2] = m02 * cy - n22 * sy;\
	out[3] = m03 * cy - n23 * sy;\
	out[4] = m10 * cx + m20 * sx;\
	out[5] = m11 * cx + m21 * sx;\
	out[6] = m12 * cx + m22 * sx;\
	out[7] = m13 * cx + m23 * sx;\
	out[8] = m00 * sy + n20 * cy;\
	out[9] = m01 * sy + n21 * cy;\
	out[10] = m02 * sy + n22 * cy;\
	out[11] = m03 * sy + n23 * cy;\
	return out;\
}
CTM_MATH_M4x4RTXY(float, __int8, sinf, cosf)
CTM_MATH_M4x4RTXY(float, __int16, sinf, cosf)
CTM_MATH_M4x4RTXY(float, __int32, sinf, cosf)
CTM_MATH_M4x4RTXY(float, __int64, sinf, cosf)
CTM_MATH_M4x4RTXY(float, __int128, sinf, cosf)
CTM_MATH_M4x4RTXY(float, float, sinf, cos)
CTM_MATH_M4x4RTXY(double, __int8, sin, cos)
CTM_MATH_M4x4RTXY(double, __int16, sin, cos)
CTM_MATH_M4x4RTXY(double, __int32, sin, cos)
CTM_MATH_M4x4RTXY(double, __int64, sin, cos)
CTM_MATH_M4x4RTXY(double, __int128, sin, cos)
CTM_MATH_M4x4RTXY(double, float, sin, cos)
CTM_MATH_M4x4RTXY(double, double, sin, cos)
CTM_MATH_M4x4RTXY(__float128, __int8, sinq, cosq)
CTM_MATH_M4x4RTXY(__float128, __int16, sinq, cosq)
CTM_MATH_M4x4RTXY(__float128, __int32, sinq, cosq)
CTM_MATH_M4x4RTXY(__float128, __int64, sinq, cosq)
CTM_MATH_M4x4RTXY(__float128, __int128, sinq, cosq)
CTM_MATH_M4x4RTXY(__float128, float, sinq, cosq)
CTM_MATH_M4x4RTXY(__float128, double, sinq, cosq)
CTM_MATH_M4x4RTXY(__float128, __float128, sinq, cosq)
#endif

#ifndef CTM_MATH_M4x4RTXZ
#define CTM_MATH_M4x4RTXZ(ma0, ma1, ma2, ma3)\
ma0* matrix4x4math::rotateXZ(ma0* out, ma1* matrix, ma0* angles)\
{\
	ma0 anglex = angles[0], anglez = angles[2],\
	sx = ma2(anglex), cx = ma3(anglex),\
	sz = ma2(anglez), cz = ma3(anglez);\
	ma1 m00 = matrix[0], m01 = matrix[1], m02 = matrix[2], m03 = matrix[3],\
	m10 = matrix[4], m11 = matrix[5], m12 = matrix[6], m13 = matrix[7],\
	m20 = matrix[8], m21 = matrix[9], m22 = matrix[10], m23 = matrix[11];\
	ma0 n10 = m10 * cx + m20 * sx, n11 = m11 * cx + m21 * sx, n12 = m12 * cx + m22 * sx, n13 = m13 * cx + m23 * sx;\
	out[12] = matrix[12];\
	out[13] = matrix[13];\
	out[14] = matrix[14];\
	out[15] = matrix[15];\
	out[0] = m00 * cz + n10 * sz;\
	out[1] = m01 * cz + n11 * sz;\
	out[2] = m02 * cz + n12 * sz;\
	out[3] = m03 * cz + n13 * sz;\
	out[4] = n10 * cz - m00 * sz;\
	out[5] = n11 * cz - m01 * sz;\
	out[6] = n12 * cz - m02 * sz;\
	out[7] = n13 * cz - m03 * sz;\
	out[8] = m20 * cx - m10 * sx;\
	out[9] = m21 * cx - m11 * sx;\
	out[10] = m22 * cx - m12 * sx;\
	out[11] = m23 * cx - m13 * sx;\
	return out;\
}
CTM_MATH_M4x4RTXZ(float, __int8, sinf, cosf)
CTM_MATH_M4x4RTXZ(float, __int16, sinf, cosf)
CTM_MATH_M4x4RTXZ(float, __int32, sinf, cosf)
CTM_MATH_M4x4RTXZ(float, __int64, sinf, cosf)
CTM_MATH_M4x4RTXZ(float, __int128, sinf, cosf)
CTM_MATH_M4x4RTXZ(float, float, sinf, cos)
CTM_MATH_M4x4RTXZ(double, __int8, sin, cos)
CTM_MATH_M4x4RTXZ(double, __int16, sin, cos)
CTM_MATH_M4x4RTXZ(double, __int32, sin, cos)
CTM_MATH_M4x4RTXZ(double, __int64, sin, cos)
CTM_MATH_M4x4RTXZ(double, __int128, sin, cos)
CTM_MATH_M4x4RTXZ(double, float, sin, cos)
CTM_MATH_M4x4RTXZ(double, double, sin, cos)
CTM_MATH_M4x4RTXZ(__float128, __int8, sinq, cosq)
CTM_MATH_M4x4RTXZ(__float128, __int16, sinq, cosq)
CTM_MATH_M4x4RTXZ(__float128, __int32, sinq, cosq)
CTM_MATH_M4x4RTXZ(__float128, __int64, sinq, cosq)
CTM_MATH_M4x4RTXZ(__float128, __int128, sinq, cosq)
CTM_MATH_M4x4RTXZ(__float128, float, sinq, cosq)
CTM_MATH_M4x4RTXZ(__float128, double, sinq, cosq)
CTM_MATH_M4x4RTXZ(__float128, __float128, sinq, cosq)
#endif

#ifndef CTM_MATH_M4x4RXYZ
#define CTM_MATH_M4x4RXYZ(ma0, ma1, ma2, ma3)\
ma0* matrix4x4math::rotateXYZ(ma0* out, ma1* matrix, ma0* angles)\
{\
	ma0 anglex = angles[0], angley = angles[1], anglez = angles[2],\
	sx = ma2(anglex), cx = ma3(anglex),\
	sy = ma2(angley), cy = ma3(angley),\
	sz = ma2(anglez), cz = ma3(anglez);\
	ma1 m00 = matrix[0], m01 = matrix[1], m02 = matrix[2], m03 = matrix[3],\
	m10 = matrix[4], m11 = matrix[5], m12 = matrix[6], m13 = matrix[7],\
	m20 = matrix[8], m21 = matrix[9], m22 = matrix[10], m23 = matrix[11];\
	ma0 n20 = m20 * cx - m10 * sx, n21 = m21 * cx - m11 * sx, n22 = m22 * cx - m12 * sx, n23 = m23 * cx - m13 * sx,\
	n00 = m00 * cy - n20 * sy, n01 = m01 * cy - n21 * sy, n02 = m02 * cy - n22 * sy, n03 = m03 * cy - n23 * sy,\
	n10 = m10 * cx + m20 * sx, n11 = m11 * cx + m21 * sx, n12 = m12 * cx + m22 * sx, n13 = m13 * cx + m23 * sx;\
	out[12] = matrix[12];\
	out[13] = matrix[13];\
	out[14] = matrix[14];\
	out[15] = matrix[15];\
	out[0] = n00 * cz + n10 * sz;\
	out[1] = n01 * cz + n11 * sz;\
	out[2] = n02 * cz + n12 * sz;\
	out[3] = n03 * cz + n13 * sz;\
	out[4] = n10 * cz - n00 * sz;\
	out[5] = n11 * cz - n01 * sz;\
	out[6] = n12 * cz - n02 * sz;\
	out[7] = n13 * cz - n03 * sz;\
	out[8] = m00 * sy + n20 * cy;\
	out[9] = m01 * sy + n21 * cy;\
	out[10] = m02 * sy + n22 * cy;\
	out[11] = m03 * sy + n23 * cy;\
	return out;\
}
CTM_MATH_M4x4RXYZ(float, __int8, sinf, cosf)
CTM_MATH_M4x4RXYZ(float, __int16, sinf, cosf)
CTM_MATH_M4x4RXYZ(float, __int32, sinf, cosf)
CTM_MATH_M4x4RXYZ(float, __int64, sinf, cosf)
CTM_MATH_M4x4RXYZ(float, __int128, sinf, cosf)
CTM_MATH_M4x4RXYZ(float, float, sinf, cos)
CTM_MATH_M4x4RXYZ(double, __int8, sin, cos)
CTM_MATH_M4x4RXYZ(double, __int16, sin, cos)
CTM_MATH_M4x4RXYZ(double, __int32, sin, cos)
CTM_MATH_M4x4RXYZ(double, __int64, sin, cos)
CTM_MATH_M4x4RXYZ(double, __int128, sin, cos)
CTM_MATH_M4x4RXYZ(double, float, sin, cos)
CTM_MATH_M4x4RXYZ(double, double, sin, cos)
CTM_MATH_M4x4RXYZ(__float128, __int8, sinq, cosq)
CTM_MATH_M4x4RXYZ(__float128, __int16, sinq, cosq)
CTM_MATH_M4x4RXYZ(__float128, __int32, sinq, cosq)
CTM_MATH_M4x4RXYZ(__float128, __int64, sinq, cosq)
CTM_MATH_M4x4RXYZ(__float128, __int128, sinq, cosq)
CTM_MATH_M4x4RXYZ(__float128, float, sinq, cosq)
CTM_MATH_M4x4RXYZ(__float128, double, sinq, cosq)
CTM_MATH_M4x4RXYZ(__float128, __float128, sinq, cosq)
#endif

#ifndef CTM_MATH_M4x4RXZY
#define CTM_MATH_M4x4RXZY(ma0, ma1, ma2, ma3)\
ma0* matrix4x4math::rotateXZY(ma0* out, ma1* matrix, ma0* angles)\
{\
	ma0 anglex = angles[0], angley = angles[1], anglez = angles[2],\
	sx = ma2(anglex), cx = ma3(anglex),\
	sy = ma2(angley), cy = ma3(angley),\
	sz = ma2(anglez), cz = ma3(anglez);\
	ma1 m00 = matrix[0], m01 = matrix[1], m02 = matrix[2], m03 = matrix[3],\
	m10 = matrix[4], m11 = matrix[5], m12 = matrix[6], m13 = matrix[7],\
	m20 = matrix[8], m21 = matrix[9], m22 = matrix[10], m23 = matrix[11];\
	ma0 n10 = m10 * cx + m20 * sx, n11 = m11 * cx + m21 * sx, n12 = m12 * cx + m22 * sx, n13 = m13 * cx + m23 * sx,\
	n00 = m00 * cz + n10 * sz, n01 = m01 * cz + n11 * sz, n02 = m02 * cz + n12 * sz, n03 = m03 * cz + n13 * sz,\
	n20 = m20 * cx - m10 * sx, n21 = m21 * cx - m11 * sx, n22 = m22 * cx - m12 * sx, n23 = m23 * cx - m13 * sx;\
	out[12] = matrix[12];\
	out[13] = matrix[13];\
	out[14] = matrix[14];\
	out[15] = matrix[15];\
	out[0] = n00 * cy - n20 * sy;\
	out[1] = n01 * cy - n21 * sy;\
	out[2] = n02 * cy - n22 * sy;\
	out[3] = n03 * cy - n23 * sy;\
	out[4] = n10 * cz - m00 * sz;\
	out[5] = n11 * cz - m01 * sz;\
	out[6] = n12 * cz - m02 * sz;\
	out[7] = n13 * cz - m03 * sz;\
	out[8] = n00 * sy + n20 * cy;\
	out[9] = n01 * sy + n21 * cy;\
	out[10] = n02 * sy + n22 * cy;\
	out[11] = n03 * sy + n23 * cy;\
	return out;\
}
CTM_MATH_M4x4RXZY(float, __int8, sinf, cosf)
CTM_MATH_M4x4RXZY(float, __int16, sinf, cosf)
CTM_MATH_M4x4RXZY(float, __int32, sinf, cosf)
CTM_MATH_M4x4RXZY(float, __int64, sinf, cosf)
CTM_MATH_M4x4RXZY(float, __int128, sinf, cosf)
CTM_MATH_M4x4RXZY(float, float, sinf, cos)
CTM_MATH_M4x4RXZY(double, __int8, sin, cos)
CTM_MATH_M4x4RXZY(double, __int16, sin, cos)
CTM_MATH_M4x4RXZY(double, __int32, sin, cos)
CTM_MATH_M4x4RXZY(double, __int64, sin, cos)
CTM_MATH_M4x4RXZY(double, __int128, sin, cos)
CTM_MATH_M4x4RXZY(double, float, sin, cos)
CTM_MATH_M4x4RXZY(double, double, sin, cos)
CTM_MATH_M4x4RXZY(__float128, __int8, sinq, cosq)
CTM_MATH_M4x4RXZY(__float128, __int16, sinq, cosq)
CTM_MATH_M4x4RXZY(__float128, __int32, sinq, cosq)
CTM_MATH_M4x4RXZY(__float128, __int64, sinq, cosq)
CTM_MATH_M4x4RXZY(__float128, __int128, sinq, cosq)
CTM_MATH_M4x4RXZY(__float128, float, sinq, cosq)
CTM_MATH_M4x4RXZY(__float128, double, sinq, cosq)
CTM_MATH_M4x4RXZY(__float128, __float128, sinq, cosq)
#endif

#ifndef CTM_MATH_M4x4RTYX
#define CTM_MATH_M4x4RTYX(ma0, ma1, ma2, ma3)\
ma0* matrix4x4math::rotateYX(ma0* out, ma1* matrix, ma0* angles)\
{\
	ma0 anglex = angles[0], angley = angles[1],\
	sx = ma2(anglex), cx = ma3(anglex),\
	sy = ma2(angley), cy = ma3(angley);\
	ma1 m00 = matrix[0], m01 = matrix[1], m02 = matrix[2], m03 = matrix[3],\
	m10 = matrix[4], m11 = matrix[5], m12 = matrix[6], m13 = matrix[7],\
	m20 = matrix[8], m21 = matrix[9], m22 = matrix[10], m23 = matrix[11];\
	ma0 n20 = m00 * sy + m20 * cy, n21 = m01 * sy + m21 * cy, n22 = m02 * sy + m22 * cy, n23 = m03 * sy + m23 * cy;\
	out[12] = matrix[12];\
	out[13] = matrix[13];\
	out[14] = matrix[14];\
	out[15] = matrix[15];\
	out[0] = m00 * cy - m20 * sy;\
	out[1] = m01 * cy - m21 * sy;\
	out[2] = m02 * cy - m22 * sy;\
	out[3] = m03 * cy - m23 * sy;\
	out[4] = m10 * cx + n20 * sx;\
	out[5] = m11 * cx + n21 * sx;\
	out[6] = m12 * cx + n22 * sx;\
	out[7] = m13 * cx + n23 * sx;\
	out[8] = n20 * cx - m10 * sx;\
	out[9] = n21 * cx - m11 * sx;\
	out[10] = n22 * cx - m12 * sx;\
	out[11] = n23 * cx - m13 * sx;\
	return out;\
}
CTM_MATH_M4x4RTYX(float, __int8, sinf, cosf)
CTM_MATH_M4x4RTYX(float, __int16, sinf, cosf)
CTM_MATH_M4x4RTYX(float, __int32, sinf, cosf)
CTM_MATH_M4x4RTYX(float, __int64, sinf, cosf)
CTM_MATH_M4x4RTYX(float, __int128, sinf, cosf)
CTM_MATH_M4x4RTYX(float, float, sinf, cos)
CTM_MATH_M4x4RTYX(double, __int8, sin, cos)
CTM_MATH_M4x4RTYX(double, __int16, sin, cos)
CTM_MATH_M4x4RTYX(double, __int32, sin, cos)
CTM_MATH_M4x4RTYX(double, __int64, sin, cos)
CTM_MATH_M4x4RTYX(double, __int128, sin, cos)
CTM_MATH_M4x4RTYX(double, float, sin, cos)
CTM_MATH_M4x4RTYX(double, double, sin, cos)
CTM_MATH_M4x4RTYX(__float128, __int8, sinq, cosq)
CTM_MATH_M4x4RTYX(__float128, __int16, sinq, cosq)
CTM_MATH_M4x4RTYX(__float128, __int32, sinq, cosq)
CTM_MATH_M4x4RTYX(__float128, __int64, sinq, cosq)
CTM_MATH_M4x4RTYX(__float128, __int128, sinq, cosq)
CTM_MATH_M4x4RTYX(__float128, float, sinq, cosq)
CTM_MATH_M4x4RTYX(__float128, double, sinq, cosq)
CTM_MATH_M4x4RTYX(__float128, __float128, sinq, cosq)
#endif

#ifndef CTM_MATH_M4x4RTYZ
#define CTM_MATH_M4x4RTYZ(ma0, ma1, ma2, ma3)\
ma0* matrix4x4math::rotateYZ(ma0* out, ma1* matrix, ma0* angles)\
{\
	ma0 angley = angles[1], anglez = angles[2],\
	sy = ma2(angley), cy = ma3(angley),\
	sz = ma2(anglez), cz = ma3(anglez);\
	ma1 m00 = matrix[0], m01 = matrix[1], m02 = matrix[2], m03 = matrix[3],\
	m10 = matrix[4], m11 = matrix[5], m12 = matrix[6], m13 = matrix[7],\
	m20 = matrix[8], m21 = matrix[9], m22 = matrix[10], m23 = matrix[11];\
	ma0 n00 = m00 * cy - m20 * sy, n01 = m01 * cy - m21 * sy, n02 = m02 * cy - m22 * sy, n03 = m03 * cy - m23 * sy;\
	out[12] = matrix[12];\
	out[13] = matrix[13];\
	out[14] = matrix[14];\
	out[15] = matrix[15];\
	out[0] = n00 * cz + m10 * sz;\
	out[1] = n01 * cz + m11 * sz;\
	out[2] = n02 * cz + m12 * sz;\
	out[3] = n03 * cz + m13 * sz;\
	out[4] = m10 * cz - n00 * sz;\
	out[5] = m11 * cz - n01 * sz;\
	out[6] = m12 * cz - n02 * sz;\
	out[7] = m13 * cz - n03 * sz;\
	out[8] = m00 * sy + m20 * cy;\
	out[9] = m01 * sy + m21 * cy;\
	out[10] = m02 * sy + m22 * cy;\
	out[11] = m03 * sy + m23 * cy;\
	return out;\
}
CTM_MATH_M4x4RTYZ(float, __int8, sinf, cosf)
CTM_MATH_M4x4RTYZ(float, __int16, sinf, cosf)
CTM_MATH_M4x4RTYZ(float, __int32, sinf, cosf)
CTM_MATH_M4x4RTYZ(float, __int64, sinf, cosf)
CTM_MATH_M4x4RTYZ(float, __int128, sinf, cosf)
CTM_MATH_M4x4RTYZ(float, float, sinf, cos)
CTM_MATH_M4x4RTYZ(double, __int8, sin, cos)
CTM_MATH_M4x4RTYZ(double, __int16, sin, cos)
CTM_MATH_M4x4RTYZ(double, __int32, sin, cos)
CTM_MATH_M4x4RTYZ(double, __int64, sin, cos)
CTM_MATH_M4x4RTYZ(double, __int128, sin, cos)
CTM_MATH_M4x4RTYZ(double, float, sin, cos)
CTM_MATH_M4x4RTYZ(double, double, sin, cos)
CTM_MATH_M4x4RTYZ(__float128, __int8, sinq, cosq)
CTM_MATH_M4x4RTYZ(__float128, __int16, sinq, cosq)
CTM_MATH_M4x4RTYZ(__float128, __int32, sinq, cosq)
CTM_MATH_M4x4RTYZ(__float128, __int64, sinq, cosq)
CTM_MATH_M4x4RTYZ(__float128, __int128, sinq, cosq)
CTM_MATH_M4x4RTYZ(__float128, float, sinq, cosq)
CTM_MATH_M4x4RTYZ(__float128, double, sinq, cosq)
CTM_MATH_M4x4RTYZ(__float128, __float128, sinq, cosq)
#endif

#ifndef CTM_MATH_M4x4RYXZ
#define CTM_MATH_M4x4RYXZ(ma0, ma1, ma2, ma3)\
ma0* matrix4x4math::rotateYXZ(ma0* out, ma1* matrix, ma0* angles)\
{\
	ma0 anglex = angles[0], angley = angles[1], anglez = angles[2],\
	sx = ma2(anglex), cx = ma3(anglex), sy = ma2(angley),\
	cy = ma3(angley), sz = ma2(anglez), cz = ma3(anglez);\
	ma1 m00 = matrix[0], m01 = matrix[1], m02 = matrix[2], m03 = matrix[3],\
	m10 = matrix[4], m11 = matrix[5], m12 = matrix[6], m13 = matrix[7],\
	m20 = matrix[8], m21 = matrix[9], m22 = matrix[10], m23 = matrix[11];\
	ma0 n20 = m00 * sy + m20 * cy, n21 = m01 * sy + m21 * cy, n22 = m02 * sy + m22 * cy, n23 = m03 * sy + m23 * cy,\
	n00 = m00 * cy - m20 * sy, n01 = m01 * cy - m21 * sy, n02 = m02 * cy - m22 * sy, n03 = m03 * cy - m23 * sy,\
	n10 = m10 * cx + n20 * sx, n11 = m11 * cx + n21 * sx, n12 = m12 * cx + n22 * sx, n13 = m13 * cx + n23 * sx;\
	out[12] = matrix[12];\
	out[13] = matrix[13];\
	out[14] = matrix[14];\
	out[15] = matrix[15];\
	out[0] = n00 * cz + n10 * sz;\
	out[1] = n01 * cz + n11 * sz;\
	out[2] = n02 * cz + n12 * sz;\
	out[3] = n03 * cz + n13 * sz;\
	out[4] = n10 * cz - n00 * sz;\
	out[5] = n11 * cz - n01 * sz;\
	out[6] = n12 * cz - n02 * sz;\
	out[7] = n13 * cz - n03 * sz;\
	out[8] = n20 * cx - m10 * sx;\
	out[9] = n21 * cx - m11 * sx;\
	out[10] = n22 * cx - m12 * sx;\
	out[11] = n23 * cx - m13 * sx;\
	return out;\
}
CTM_MATH_M4x4RYXZ(float, __int8, sinf, cosf)
CTM_MATH_M4x4RYXZ(float, __int16, sinf, cosf)
CTM_MATH_M4x4RYXZ(float, __int32, sinf, cosf)
CTM_MATH_M4x4RYXZ(float, __int64, sinf, cosf)
CTM_MATH_M4x4RYXZ(float, __int128, sinf, cosf)
CTM_MATH_M4x4RYXZ(float, float, sinf, cos)
CTM_MATH_M4x4RYXZ(double, __int8, sin, cos)
CTM_MATH_M4x4RYXZ(double, __int16, sin, cos)
CTM_MATH_M4x4RYXZ(double, __int32, sin, cos)
CTM_MATH_M4x4RYXZ(double, __int64, sin, cos)
CTM_MATH_M4x4RYXZ(double, __int128, sin, cos)
CTM_MATH_M4x4RYXZ(double, float, sin, cos)
CTM_MATH_M4x4RYXZ(double, double, sin, cos)
CTM_MATH_M4x4RYXZ(__float128, __int8, sinq, cosq)
CTM_MATH_M4x4RYXZ(__float128, __int16, sinq, cosq)
CTM_MATH_M4x4RYXZ(__float128, __int32, sinq, cosq)
CTM_MATH_M4x4RYXZ(__float128, __int64, sinq, cosq)
CTM_MATH_M4x4RYXZ(__float128, __int128, sinq, cosq)
CTM_MATH_M4x4RYXZ(__float128, float, sinq, cosq)
CTM_MATH_M4x4RYXZ(__float128, double, sinq, cosq)
CTM_MATH_M4x4RYXZ(__float128, __float128, sinq, cosq)
#endif

#ifndef CTM_MATH_M4x4RYZX
#define CTM_MATH_M4x4RYZX(ma0, ma1, ma2, ma3)\
ma0* matrix4x4math::rotateYZX(ma0* out, ma1* matrix, ma0* angles)\
{\
	ma0 anglex = angles[0], angley = angles[1], anglez = angles[2],\
	sx = ma2(anglex), cx = ma3(anglex),\
	sy = ma2(angley), cy = ma3(angley),\
	sz = ma2(anglez), cz = ma3(anglez);\
	ma1 m00 = matrix[0], m01 = matrix[1], m02 = matrix[2], m03 = matrix[3],\
	m10 = matrix[4], m11 = matrix[5], m12 = matrix[6], m13 = matrix[7],\
	m20 = matrix[8], m21 = matrix[9], m22 = matrix[10], m23 = matrix[11];\
	ma0 n00 = m00 * cy - m20 * sy, n01 = m01 * cy - m21 * sy, n02 = m02 * cy - m22 * sy, n03 = m03 * cy - m23 * sy,\
	n10 = m10 * cz - n00 * sz, n11 = m11 * cz - n01 * sz, n12 = m12 * cz - n02 * sz, n13 = m13 * cz - n03 * sz,\
	n20 = m00 * sy + m20 * cy, n21 = m01 * sy + m21 * cy, n22 = m02 * sy + m22 * cy, n23 = m03 * sy + m23 * cy;\
	out[12] = matrix[12];\
	out[13] = matrix[13];\
	out[14] = matrix[14];\
	out[15] = matrix[15];\
	out[0] = n00 * cz + m10 * sz;\
	out[1] = n01 * cz + m11 * sz;\
	out[2] = n02 * cz + m12 * sz;\
	out[3] = n03 * cz + m13 * sz;\
	out[4] = n10 * cx + n20 * sx;\
	out[5] = n11 * cx + n21 * sx;\
	out[6] = n12 * cx + n22 * sx;\
	out[7] = n13 * cx + n23 * sx;\
	out[8] = n20 * cx - n10 * sx;\
	out[9] = n21 * cx - n11 * sx;\
	out[10] = n22 * cx - n12 * sx;\
	out[11] = n23 * cx - n13 * sx;\
	return out;\
}
CTM_MATH_M4x4RYZX(float, __int8, sinf, cosf)
CTM_MATH_M4x4RYZX(float, __int16, sinf, cosf)
CTM_MATH_M4x4RYZX(float, __int32, sinf, cosf)
CTM_MATH_M4x4RYZX(float, __int64, sinf, cosf)
CTM_MATH_M4x4RYZX(float, __int128, sinf, cosf)
CTM_MATH_M4x4RYZX(float, float, sinf, cos)
CTM_MATH_M4x4RYZX(double, __int8, sin, cos)
CTM_MATH_M4x4RYZX(double, __int16, sin, cos)
CTM_MATH_M4x4RYZX(double, __int32, sin, cos)
CTM_MATH_M4x4RYZX(double, __int64, sin, cos)
CTM_MATH_M4x4RYZX(double, __int128, sin, cos)
CTM_MATH_M4x4RYZX(double, float, sin, cos)
CTM_MATH_M4x4RYZX(double, double, sin, cos)
CTM_MATH_M4x4RYZX(__float128, __int8, sinq, cosq)
CTM_MATH_M4x4RYZX(__float128, __int16, sinq, cosq)
CTM_MATH_M4x4RYZX(__float128, __int32, sinq, cosq)
CTM_MATH_M4x4RYZX(__float128, __int64, sinq, cosq)
CTM_MATH_M4x4RYZX(__float128, __int128, sinq, cosq)
CTM_MATH_M4x4RYZX(__float128, float, sinq, cosq)
CTM_MATH_M4x4RYZX(__float128, double, sinq, cosq)
CTM_MATH_M4x4RYZX(__float128, __float128, sinq, cosq)
#endif

#ifndef CTM_MATH_M4x4RTZX
#define CTM_MATH_M4x4RTZX(ma0, ma1, ma2, ma3)\
ma0* matrix4x4math::rotateZX(ma0* out, ma1* matrix, ma0* angles)\
{\
	ma0 anglex = angles[0], anglez = angles[2],\
	sx = ma2(anglex), cx = ma3(anglex),\
	sz = ma2(anglez), cz = ma3(anglez);\
	ma1 m00 = matrix[0], m01 = matrix[1], m02 = matrix[2], m03 = matrix[3],\
	m10 = matrix[4], m11 = matrix[5], m12 = matrix[6], m13 = matrix[7],\
	m20 = matrix[8], m21 = matrix[9], m22 = matrix[10], m23 = matrix[11];\
	ma0 n10 = m10 * cz - m00 * sz, n11 = m11 * cz - m01 * sz, n12 = m12 * cz - m02 * sz, n13 = m13 * cz - m03 * sz;\
	out[12] = matrix[12];\
	out[13] = matrix[13];\
	out[14] = matrix[14];\
	out[15] = matrix[15];\
	out[0] = m00 * cz + m10 * sz;\
	out[1] = m01 * cz + m11 * sz;\
	out[2] = m02 * cz + m12 * sz;\
	out[3] = m03 * cz + m13 * sz;\
	out[4] = n10 * cx + m20 * sx;\
	out[5] = n11 * cx + m21 * sx;\
	out[6] = n12 * cx + m22 * sx;\
	out[7] = n13 * cx + m23 * sx;\
	out[8] = m20 * cx - n10 * sx;\
	out[9] = m21 * cx - n11 * sx;\
	out[10] = m22 * cx - n12 * sx;\
	out[11] = m23 * cx - n13 * sx;\
	return out;\
}
CTM_MATH_M4x4RTZX(float, __int8, sinf, cosf)
CTM_MATH_M4x4RTZX(float, __int16, sinf, cosf)
CTM_MATH_M4x4RTZX(float, __int32, sinf, cosf)
CTM_MATH_M4x4RTZX(float, __int64, sinf, cosf)
CTM_MATH_M4x4RTZX(float, __int128, sinf, cosf)
CTM_MATH_M4x4RTZX(float, float, sinf, cos)
CTM_MATH_M4x4RTZX(double, __int8, sin, cos)
CTM_MATH_M4x4RTZX(double, __int16, sin, cos)
CTM_MATH_M4x4RTZX(double, __int32, sin, cos)
CTM_MATH_M4x4RTZX(double, __int64, sin, cos)
CTM_MATH_M4x4RTZX(double, __int128, sin, cos)
CTM_MATH_M4x4RTZX(double, float, sin, cos)
CTM_MATH_M4x4RTZX(double, double, sin, cos)
CTM_MATH_M4x4RTZX(__float128, __int8, sinq, cosq)
CTM_MATH_M4x4RTZX(__float128, __int16, sinq, cosq)
CTM_MATH_M4x4RTZX(__float128, __int32, sinq, cosq)
CTM_MATH_M4x4RTZX(__float128, __int64, sinq, cosq)
CTM_MATH_M4x4RTZX(__float128, __int128, sinq, cosq)
CTM_MATH_M4x4RTZX(__float128, float, sinq, cosq)
CTM_MATH_M4x4RTZX(__float128, double, sinq, cosq)
CTM_MATH_M4x4RTZX(__float128, __float128, sinq, cosq)
#endif

#ifndef CTM_MATH_M4x4RTZY
#define CTM_MATH_M4x4RTZY(ma0, ma1, ma2, ma3)\
ma0* matrix4x4math::rotateZY(ma0* out, ma1* matrix, ma0* angles)\
{\
	ma0 angley = angles[1], anglez = angles[2],\
	sy = ma2(angley), cy = ma3(angley),\
	sz = ma2(anglez), cz = ma3(anglez);\
	ma1 m00 = matrix[0], m01 = matrix[1], m02 = matrix[2], m03 = matrix[3],\
	m10 = matrix[4], m11 = matrix[5], m12 = matrix[6], m13 = matrix[7],\
	m20 = matrix[8], m21 = matrix[9], m22 = matrix[10], m23 = matrix[11];\
	ma0 n00 = m00 * cz + m10 * sz, n01 = m01 * cz + m11 * sz, n02 = m02 * cz + m12 * sz, n03 = m03 * cz + m13 * sz;\
	out[12] = matrix[12];\
	out[13] = matrix[13];\
	out[14] = matrix[14];\
	out[15] = matrix[15];\
	out[0] = n00 * cy - m20 * sy;\
	out[1] = n01 * cy - m21 * sy;\
	out[2] = n02 * cy - m22 * sy;\
	out[3] = n03 * cy - m23 * sy;\
	out[4] = m10 * cz - m00 * sz;\
	out[5] = m11 * cz - m01 * sz;\
	out[6] = m12 * cz - m02 * sz;\
	out[7] = m13 * cz - m03 * sz;\
	out[8] = n00 * sy + m20 * cy;\
	out[9] = n01 * sy + m21 * cy;\
	out[10] = n02 * sy + m22 * cy;\
	out[11] = n03 * sy + m23 * cy;\
	return out;\
}
CTM_MATH_M4x4RTZY(float, __int8, sinf, cosf)
CTM_MATH_M4x4RTZY(float, __int16, sinf, cosf)
CTM_MATH_M4x4RTZY(float, __int32, sinf, cosf)
CTM_MATH_M4x4RTZY(float, __int64, sinf, cosf)
CTM_MATH_M4x4RTZY(float, __int128, sinf, cosf)
CTM_MATH_M4x4RTZY(float, float, sinf, cos)
CTM_MATH_M4x4RTZY(double, __int8, sin, cos)
CTM_MATH_M4x4RTZY(double, __int16, sin, cos)
CTM_MATH_M4x4RTZY(double, __int32, sin, cos)
CTM_MATH_M4x4RTZY(double, __int64, sin, cos)
CTM_MATH_M4x4RTZY(double, __int128, sin, cos)
CTM_MATH_M4x4RTZY(double, float, sin, cos)
CTM_MATH_M4x4RTZY(double, double, sin, cos)
CTM_MATH_M4x4RTZY(__float128, __int8, sinq, cosq)
CTM_MATH_M4x4RTZY(__float128, __int16, sinq, cosq)
CTM_MATH_M4x4RTZY(__float128, __int32, sinq, cosq)
CTM_MATH_M4x4RTZY(__float128, __int64, sinq, cosq)
CTM_MATH_M4x4RTZY(__float128, __int128, sinq, cosq)
CTM_MATH_M4x4RTZY(__float128, float, sinq, cosq)
CTM_MATH_M4x4RTZY(__float128, double, sinq, cosq)
CTM_MATH_M4x4RTZY(__float128, __float128, sinq, cosq)
#endif

#ifndef CTM_MATH_M4x4RZXY
#define CTM_MATH_M4x4RZXY(ma0, ma1, ma2, ma3)\
ma0* matrix4x4math::rotateZXY(ma0* out, ma1* matrix, ma0* angles)\
{\
	ma0 anglex = angles[0], angley = angles[1], anglez = angles[2],\
	sx = ma2(anglex), cx = ma3(anglex),\
	sy = ma2(angley), cy = ma3(angley),\
	sz = ma2(anglez), cz = ma3(anglez);\
	ma1 m00 = matrix[0], m01 = matrix[1], m02 = matrix[2], m03 = matrix[3],\
	m10 = matrix[4], m11 = matrix[5], m12 = matrix[6], m13 = matrix[7],\
	m20 = matrix[8], m21 = matrix[9], m22 = matrix[10], m23 = matrix[11];\
	ma0 n10 = m10 * cz - m00 * sz, n11 = m11 * cz - m01 * sz, n12 = m12 * cz - m02 * sz, n13 = m13 * cz - m03 * sz,\
	n00 = m00 * cz + m10 * sz, n01 = m01 * cz + m11 * sz, n02 = m02 * cz + m12 * sz, n03 = m03 * cz + m13 * sz,\
	n20 = m20 * cx - n10 * sx, n21 = m21 * cx - n11 * sx, n22 = m22 * cx - n12 * sx, n23 = m23 * cx - n13 * sx;\
	out[12] = matrix[12];\
	out[13] = matrix[13];\
	out[14] = matrix[14];\
	out[15] = matrix[15];\
	out[0] = n00 * cy - n20 * sy;\
	out[1] = n01 * cy - n21 * sy;\
	out[2] = n02 * cy - n22 * sy;\
	out[3] = n03 * cy - n23 * sy;\
	out[4] = n10 * cx + m20 * sx;\
	out[5] = n11 * cx + m21 * sx;\
	out[6] = n12 * cx + m22 * sx;\
	out[7] = n13 * cx + m23 * sx;\
	out[8] = n00 * sy + n20 * cy;\
	out[9] = n01 * sy + n21 * cy;\
	out[10] = n02 * sy + n22 * cy;\
	out[11] = n03 * sy + n23 * cy;\
	return out;\
}
CTM_MATH_M4x4RZXY(float, __int8, sinf, cosf)
CTM_MATH_M4x4RZXY(float, __int16, sinf, cosf)
CTM_MATH_M4x4RZXY(float, __int32, sinf, cosf)
CTM_MATH_M4x4RZXY(float, __int64, sinf, cosf)
CTM_MATH_M4x4RZXY(float, __int128, sinf, cosf)
CTM_MATH_M4x4RZXY(float, float, sinf, cos)
CTM_MATH_M4x4RZXY(double, __int8, sin, cos)
CTM_MATH_M4x4RZXY(double, __int16, sin, cos)
CTM_MATH_M4x4RZXY(double, __int32, sin, cos)
CTM_MATH_M4x4RZXY(double, __int64, sin, cos)
CTM_MATH_M4x4RZXY(double, __int128, sin, cos)
CTM_MATH_M4x4RZXY(double, float, sin, cos)
CTM_MATH_M4x4RZXY(double, double, sin, cos)
CTM_MATH_M4x4RZXY(__float128, __int8, sinq, cosq)
CTM_MATH_M4x4RZXY(__float128, __int16, sinq, cosq)
CTM_MATH_M4x4RZXY(__float128, __int32, sinq, cosq)
CTM_MATH_M4x4RZXY(__float128, __int64, sinq, cosq)
CTM_MATH_M4x4RZXY(__float128, __int128, sinq, cosq)
CTM_MATH_M4x4RZXY(__float128, float, sinq, cosq)
CTM_MATH_M4x4RZXY(__float128, double, sinq, cosq)
CTM_MATH_M4x4RZXY(__float128, __float128, sinq, cosq)
#endif

#ifndef CTM_MATH_M4x4RZYX
#define CTM_MATH_M4x4RZYX(ma0, ma1, ma2, ma3)\
ma0* matrix4x4math::rotateZYX(ma0* out, ma1* matrix, ma0* angles)\
{\
	ma0 anglex = angles[0], angley = angles[1], anglez = angles[2],\
	sx = ma2(anglex), cx = ma3(anglex),\
	sy = ma2(angley), cy = ma3(angley),\
	sz = ma2(anglez), cz = ma3(anglez);\
	ma1 m00 = matrix[0], m01 = matrix[1], m02 = matrix[2], m03 = matrix[3],\
	m10 = matrix[4], m11 = matrix[5], m12 = matrix[6], m13 = matrix[7],\
	m20 = matrix[8], m21 = matrix[9], m22 = matrix[10], m23 = matrix[11];\
	ma0 n00 = m00 * cz + m10 * sz, n01 = m01 * cz + m11 * sz, n02 = m02 * cz + m12 * sz, n03 = m03 * cz + m13 * sz,\
	n10 = m10 * cz - m00 * sz, n11 = m11 * cz - m01 * sz, n12 = m12 * cz - m02 * sz, n13 = m13 * cz - m03 * sz,\
	n20 = n00 * sy + m20 * cy, n21 = n01 * sy + m21 * cy, n22 = n02 * sy + m22 * cy, n23 = n03 * sy + m23 * cy;\
	out[12] = matrix[12];\
	out[13] = matrix[13];\
	out[14] = matrix[14];\
	out[15] = matrix[15];\
	out[0] = n00 * cy - m20 * sy;\
	out[1] = n01 * cy - m21 * sy;\
	out[2] = n02 * cy - m22 * sy;\
	out[3] = n03 * cy - m23 * sy;\
	out[4] = n10 * cx + n20 * sx;\
	out[5] = n11 * cx + n21 * sx;\
	out[6] = n12 * cx + n22 * sx;\
	out[7] = n13 * cx + n23 * sx;\
	out[8] = n20 * cx - n10 * sx;\
	out[9] = n21 * cx - n11 * sx;\
	out[10] = n22 * cx - n12 * sx;\
	out[11] = n23 * cx - n13 * sx;\
	return out;\
}
CTM_MATH_M4x4RZYX(float, __int8, sinf, cosf)
CTM_MATH_M4x4RZYX(float, __int16, sinf, cosf)
CTM_MATH_M4x4RZYX(float, __int32, sinf, cosf)
CTM_MATH_M4x4RZYX(float, __int64, sinf, cosf)
CTM_MATH_M4x4RZYX(float, __int128, sinf, cosf)
CTM_MATH_M4x4RZYX(float, float, sinf, cos)
CTM_MATH_M4x4RZYX(double, __int8, sin, cos)
CTM_MATH_M4x4RZYX(double, __int16, sin, cos)
CTM_MATH_M4x4RZYX(double, __int32, sin, cos)
CTM_MATH_M4x4RZYX(double, __int64, sin, cos)
CTM_MATH_M4x4RZYX(double, __int128, sin, cos)
CTM_MATH_M4x4RZYX(double, float, sin, cos)
CTM_MATH_M4x4RZYX(double, double, sin, cos)
CTM_MATH_M4x4RZYX(__float128, __int8, sinq, cosq)
CTM_MATH_M4x4RZYX(__float128, __int16, sinq, cosq)
CTM_MATH_M4x4RZYX(__float128, __int32, sinq, cosq)
CTM_MATH_M4x4RZYX(__float128, __int64, sinq, cosq)
CTM_MATH_M4x4RZYX(__float128, __int128, sinq, cosq)
CTM_MATH_M4x4RZYX(__float128, float, sinq, cosq)
CTM_MATH_M4x4RZYX(__float128, double, sinq, cosq)
CTM_MATH_M4x4RZYX(__float128, __float128, sinq, cosq)
#endif

#ifndef CTM_MATH_M4x4FSTM
#define CTM_MATH_M4x4FSTM(ma0)\
ma0* matrix4x4math::frustrum(ma0* out, ma0 left, ma0 right, ma0 bottom, ma0 top, ma0 near, ma0 far)\
{\
	ma0 irml = 1 / (right - left),\
	itmb = 1 / (top - bottom),\
	ifmn = 1 / (far - near);\
	out[1] = out[2] = out[3] = out[4] = out[6] = out[7] = out[8] = out[9] = out[11] = 0;\
	out[0] = 2 * irml;\
	out[5] = 2 * itmb;\
	out[10] = 2 * ifmn;\
	out[12] = (right + left) * -irml;\
	out[13] = (top + bottom) * -itmb;\
	out[14] = (far + near) * -ifmn;\
	out[15] = 1;\
	return out;\
}
CTM_MATH_M4x4FSTM(float)
CTM_MATH_M4x4FSTM(double)
CTM_MATH_M4x4FSTM(__float128)
#endif

#ifndef CTM_MATH_M4x4ORTO
#define CTM_MATH_M4x4ORTO(ma0)\
ma0* matrix4x4math::ortho(ma0* out, ma0 horizontal, ma0 vertical, ma0 near, ma0 far)\
{\
	ma0 ifmn = 1 / (far - near);\
	out[1] = out[2] = out[3] = out[4] = out[6] = out[7] = out[8] = out[9] = out[11] = out[12] = out[13] = 0;\
	out[0] = 2 / horizontal;\
	out[5] = 2 / vertical;\
	out[10] = 2 * ifmn;\
	out[14] = (far + near) * -ifmn;\
	out[15] = 1;\
	return out;\
}
CTM_MATH_M4x4ORTO(float)
CTM_MATH_M4x4ORTO(double)
CTM_MATH_M4x4ORTO(__float128)
#endif

#ifndef CTM_MATH_M4x4PERH
#define CTM_MATH_M4x4PERH(ma0, ma1)\
ma0* matrix4x4math::perspectiveHorizontal(ma0* out, ma0 aspect, ma0 fovx, ma0 near, ma0 far)\
{\
	ma0 ittfot = 1 / ma1(fovx / 2),\
	inmf = 1 / (near - far);\
	out[1] = out[2] = out[3] = out[4] = out[6] = out[7] = out[8] = out[9] = out[12] = out[13] = out[15] = 0;\
	out[0] = ittfot;\
	out[5] = ittfot * aspect;\
	out[10] = (near + far) * inmf;\
	out[11] = -1;\
	out[14] = 2 * near * far * inmf;\
	return out;\
}
CTM_MATH_M4x4PERH(float, tanf)
CTM_MATH_M4x4PERH(double, tanf)
CTM_MATH_M4x4PERH(__float128, tanq)
#endif

#ifndef CTM_MATH_M4x4PERV
#define CTM_MATH_M4x4PERV(ma0, ma1)\
ma0* matrix4x4math::perspectiveVertical(ma0* out, ma0 aspect, ma0 fovy, ma0 near, ma0 far)\
{\
	ma0 ittfot = 1 / ma1(fovy / 2),\
	inmf = 1 / (near - far);\
	out[1] = out[2] = out[3] = out[4] = out[6] = out[7] = out[8] = out[9] = out[12] = out[13] = out[15] = 0;\
	out[0] = ittfot / aspect;\
	out[5] = ittfot;\
	out[10] = (near + far) * inmf; out[11] = -1;\
	out[14] = 2 * near * far * inmf;\
	return out;\
}
CTM_MATH_M4x4PERV(float, tanf)
CTM_MATH_M4x4PERV(double, tanf)
CTM_MATH_M4x4PERV(__float128, tanq)
#endif
