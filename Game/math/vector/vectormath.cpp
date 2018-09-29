#include "../math.h"

vectormath::vectormath(const int& dimensions) { this->dimensions = dimensions; }
vectormath::~vectormath() { }

#define CTM_MATH_VDIMS const int& dimensions = this->dimensions

#define CTM_MATH_VNEWV(ma0) ma0* vectormath::newVector(const ma0&) { return (ma0*)calloc(this->dimensions, sizeof(ma0)); }
CTM_MATH_VNEWV(__int8)
CTM_MATH_VNEWV(__int16)
CTM_MATH_VNEWV(__int32)
CTM_MATH_VNEWV(__int64)
CTM_MATH_VNEWV(__int128)
CTM_MATH_VNEWV(float)
CTM_MATH_VNEWV(double)
CTM_MATH_VNEWV(__float128)

#define CTM_MATH_VADDT(ma0) ma0* vectormath::add(ma0* out, ma0* vector, ma0* vector1) { CTM_MATH_VDIMS; for(int i = 0; i < dimensions; i++) out[i] = vector[i] + vector1[i]; return out; }
CTM_MATH_VADDT(__int8)
CTM_MATH_VADDT(__int16)
CTM_MATH_VADDT(__int32)
CTM_MATH_VADDT(__int64)
CTM_MATH_VADDT(__int128)
CTM_MATH_VADDT(float)
CTM_MATH_VADDT(double)
CTM_MATH_VADDT(__float128)

#define CTM_MATH_VMULTIADDT(ma0)\
ma0* vectormath::add(ma0* out, int count, ...)\
{\
	CTM_MATH_VDIMS;\
	va_list vectors;\
	va_start(vectors, count);\
	for(int i = 0; i < dimensions; i++)\
		out[i] = 0;\
	for(int v = 0; v < count; v++)\
	{\
		ma0* vector = va_arg(vectors, ma0*);\
		for(int i = 0; i < dimensions; i++)\
			out[i] += vector[i];\
	}\
	va_end(vectors);\
	return out;\
}
CTM_MATH_VMULTIADDT(__int8)
CTM_MATH_VMULTIADDT(__int16)
CTM_MATH_VMULTIADDT(__int32)
CTM_MATH_VMULTIADDT(__int64)
CTM_MATH_VMULTIADDT(__int128)
CTM_MATH_VMULTIADDT(float)
CTM_MATH_VMULTIADDT(double)
CTM_MATH_VMULTIADDT(__float128)

#define CTM_MATH_VSUBT(ma0) ma0* vectormath::subtract(ma0* out, ma0* vector, ma0* vector1) { CTM_MATH_VDIMS; for(int i = 0; i < dimensions; i++) out[i] = vector[i] - vector1[i]; return out; }
CTM_MATH_VSUBT(__int8)
CTM_MATH_VSUBT(__int16)
CTM_MATH_VSUBT(__int32)
CTM_MATH_VSUBT(__int64)
CTM_MATH_VSUBT(__int128)
CTM_MATH_VSUBT(float)
CTM_MATH_VSUBT(double)
CTM_MATH_VSUBT(__float128)

#define CTM_MATH_VMULTISUBT(ma0)\
ma0* vectormath::subtract(ma0* out, int count, ...)\
{\
	CTM_MATH_VDIMS;\
	va_list vectors;\
	va_start(vectors, count);\
	for(int i = 0; i < dimensions; i++)\
		out[i] = 0;\
	for(int v = 0; v < count; v++)\
	{\
		ma0* vector = va_arg(vectors, ma0*);\
		for(int i = 0; i < dimensions; i++)\
			out[i] -= vector[i];\
	}\
	va_end(vectors);\
	return out;\
}
CTM_MATH_VMULTISUBT(__int8)
CTM_MATH_VMULTISUBT(__int16)
CTM_MATH_VMULTISUBT(__int32)
CTM_MATH_VMULTISUBT(__int64)
CTM_MATH_VMULTISUBT(__int128)
CTM_MATH_VMULTISUBT(float)
CTM_MATH_VMULTISUBT(double)
CTM_MATH_VMULTISUBT(__float128)

