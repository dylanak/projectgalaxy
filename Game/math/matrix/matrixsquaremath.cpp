#include "../math.h"

matrixsquaremath::matrixsquaremath(const int& rowsandcolumns) : matrixmath(rowsandcolumns, rowsandcolumns) { }

#ifndef CTM_MATH_MSQRROCO
#define CTM_MATH_MSQRROCO const int& rowsandcolumns = this->rows
#endif

#define CTM_MATH_MSQRSMTY(ma0, ma1)\
ma0* matrixsquaremath::squareMultiply(ma0* out, ma1* matrix, ma1* matrix1)\
{\
	CTM_MATH_MSQRROCO;\
	ma0 ret[rowsandcolumns * rowsandcolumns];\
	for(int r = 0; r < rowsandcolumns; r++)\
		for(int c = 0; c < rowsandcolumns; c++)\
			for(int e = 0; e < rowsandcolumns; e++)\
				ret[r * rowsandcolumns + c] += matrix[r * rowsandcolumns + e] * matrix1[e * rowsandcolumns + c];\
	for(int r = 0, i = 0; r < rowsandcolumns; r++)\
		for(int c = 0; c < rowsandcolumns; c++, i++)\
			out[i] = ret[i];\
	return out;\
}
CTM_MATH_MSQRSMTY(__int8, __int8)
CTM_MATH_MSQRSMTY(__int16, __int8)
CTM_MATH_MSQRSMTY(__int16, __int16)
CTM_MATH_MSQRSMTY(__int32, __int16)
CTM_MATH_MSQRSMTY(__int32, __int32)
CTM_MATH_MSQRSMTY(__int64, __int32)
CTM_MATH_MSQRSMTY(__int64, __int64)
CTM_MATH_MSQRSMTY(__int128, __int64)
CTM_MATH_MSQRSMTY(__int128, __int128)
CTM_MATH_MSQRSMTY(float, float)
CTM_MATH_MSQRSMTY(double, float)
CTM_MATH_MSQRSMTY(double, double)
CTM_MATH_MSQRSMTY(__float128, double)
CTM_MATH_MSQRSMTY(__float128, __float128)

#define CTM_MATH_MSQRIDTY(ma0)\
ma0* matrixsquaremath::identity(ma0* out)\
{\
	CTM_MATH_MSQRROCO;\
	for(int i = 0, c = 0; c < rowsandcolumns; c++)\
		for(int r = 0; r < rowsandcolumns; r++, i++)\
			out[i] = c == r ? 1 : 0;\
	return out;\
}
CTM_MATH_MSQRIDTY(__int8)
CTM_MATH_MSQRIDTY(__int16)
CTM_MATH_MSQRIDTY(__int32)
CTM_MATH_MSQRIDTY(__int64)
CTM_MATH_MSQRIDTY(__int128)
CTM_MATH_MSQRIDTY(float)
CTM_MATH_MSQRIDTY(double)
CTM_MATH_MSQRIDTY(__float128)

#ifndef CTM_MATH_MSQRMULTIIDTY
#define CTM_MATH_MSQRMULTIIDTY(ma0)\
void matrixsquaremath::identity(const ma0&, int& count, ...)\
{\
	CTM_MATH_MSQRROCO;\
	va_list matrices;\
	va_start(matrices, count);\
	for(int m = 0; m < count; m++)\
	{\
		ma0* matrix = va_arg(matrices, ma0*);\
		for(int r = 0, j = 0; r < rowsandcolumns; r++)\
			for(int c = 0; c < rowsandcolumns; c++, j++)\
				matrix[j] = c == r ? 1 : 0;\
	}\
}
CTM_MATH_MSQRMULTIIDTY(__int8)
CTM_MATH_MSQRMULTIIDTY(__int16)
CTM_MATH_MSQRMULTIIDTY(__int32)
CTM_MATH_MSQRMULTIIDTY(__int64)
CTM_MATH_MSQRMULTIIDTY(__int128)
CTM_MATH_MSQRMULTIIDTY(float)
CTM_MATH_MSQRMULTIIDTY(double)
CTM_MATH_MSQRMULTIIDTY(__float128)
#endif

