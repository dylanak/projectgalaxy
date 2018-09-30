#include "../math.h"

matrixmath::matrixmath(const int& rows, const int& columns) : rows(rows), columns(columns) { }
matrixmath::~matrixmath() {  }

#ifndef CTM_MATH_MROCO
#define CTM_MATH_MROCO const int& rows = this-> rows, columns = this-> columns
#endif

#ifndef CTM_MATH_MNEWM
#define CTM_MATH_MNEWM(ma0)\
ma0* matrixmath::newMatrix(const ma0&)\
{\
	return (ma0*)calloc(this->rows * this->columns, sizeof(ma0));\
}
CTM_MATH_MNEWM(__int8)
CTM_MATH_MNEWM(__int16)
CTM_MATH_MNEWM(__int32)
CTM_MATH_MNEWM(__int64)
CTM_MATH_MNEWM(__int128)
CTM_MATH_MNEWM(float)
CTM_MATH_MNEWM(double)
CTM_MATH_MNEWM(__float128)
#endif

#ifndef CTM_MATH_MSCLR
#define CTM_MATH_MSCLR(ma0, ma1)\
ma0* matrixmath::scalar(ma0* out, ma1* matrix, ma0 scalar)\
{\
	CTM_MATH_MROCO;\
	for(int i = 0, row = 0; row < rows; row++)\
		for(int column = 0; column < columns; column++, i++)\
			out[i] = scalar * matrix[i];\
	return out;\
}
CTM_MATH_MSCLR(__int8, __int8)
CTM_MATH_MSCLR(__int16, __int8)
CTM_MATH_MSCLR(__int16, __int16)
CTM_MATH_MSCLR(__int32, __int16)
CTM_MATH_MSCLR(__int32, __int32)
CTM_MATH_MSCLR(__int64, __int32)
CTM_MATH_MSCLR(__int64, __int64)
CTM_MATH_MSCLR(__int128, __int64)
CTM_MATH_MSCLR(__int128, __int128)
CTM_MATH_MSCLR(float, float)
CTM_MATH_MSCLR(double, float)
CTM_MATH_MSCLR(double, double)
CTM_MATH_MSCLR(__float128, double)
CTM_MATH_MSCLR(__float128, __float128)
#endif

#ifndef CTM_MATH_MMLTP
#define CTM_MATH_MMLTP(ma0, ma1)\
ma0* matrixmath::multiply(ma0* out, ma1* matrix, ma1* matrix1, int size)\
{\
	CTM_MATH_MROCO;\
	int othercolumns = size / columns;\
	ma0 ret[rows * othercolumns];\
	for(int i = 0, r = 0; r < rows; r++)\
		for(int c = 0; c < othercolumns; c++, i++)\
			for(int e = 0; e < columns; e++)\
				ret[i] += (ma0)matrix[r * columns + e] * matrix1[e * othercolumns + c];\
	for(int i = 0, r = 0; r < rows; r++)\
		for(int c = 0; c < othercolumns; c++, i++)\
			out[i] = ret[i];\
	return out;\
}
CTM_MATH_MMLTP(__int8, __int8)
CTM_MATH_MMLTP(__int16, __int8)
CTM_MATH_MMLTP(__int16, __int16)
CTM_MATH_MMLTP(__int32, __int16)
CTM_MATH_MMLTP(__int32, __int32)
CTM_MATH_MMLTP(__int64, __int32)
CTM_MATH_MMLTP(__int64, __int64)
CTM_MATH_MMLTP(__int128, __int64)
CTM_MATH_MMLTP(__int128, __int128)
CTM_MATH_MMLTP(float, float)
CTM_MATH_MMLTP(double, float)
CTM_MATH_MMLTP(double, double)
CTM_MATH_MMLTP(__float128, double)
CTM_MATH_MMLTP(__float128, __float128)
#endif
