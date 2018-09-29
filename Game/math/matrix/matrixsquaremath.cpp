#include "../math.h"

matrixsquaremath::matrixsquaremath(const int& rowsandcolumns) : matrixmath(rowsandcolumns, rowsandcolumns) { }

#define CTM_MATH_MROCO const int& rowsandcolumns = this->rows

#define CTM_MATH_MSMTY(ma0, ma1)\
ma0* matrixsquaremath::squareMultiply(ma0* out, ma1* matrix, ma1* matrix1)\
{\
	CTM_MATH_MROCO;\
	ma0* ret = (ma0*)calloc(rowsandcolumns * rowsandcolumns, sizeof(ma0));\
	for(int r = 0; r < rowsandcolumns; r++)\
		for(int c = 0; c < rowsandcolumns; c++)\
			for(int e = 0; e < rowsandcolumns; e++)\
				ret[r * rowsandcolumns + c] += matrix[r * rowsandcolumns + e] * matrix1[e * rowsandcolumns + c];\
	for(int r = 0, i = 0; r < rowsandcolumns; r++)\
		for(int c = 0; c < rowsandcolumns; c++, i++)\
			out[i] = ret[i];\
	delete ret;\
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
ma0* matrixsquaremath::identity(ma0* out)\
{\
	CTM_MATH_MROCO;\
	for(int i = 0, c = 0; c < rowsandcolumns; c++)\
		for(int r = 0; r < rowsandcolumns; r++, i++)\
			out[i] = c == r ? 1 : 0;\
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

#define CTM_MATH_MMULTIIDTY(ma0)\
void matrixsquaremath::identity(const ma0&, int& count, ...)\
{\
	CTM_MATH_MROCO;\
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
CTM_MATH_MMULTIIDTY(__int8)
CTM_MATH_MMULTIIDTY(__int16)
CTM_MATH_MMULTIIDTY(__int32)
CTM_MATH_MMULTIIDTY(__int64)
CTM_MATH_MMULTIIDTY(__int128)
CTM_MATH_MMULTIIDTY(float)
CTM_MATH_MMULTIIDTY(double)
CTM_MATH_MMULTIIDTY(__float128)

#define CTM_MATH_MDTRM(ma0, ma1)\
ma0 matrixsquaremath::determinant(const ma0&, ma1* matrix)\
{\
	CTM_MATH_MROCO;\
	if(rowsandcolumns == 2)\
		return matrix[0] * matrix[3] - matrix[1] * matrix[2];\
	int usedcolumns[rowsandcolumns];\
	bool positives[rowsandcolumns - 2];\
	ma0 dets[rowsandcolumns - 1];\
	for(__int32 i = 0; i < rowsandcolumns; i++)\
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
			int i = 0, firstColumn = -1, secondColumn = -1;\
			while(true)\
			{\
				int* r = firstColumn < 0 ? &firstColumn : secondColumn < 0 ? &secondColumn : NULL;\
				if(r == NULL)\
					break;\
				bool free = true;\
				for(int j = 0; free && j < rowsandcolumns; j++)\
					free = usedcolumns[j] != i;\
				if(free)\
					*r = i; i++;\
			}\
			dets[row] += matrix[row * rowsandcolumns + firstColumn] * matrix[(row + 1) * rowsandcolumns + secondColumn]\
			- matrix[(row + 1) * rowsandcolumns + firstColumn] * matrix[row * rowsandcolumns + secondColumn];\
			row--;\
			continue;\
		}\
		int* column = &usedcolumns[row];\
		if(row > 0)\
		{\
			bool* positive = &positives[row];\
			if(*column != -1)\
			{\
				dets[row] += (*positive ? 1 : -1) * matrix[row * rowsandcolumns + *column] * dets[row + 1];\
				dets[row + 1] = 0;\
				*positive = !(*positive); }\
				int nextColumn = -1;\
				for(int i = *column + 1; i < rowsandcolumns; i++)\
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
				*column = nextColumn;\
				if(nextColumn == -1)\
				{\
					*positive = true;\
					row--;\
				}\
				else\
					row++;\
		}\
		else\
		{\
			if(*column != -1)\
			{\
				bool* positive = &positives[0];\
				dets[0] += (*positive ? 1 : -1) * matrix[*column] * dets[1];\
				dets[1] = 0;\
				*positive = !(*positive);\
			}\
			if(*column == rowsandcolumns - 1)\
				break;\
			else\
			{\
				(*column)++; row++;\
			}\
		}\
	}\
	return dets[0];\
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

#define CTM_MATH_MINVS(ma0, ma1)\
ma0* matrixsquaremath::inverse(ma0* out, ma1* matrix)\
{\
	CTM_MATH_MROCO;\
	int rs[rowsandcolumns];\
	for(int i = 0; i < rowsandcolumns; i++)\
		rs[i] = -1; int a = 0;\
	while(true)\
	{\
		if(a == -1)\
			return NULL;\
		int r = ++rs[a];\
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
	ma1* ref = matrix + rs[0] * rowsandcolumns;\
	for(int r = 0, index = 0; r < rowsandcolumns; r++, ref = matrix + rs[r] * rowsandcolumns)\
	for(int c = 0; c < rowsandcolumns; c++, index++)\
	{\
		ma0* s = ss[index] = (ma0*)calloc(rowsandcolumns + 1, sizeof(ma0));\
		for(int e = 0; e < rowsandcolumns; e++)\
		s[e] = ref[e]; if(r == c) s[rowsandcolumns] = -1;\
	}\
	for(int c = 0; c < rowsandcolumns; c++)\
		for(int r = 0; r < rowsandcolumns; r++)\
		{\
			ma0* s = ss[r * rowsandcolumns + c];\
			for(int i = 0; i < r; i++)\
				for(int j = i + 1; j <= rowsandcolumns; j++)\
					s[j] -= s[i] * ss[i * rowsandcolumns + c][j];\
				for(int i = r + 1; i <= rowsandcolumns; i++) s[i] /= s[r];\
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
CTM_MATH_MINVS(float, __int8)
CTM_MATH_MINVS(float, __int16)
CTM_MATH_MINVS(float, __int32)
CTM_MATH_MINVS(float, __int64)
CTM_MATH_MINVS(float, __int128)
CTM_MATH_MINVS(float, float)
CTM_MATH_MINVS(double, __int8)
CTM_MATH_MINVS(double, __int16)
CTM_MATH_MINVS(double, __int32)
CTM_MATH_MINVS(double, __int64)
CTM_MATH_MINVS(double, __int128)
CTM_MATH_MINVS(double, float)
CTM_MATH_MINVS(double, double)
CTM_MATH_MINVS(__float128, __int8)
CTM_MATH_MINVS(__float128, __int16)
CTM_MATH_MINVS(__float128, __int32)
CTM_MATH_MINVS(__float128, __int64)
CTM_MATH_MINVS(__float128, __int128)
CTM_MATH_MINVS(__float128, float)
CTM_MATH_MINVS(__float128, double)
CTM_MATH_MINVS(__float128, __float128)

#define CTM_MATH_MTRSL(ma0, ma1, ma2)\
ma0* matrixsquaremath::translate(ma0* out, ma1* matrix, ma2* vector)\
{\
	CTM_MATH_MROCO;\
	for(int c = 0, b = rowsandcolumns * (rowsandcolumns - 1); c < rowsandcolumns; c++, b++)\
	{\
		ma1 e = matrix[b];\
		for(int r = 0, i = c; r < rowsandcolumns - 1; r++, i += rowsandcolumns)\
			e += (out[i] = matrix[i]) * vector[r];\
		out[b] = e;\
	}\
	return out;\
}
#define CTM_MATH_MTRSL_0(ma0, ma1) CTM_MATH_MTRSL(ma0, ma1, ma1)
#define CTM_MATH_MTRSL_1(ma0, ma1) CTM_MATH_MTRSL(ma0, ma1, ma0)
CTM_MATH_MTRSL_0(__int8, __int8)
CTM_MATH_MTRSL_0(__int16, __int8)
CTM_MATH_MTRSL_0(__int16, __int16)
CTM_MATH_MTRSL_0(__int32, __int16)
CTM_MATH_MTRSL_0(__int32, __int32)
CTM_MATH_MTRSL_0(__int64, __int32)
CTM_MATH_MTRSL_0(__int64, __int64)
CTM_MATH_MTRSL_0(__int128, __int64)
CTM_MATH_MTRSL_0(__int128, __int128)
CTM_MATH_MTRSL_1(float, __int8)
CTM_MATH_MTRSL_1(float, __int16)
CTM_MATH_MTRSL_1(float, __int32)
CTM_MATH_MTRSL_1(float, __int64)
CTM_MATH_MTRSL_1(float, __int128)
CTM_MATH_MTRSL_1(float, float)
CTM_MATH_MTRSL_0(double, float)
CTM_MATH_MTRSL_1(double, __int8)
CTM_MATH_MTRSL_1(double, __int16)
CTM_MATH_MTRSL_1(double, __int32)
CTM_MATH_MTRSL_1(double, __int64)
CTM_MATH_MTRSL_1(double, __int128)
CTM_MATH_MTRSL_1(double, float)
CTM_MATH_MTRSL_1(double, double)
CTM_MATH_MTRSL_0(__float128, double)
CTM_MATH_MTRSL_1(__float128, __int8)
CTM_MATH_MTRSL_1(__float128, __int16)
CTM_MATH_MTRSL_1(__float128, __int32)
CTM_MATH_MTRSL_1(__float128, __int64)
CTM_MATH_MTRSL_1(__float128, __int128)
CTM_MATH_MTRSL_1(__float128, float)
CTM_MATH_MTRSL_1(__float128, double)
CTM_MATH_MTRSL_1(__float128, __float128)