#ifndef CTM_MATH_MSQRDTRM
#define CTM_MATH_MSQRDTRM(ma0, ma1)\
ma0 matrixsquaremath::determinant(const ma0&, ma1* matrix)\
{\
	CTM_MATH_MSQRROCO;\
	if(rowsandcolumns == 2)\
		return (ma0)matrix[0] * matrix[3] - (ma0)matrix[1] * matrix[2];\
	int usedcolumns[rowsandcolumns];\
	bool positives[rowsandcolumns - 2];\
	ma0 dets[rowsandcolumns - 1];\
	for(int i = 0; i < rowsandcolumns; i++)\
	{\
		if(i < rowsandcolumns - 1)\
		{\
			dets[i] = 0;\
			if(i < rowsandcolumns - 2)\
				positives[i] = true;\
		}\
		usedcolumns[i] = -1;\
	}\
	int row = 0;\
	while(true)\
	{\
		if(row == rowsandcolumns - 2)\
		{\
			int firstColumn = -1, secondColumn = -1;\
			for(int i = 0; true; i++)\
			{\
				int& r;\
				if(firstColumn < 0)\
					r = firstColumn;\
				else if(secondColumn < 0)\
					r = secondColumn;\
				else\
					break;\
				bool free = true;\
				for(int j = 0; free && j < rowsandcolumns; j++)\
					free = usedcolumns[j] != i;\
				if(free)\
					r = i;\
			}\
			dets[row] += (ma0)matrix[row * rowsandcolumns + firstColumn] * matrix[(row + 1) * rowsandcolumns + secondColumn]\
			- (ma0)matrix[(row + 1) * rowsandcolumns + firstColumn] * matrix[row * rowsandcolumns + secondColumn];\
			row--;\
			continue;\
		}\
		int& column = usedcolumns[row];\
		if(row > 0)\
		{\
			bool& positive = positives[row];\
			if(column != -1)\
			{\
				dets[row] += (positive ? 1 : -1) * matrix[row * rowsandcolumns + column] * dets[row + 1];\
				dets[row + 1] = 0;\
				positive = !positive;\
			}\
			int nextColumn = -1;\
			for(int i = column + 1; i < rowsandcolumns; i++)\
			{\
				bool free = true;\
				for(int j = 0; free && j < row; j++)\
					free = usedcolumns[j] != i;\
				if(free)\
				{\
					nextColumn = i;\
					break;\
				}\
			}\
			column = nextColumn;\
			if(nextColumn == -1)\
				positive = true, row--;\
			else\
				row++;\
		}\
		else\
		{\
			if(column != -1)\
			{\
				bool& positive = positives[0];\
				dets[0] += (positive ? 1 : -1) * matrix[column] * dets[1];\
				dets[1] = 0;\
				positive = !positive;\
			}\
			if(column == rowsandcolumns - 1)\
				break;\
			else\
				column++, row++;\
		}\
	}\
	return dets[0];\
}
CTM_MATH_MSQRDTRM(__int8, __int8)
CTM_MATH_MSQRDTRM(__int16, __int8)
CTM_MATH_MSQRDTRM(__int16, __int16)
CTM_MATH_MSQRDTRM(__int32, __int16)
CTM_MATH_MSQRDTRM(__int32, __int32)
CTM_MATH_MSQRDTRM(__int64, __int32)
CTM_MATH_MSQRDTRM(__int64, __int64)
CTM_MATH_MSQRDTRM(__int128, __int64)
CTM_MATH_MSQRDTRM(__int128, __int128)
CTM_MATH_MSQRDTRM(float, float)
CTM_MATH_MSQRDTRM(double, float)
CTM_MATH_MSQRDTRM(double, double)
CTM_MATH_MSQRDTRM(__float128, double)
CTM_MATH_MSQRDTRM(__float128, __float128)
#endif

#ifndef CTM_MATH_MSQRINVS
#define CTM_MATH_MSQRINVS(ma0, ma1)\
ma0* matrixsquaremath::inverse(ma0* out, ma1* matrix)\
{\
	CTM_MATH_MSQRROCO;\
	int rs[rowsandcolumns];\
	for(int i = 0; i < rowsandcolumns; i++)\
		rs[i] = -1;\
	int a = 0;\
	while(true)\
	{\
		if(a == -1)\
			return NULL;\
		const int& r = ++rs[a];\
		if(r == rowsandcolumns)\
			rs[a--] = -1;\
		else\
		{\
			bool c = matrix[r * rowsandcolumns + a] == 0;\
			for(int i = 0; !c && i < a; i++)\
				c = rs[i] == r;\
			if(!c)\
			{\
				if(a == rowsandcolumns - 1)\
					break;\
				else\
					a++;\
			}\
		}\
	}\
	ma0* ss[rowsandcolumns * rowsandcolumns];\
	for(int r = 0, index = 0; r < rowsandcolumns; r++)\
		for(int c = 0; c < rowsandcolumns; c++, index++)\
		{\
			ma0* s = ss[index] = new ma0[rowsandcolumns + 1];\
			for(int e = 0; e < rowsandcolumns; e++)\
				s[e] = matrix[rs[r] * rowsandcolumns + e];\
			if(r == c)\
				s[rowsandcolumns] = -1;\
		}\
	for(int c = 0; c < rowsandcolumns; c++)\
		for(int r = 0; r < rowsandcolumns; r++)\
		{\
			ma0* s = ss[r * rowsandcolumns + c];\
			for(int i = 0; i < r; i++)\
				for(int j = i + 1; j <= rowsandcolumns; j++)\
					s[j] -= s[i] * ss[i * rowsandcolumns + c][j];\
			for(int i = r + 1; i <= rowsandcolumns; i++)\
				s[i] /= s[r];\
		}\
	for(int c = 0; c < rowsandcolumns; c++)\
		for(int r = rowsandcolumns - 1; r >= 0; r--)\
		{\
			ma0* s = ss[r * rowsandcolumns + c];\
			ma0 e = 0;\
			for(int i = r + 1; i <= rowsandcolumns; i++)\
				e -= s[i];\
			for(int i = 0; i < r; i++)\
				ss[i * rowsandcolumns + c][r] *= e;\
			out[r * rowsandcolumns + rs[c]] = e;\
		}\
	for(ma0* s : ss)\
		delete s;\
	return out;\
}
CTM_MATH_MSQRINVS(float, __int8)
CTM_MATH_MSQRINVS(float, __int16)
CTM_MATH_MSQRINVS(float, __int32)
CTM_MATH_MSQRINVS(float, __int64)
CTM_MATH_MSQRINVS(float, __int128)
CTM_MATH_MSQRINVS(float, float)
CTM_MATH_MSQRINVS(double, __int8)
CTM_MATH_MSQRINVS(double, __int16)
CTM_MATH_MSQRINVS(double, __int32)
CTM_MATH_MSQRINVS(double, __int64)
CTM_MATH_MSQRINVS(double, __int128)
CTM_MATH_MSQRINVS(double, float)
CTM_MATH_MSQRINVS(double, double)
CTM_MATH_MSQRINVS(__float128, __int8)
CTM_MATH_MSQRINVS(__float128, __int16)
CTM_MATH_MSQRINVS(__float128, __int32)
CTM_MATH_MSQRINVS(__float128, __int64)
CTM_MATH_MSQRINVS(__float128, __int128)
CTM_MATH_MSQRINVS(__float128, float)
CTM_MATH_MSQRINVS(__float128, double)
CTM_MATH_MSQRINVS(__float128, __float128)
#endif