#define CTM_MATH_VSCLR(ma0, ma1) ma0* vectormath::scalar(ma0* out, ma1* vector, ma0 scalar) { CTM_MATH_VDIMS; for(int i = 0; i < dimensions; i++) out[i] = scalar * vector[i]; return out; }
CTM_MATH_VSCLR(__int8, __int8)
CTM_MATH_VSCLR(__int16, __int8)
CTM_MATH_VSCLR(__int16, __int16)
CTM_MATH_VSCLR(__int32, __int16)
CTM_MATH_VSCLR(__int32, __int32)
CTM_MATH_VSCLR(__int64, __int32)
CTM_MATH_VSCLR(__int64, __int64)
CTM_MATH_VSCLR(__int128, __int64)
CTM_MATH_VSCLR(__int128, __int128)
CTM_MATH_VSCLR(float, float)
CTM_MATH_VSCLR(double, float)
CTM_MATH_VSCLR(double, double)
CTM_MATH_VSCLR(__float128, double)
CTM_MATH_VSCLR(__float128, __float128)

#define CTM_MATH_VMLTP(ma0, ma1) ma0* vectormath::multiply(ma0* out, ma1* vector, ma1* vector1) { CTM_MATH_VDIMS; for(int i = 0; i < dimensions; i++) out[i] = vector[i] * vector1[i]; return out; }
CTM_MATH_VMLTP(__int8, __int8)
CTM_MATH_VMLTP(__int16, __int8)
CTM_MATH_VMLTP(__int16, __int16)
CTM_MATH_VMLTP(__int32, __int16)
CTM_MATH_VMLTP(__int32, __int32)
CTM_MATH_VMLTP(__int64, __int32)
CTM_MATH_VMLTP(__int64, __int64)
CTM_MATH_VMLTP(__int128, __int64)
CTM_MATH_VMLTP(__int128, __int128)
CTM_MATH_VMLTP(float, float)
CTM_MATH_VMLTP(double, float)
CTM_MATH_VMLTP(double, double)
CTM_MATH_VMLTP(__float128, double)
CTM_MATH_VMLTP(__float128, __float128)

#define CTM_MATH_VMGNT(ma0, ma1, ma2) ma0 vectormath::magnitude(const ma0&, ma1* vector) { return sqrtf((ma0)this->squareMagnitude((ma2)0, vector)); }
CTM_MATH_VMGNT(float, __int8, __int32)
CTM_MATH_VMGNT(float, __int16, __int64)
CTM_MATH_VMGNT(float, __int32, __int128)
CTM_MATH_VMGNT(float, __int64, __int128)
CTM_MATH_VMGNT(float, __int128, __int128)
CTM_MATH_VMGNT(float, float, __float128)
CTM_MATH_VMGNT(double, __int8, __int32)
CTM_MATH_VMGNT(double, __int16, __int64)
CTM_MATH_VMGNT(double, __int32, __int128)
CTM_MATH_VMGNT(double, __int64, __int128)
CTM_MATH_VMGNT(double, __int128, __int128)
CTM_MATH_VMGNT(double, float, __float128)
CTM_MATH_VMGNT(double, double, __float128)
CTM_MATH_VMGNT(__float128, __int8, __int32)
CTM_MATH_VMGNT(__float128, __int16, __int64)
CTM_MATH_VMGNT(__float128, __int32, __int128)
CTM_MATH_VMGNT(__float128, __int64, __int128)
CTM_MATH_VMGNT(__float128, __int128, __int128)
CTM_MATH_VMGNT(__float128, float, __float128)
CTM_MATH_VMGNT(__float128, double, __float128)
CTM_MATH_VMGNT(__float128, __float128, __float128)

#define CTM_MATH_VSMGT(ma0, ma1) ma0 vectormath::squareMagnitude(const ma0&, ma1* vector) { CTM_MATH_VDIMS; ma0 sm = 0; for(int i = 0; i < dimensions; i++) sm += vector[i] * vector[i]; return sm; }
CTM_MATH_VSMGT(__int8, __int8)
CTM_MATH_VSMGT(__int16, __int8)
CTM_MATH_VSMGT(__int16, __int16)
CTM_MATH_VSMGT(__int32, __int8)
CTM_MATH_VSMGT(__int32, __int16)
CTM_MATH_VSMGT(__int32, __int32)
CTM_MATH_VSMGT(__int64, __int16)
CTM_MATH_VSMGT(__int64, __int32)
CTM_MATH_VSMGT(__int64, __int64)
CTM_MATH_VSMGT(__int128, __int32)
CTM_MATH_VSMGT(__int128, __int64)
CTM_MATH_VSMGT(__int128, __int128)
CTM_MATH_VSMGT(float, float)
CTM_MATH_VSMGT(double, float)
CTM_MATH_VSMGT(double, double)
CTM_MATH_VSMGT(__float128, __int32)
CTM_MATH_VSMGT(__float128, __int64)
CTM_MATH_VSMGT(__float128, float)
CTM_MATH_VSMGT(__float128, double)
CTM_MATH_VSMGT(__float128, __float128)