#ifndef CTM_MATH_MSQRTRSL
#define CTM_MATH_MSQRTRSL(ma0, ma1, ma2)\
ma0* matrixsquaremath::translate(ma0* out, ma1* matrix, ma2* vector)\
{\
	CTM_MATH_MSQRROCO;\
	for(int c = 0, b = rowsandcolumns * (rowsandcolumns - 1); c < rowsandcolumns; c++, b++)\
	{\
		ma0 e = matrix[b];\
		for(int r = 0, i = c; r < rowsandcolumns - 1; r++, i += rowsandcolumns)\
			e += (ma0)vector[r] * (out[i] = matrix[i]);\
		out[b] = e;\
	}\
	return out;\
}
#ifndef CTM_MATH_MSQRTRSL_0
#define CTM_MATH_MSQRTRSL_0(ma0, ma1) CTM_MATH_MSQRTRSL(ma0, ma1, ma1)
#endif
#ifndef CTM_MATH_MSQRTRSL_1
#define CTM_MATH_MSQRTRSL_1(ma0, ma1) CTM_MATH_MSQRTRSL(ma0, ma1, ma0)
#endif
CTM_MATH_MSQRTRSL_0(__int8, __int8)
CTM_MATH_MSQRTRSL_0(__int16, __int8)
CTM_MATH_MSQRTRSL_0(__int16, __int16)
CTM_MATH_MSQRTRSL_0(__int32, __int16)
CTM_MATH_MSQRTRSL_0(__int32, __int32)
CTM_MATH_MSQRTRSL_0(__int64, __int32)
CTM_MATH_MSQRTRSL_0(__int64, __int64)
CTM_MATH_MSQRTRSL_0(__int128, __int64)
CTM_MATH_MSQRTRSL_0(__int128, __int128)
CTM_MATH_MSQRTRSL_1(float, __int8)
CTM_MATH_MSQRTRSL_1(float, __int16)
CTM_MATH_MSQRTRSL_1(float, __int32)
CTM_MATH_MSQRTRSL_1(float, __int64)
CTM_MATH_MSQRTRSL_1(float, __int128)
CTM_MATH_MSQRTRSL_1(float, float)
CTM_MATH_MSQRTRSL_0(double, float)
CTM_MATH_MSQRTRSL_1(double, __int8)
CTM_MATH_MSQRTRSL_1(double, __int16)
CTM_MATH_MSQRTRSL_1(double, __int32)
CTM_MATH_MSQRTRSL_1(double, __int64)
CTM_MATH_MSQRTRSL_1(double, __int128)
CTM_MATH_MSQRTRSL_1(double, float)
CTM_MATH_MSQRTRSL_1(double, double)
CTM_MATH_MSQRTRSL_0(__float128, double)
CTM_MATH_MSQRTRSL_1(__float128, __int8)
CTM_MATH_MSQRTRSL_1(__float128, __int16)
CTM_MATH_MSQRTRSL_1(__float128, __int32)
CTM_MATH_MSQRTRSL_1(__float128, __int64)
CTM_MATH_MSQRTRSL_1(__float128, __int128)
CTM_MATH_MSQRTRSL_1(__float128, float)
CTM_MATH_MSQRTRSL_1(__float128, double)
CTM_MATH_MSQRTRSL_1(__float128, __float128)
#endif
