#include "../math.h"

vectormath::vectormath(const int dimensions) { this->dimensions = dimensions; }
vectormath::~vectormath() { }

char* vectormath::newVectorI8() { return (char*)calloc(this->dimensions, sizeof(char)); }
short* vectormath::newVectorI16() { return (short*)calloc(this->dimensions, sizeof(short)); }
int* vectormath::newVectorI32() { return (int*)calloc(this->dimensions, sizeof(int)); }
long long* vectormath::newVectorI64() { return (long long*)calloc(this->dimensions, sizeof(long long)); }
float* vectormath::newVectorF32() { return (float*)calloc(this->dimensions, sizeof(float)); }
double* vectormath::newVectorF64() { return (double*)calloc(this->dimensions, sizeof(double)); }
__float128* vectormath::newVectorF128() { return (__float128*)calloc(this->dimensions, sizeof(__float128)); }

char* vectormath::add(char* out, char* vector, char* vector1) { int dimensions = this->dimensions; for(int i = 0; i < dimensions; i++) out[i] = vector[i] + vector1[i];; return out; }
short* vectormath::add(short* out, short* vector, short* vector1) { int dimensions = this->dimensions; for(int i = 0; i < dimensions; i++) out[i] = vector[i] + vector1[i];; return out; }
int* vectormath::add(int* out, int* vector, int* vector1) { int dimensions = this->dimensions; for(int i = 0; i < dimensions; i++) out[i] = vector[i] + vector1[i];; return out; }
long long* vectormath::add(long long* out, long long* vector, long long* vector1) { int dimensions = this->dimensions; for(int i = 0; i < dimensions; i++) out[i] = vector[i] + vector1[i];; return out; }
float* vectormath::add(float* out, float* vector, float* vector1) { int dimensions = this->dimensions; for(int i = 0; i < dimensions; i++) out[i] = vector[i] + vector1[i];; return out; }
double* vectormath::add(double* out, double* vector, double* vector1) { int dimensions = this->dimensions; for(int i = 0; i < dimensions; i++) out[i] = vector[i] + vector1[i];; return out; }
__float128* vectormath::add(__float128* out, __float128* vector, __float128* vector1) { int dimensions = this->dimensions; for(int i = 0; i < dimensions; i++) out[i] = vector[i] + vector1[i];; return out; }

char* vectormath::add(char* out, bool condensed, int count, ...) { int dimensions = this->dimensions; va_list vectors; va_start(vectors, condensed ? 1 : count); char** vs = condensed ? va_arg(vectors, char**) : NULL; for(int v = 0; v < count; v++) { char* vector = condensed ? vs[v] : va_arg(vectors, char*); for(int i = 0; i < dimensions; i++) out[i] += vector[i]; } va_end(vectors); return out; }
short* vectormath::add(short* out, bool condensed, int count, ...) { int dimensions = this->dimensions; va_list vectors; va_start(vectors, condensed ? 1 : count); short** vs = condensed ? va_arg(vectors, short**) : NULL; for(int v = 0; v < count; v++) { short* vector = condensed ? vs[v] : va_arg(vectors, short*); for(int i = 0; i < dimensions; i++) out[i] += vector[i]; } va_end(vectors); return out; }
int* vectormath::add(int* out, bool condensed, int count, ...) { int dimensions = this->dimensions; va_list vectors; va_start(vectors, condensed ? 1 : count); int** vs = condensed ? va_arg(vectors, int**) : NULL; for(int v = 0; v < count; v++) { int* vector = condensed ? vs[v] : va_arg(vectors, int*); for(int i = 0; i < dimensions; i++) out[i] += vector[i]; } va_end(vectors); return out; }
long long* vectormath::add(long long* out, bool condensed, int count, ...) { int dimensions = this->dimensions; va_list vectors; va_start(vectors, condensed ? 1 : count); long long** vs = condensed ? va_arg(vectors, long long**) : NULL; for(int v = 0; v < count; v++) { long long* vector = condensed ? vs[v] : va_arg(vectors, long long*); for(int i = 0; i < dimensions; i++) out[i] += vector[i]; } va_end(vectors); return out; }
float* vectormath::add(float* out, bool condensed, int count, ...) { int dimensions = this->dimensions; va_list vectors; va_start(vectors, condensed ? 1 : count); float** vs = condensed ? va_arg(vectors, float**) : NULL; for(int v = 0; v < count; v++) { float* vector = condensed ? vs[v] : va_arg(vectors, float*); for(int i = 0; i < dimensions; i++) out[i] += vector[i]; } va_end(vectors); return out; }
double* vectormath::add(double* out, bool condensed, int count, ...) { int dimensions = this->dimensions; va_list vectors; va_start(vectors, condensed ? 1 : count); double** vs = condensed ? va_arg(vectors, double**) : NULL; for(int v = 0; v < count; v++) { double* vector = condensed ? vs[v] : va_arg(vectors, double*); for(int i = 0; i < dimensions; i++) out[i] += vector[i]; } va_end(vectors); return out; }
__float128* vectormath::add(__float128* out, bool condensed, int count, ...) { int dimensions = this->dimensions; va_list vectors; va_start(vectors, condensed ? 1 : count); __float128** vs = condensed ? va_arg(vectors, __float128**) : NULL; for(int v = 0; v < count; v++) { __float128* vector = condensed ? vs[v] : va_arg(vectors, __float128*); for(int i = 0; i < dimensions; i++) out[i] += vector[i]; } va_end(vectors); return out; }

char* vectormath::subtract(char* out, char* vector, char* vector1) { int dimensions = this->dimensions; for(int i = 0; i < dimensions; i++) out[i] = vector[i] - vector1[i];; return out; }
short* vectormath::subtract(short* out, short* vector, short* vector1) { int dimensions = this->dimensions; for(int i = 0; i < dimensions; i++) out[i] = vector[i] - vector1[i];; return out; }
int* vectormath::subtract(int* out, int* vector, int* vector1) { int dimensions = this->dimensions; for(int i = 0; i < dimensions; i++) out[i] = vector[i] - vector1[i];; return out; }
long long* vectormath::subtract(long long* out, long long* vector, long long* vector1) { int dimensions = this->dimensions; for(int i = 0; i < dimensions; i++) out[i] = vector[i] - vector1[i];; return out; }
float* vectormath::subtract(float* out, float* vector, float* vector1) { int dimensions = this->dimensions; for(int i = 0; i < dimensions; i++) out[i] = vector[i] - vector1[i];; return out; }
double* vectormath::subtract(double* out, double* vector, double* vector1) { int dimensions = this->dimensions; for(int i = 0; i < dimensions; i++) out[i] = vector[i] - vector1[i];; return out; }
__float128* vectormath::subtract(__float128* out, __float128* vector, __float128* vector1) { int dimensions = this->dimensions; for(int i = 0; i < dimensions; i++) out[i] = vector[i] - vector1[i];; return out; }

char* vectormath::subtract(char* out, bool condensed, int count, ...) { int dimensions = this->dimensions; va_list vectors; va_start(vectors, condensed ? 1 : count); char** vs = condensed ? va_arg(vectors, char**) : NULL; for(int v = 0; v < count; v++) { char* vector = condensed ? vs[v] : va_arg(vectors, char*); for(int i = 0; i < dimensions; i++) out[i] -= vector[i]; } va_end(vectors); return out; }
short* vectormath::subtract(short* out, bool condensed, int count, ...) { int dimensions = this->dimensions; va_list vectors; va_start(vectors, condensed ? 1 : count); short** vs = condensed ? va_arg(vectors, short**) : NULL; for(int v = 0; v < count; v++) { short* vector = condensed ? vs[v] : va_arg(vectors, short*); for(int i = 0; i < dimensions; i++) out[i] -= vector[i]; } va_end(vectors); return out; }
int* vectormath::subtract(int* out, bool condensed, int count, ...) { int dimensions = this->dimensions; va_list vectors; va_start(vectors, condensed ? 1 : count); int** vs = condensed ? va_arg(vectors, int**) : NULL; for(int v = 0; v < count; v++) { int* vector = condensed ? vs[v] : va_arg(vectors, int*); for(int i = 0; i < dimensions; i++) out[i] -= vector[i]; } va_end(vectors); return out; }
long long* vectormath::subtract(long long* out, bool condensed, int count, ...) { int dimensions = this->dimensions; va_list vectors; va_start(vectors, condensed ? 1 : count); long long** vs = condensed ? va_arg(vectors, long long**) : NULL; for(int v = 0; v < count; v++) { long long* vector = condensed ? vs[v] : va_arg(vectors, long long*); for(int i = 0; i < dimensions; i++) out[i] -= vector[i]; } va_end(vectors); return out; }
float* vectormath::subtract(float* out, bool condensed, int count, ...) { int dimensions = this->dimensions; va_list vectors; va_start(vectors, condensed ? 1 : count); float** vs = condensed ? va_arg(vectors, float**) : NULL; for(int v = 0; v < count; v++) { float* vector = condensed ? vs[v] : va_arg(vectors, float*); for(int i = 0; i < dimensions; i++) out[i] -= vector[i]; } va_end(vectors); return out; }
double* vectormath::subtract(double* out, bool condensed, int count, ...) { int dimensions = this->dimensions; va_list vectors; va_start(vectors, condensed ? 1 : count); double** vs = condensed ? va_arg(vectors, double**) : NULL; for(int v = 0; v < count; v++) { double* vector = condensed ? vs[v] : va_arg(vectors, double*); for(int i = 0; i < dimensions; i++) out[i] -= vector[i]; } va_end(vectors); return out; }
__float128* vectormath::subtract(__float128* out, bool condensed, int count, ...) { int dimensions = this->dimensions; va_list vectors; va_start(vectors, condensed ? 1 : count); __float128** vs = condensed ? va_arg(vectors, __float128**) : NULL; for(int v = 0; v < count; v++) { __float128* vector = condensed ? vs[v] : va_arg(vectors, __float128*); for(int i = 0; i < dimensions; i++) out[i] -= vector[i]; } va_end(vectors); return out; }

char* vectormath::scalar(char* out, char* vector, char scalar) { int dimensions = this->dimensions; for(int i = 0; i < dimensions; i++) out[i] = scalar * vector[i]; return out; }
short* vectormath::scalar(short* out, char* vector, short scalar) { int dimensions = this->dimensions; for(int i = 0; i < dimensions; i++) out[i] = scalar * vector[i]; return out; }
short* vectormath::scalar(short* out, short* vector, short scalar) { int dimensions = this->dimensions; for(int i = 0; i < dimensions; i++) out[i] = scalar * vector[i]; return out; }
int* vectormath::scalar(int* out, short* vector, int scalar) { int dimensions = this->dimensions; for(int i = 0; i < dimensions; i++) out[i] = scalar * vector[i]; return out; }
int* vectormath::scalar(int* out, int* vector, int scalar) { int dimensions = this->dimensions; for(int i = 0; i < dimensions; i++) out[i] = scalar * vector[i]; return out; }
long long* vectormath::scalar(long long* out, int* vector, long long scalar) { int dimensions = this->dimensions; for(int i = 0; i < dimensions; i++) out[i] = scalar * vector[i]; return out; }
long long* vectormath::scalar(long long* out, long long* vector, long long scalar) { int dimensions = this->dimensions; for(int i = 0; i < dimensions; i++) out[i] = scalar * vector[i]; return out; }
float* vectormath::scalar(float* out, float* vector, float scalar) { int dimensions = this->dimensions; for(int i = 0; i < dimensions; i++) out[i] = scalar * vector[i]; return out; }
double* vectormath::scalar(double* out, float* vector, double scalar) { int dimensions = this->dimensions; for(int i = 0; i < dimensions; i++) out[i] = scalar * vector[i]; return out; }
double* vectormath::scalar(double* out, double* vector, double scalar) { int dimensions = this->dimensions; for(int i = 0; i < dimensions; i++) out[i] = scalar * vector[i]; return out; }
__float128* vectormath::scalar(__float128* out, double* vector, __float128 scalar) { int dimensions = this->dimensions; for(int i = 0; i < dimensions; i++) out[i] = scalar * vector[i]; return out; }
__float128* vectormath::scalar(__float128* out, __float128* vector, __float128 scalar) { int dimensions = this->dimensions; for(int i = 0; i < dimensions; i++) out[i] = scalar * vector[i]; return out; }

char* vectormath::multiply(char* out, char* vector, char* vector1) { int dimensions = this->dimensions; for(int i = 0; i < dimensions; i++) out[i] = vector[i] * vector1[i]; return out; }
short* vectormath::multiply(short* out, char* vector, char* vector1) { int dimensions = this->dimensions; for(int i = 0; i < dimensions; i++) out[i] = vector[i] * vector1[i]; return out; }
short* vectormath::multiply(short* out, short* vector, short* vector1) { int dimensions = this->dimensions; for(int i = 0; i < dimensions; i++) out[i] = vector[i] * vector1[i]; return out; }
int* vectormath::multiply(int* out, short* vector, short* vector1) { int dimensions = this->dimensions; for(int i = 0; i < dimensions; i++) out[i] = vector[i] * vector1[i]; return out; }
int* vectormath::multiply(int* out, int* vector, int* vector1) { int dimensions = this->dimensions; for(int i = 0; i < dimensions; i++) out[i] = vector[i] * vector1[i]; return out; }
long long* vectormath::multiply(long long* out, int* vector, int* vector1) { int dimensions = this->dimensions; for(int i = 0; i < dimensions; i++) out[i] = vector[i] * vector1[i]; return out; }
long long* vectormath::multiply(long long* out, long long* vector, long long* vector1) { int dimensions = this->dimensions; for(int i = 0; i < dimensions; i++) out[i] = vector[i] * vector1[i]; return out; }
float* vectormath::multiply(float* out, float* vector, float* vector1) { int dimensions = this->dimensions; for(int i = 0; i < dimensions; i++) out[i] = vector[i] * vector1[i]; return out; }
double* vectormath::multiply(double* out, float* vector, float* vector1) { int dimensions = this->dimensions; for(int i = 0; i < dimensions; i++) out[i] = vector[i] * vector1[i]; return out; }
double* vectormath::multiply(double* out, double* vector, double* vector1) { int dimensions = this->dimensions; for(int i = 0; i < dimensions; i++) out[i] = vector[i] * vector1[i]; return out; }
__float128* vectormath::multiply(__float128* out, double* vector, double* vector1) { int dimensions = this->dimensions; for(int i = 0; i < dimensions; i++) out[i] = vector[i] * vector1[i]; return out; }
__float128* vectormath::multiply(__float128* out, __float128* vector, __float128* vector1) { int dimensions = this->dimensions; for(int i = 0; i < dimensions; i++) out[i] = vector[i] * vector1[i]; return out; }

float vectormath::magnitudeF32(char* vector) { return sqrtf(this->squareMagnitudeI32(vector)); }
float vectormath::magnitudeF32(short* vector) { return sqrtf(this->squareMagnitudeI64(vector)); }
float vectormath::magnitudeF32(int* vector) { return sqrtf((float)this->squareMagnitudeI64(vector)); }
float vectormath::magnitudeF32(long long* vector) { return sqrtf((float)this->squareMagnitudeI64(vector)); }
float vectormath::magnitudeF32(float* vector) { return sqrtf(this->squareMagnitudeF128(vector)); }
double vectormath::magnitudeF64(char* vector) { return sqrt(this->squareMagnitudeI32(vector)); }
double vectormath::magnitudeF64(short* vector) { return sqrt(this->squareMagnitudeI64(vector)); }
double vectormath::magnitudeF64(int* vector) { return sqrt((double)this->squareMagnitudeI128(vector)); }
double vectormath::magnitudeF64(long long* vector) { return sqrt((double)this->squareMagnitudeI128(vector)); }
double vectormath::magnitudeF64(float* vector) { return sqrt((double)this->squareMagnitudeF128(vector)); }
double vectormath::magnitudeF64(double* vector) { return sqrt((double)this->squareMagnitudeF128(vector)); }
__float128 vectormath::magnitudeF128(char* vector) { return sqrtq(this->squareMagnitudeI32(vector)); }
__float128 vectormath::magnitudeF128(short* vector) { return sqrtq(this->squareMagnitudeI64(vector)); }
__float128 vectormath::magnitudeF128(int* vector) { return sqrtq(this->squareMagnitudeI128(vector)); }
__float128 vectormath::magnitudeF128(long long* vector) { return sqrtq(this->squareMagnitudeI128(vector)); }
__float128 vectormath::magnitudeF128(float* vector) { return sqrtq(this->squareMagnitudeF128(vector)); }
__float128 vectormath::magnitudeF128(double* vector) { return sqrtq(this->squareMagnitudeF128(vector)); }
__float128 vectormath::magnitudeF128(__float128* vector) { return sqrtq(this->squareMagnitudeF128(vector)); }

char vectormath::squareMagnitudeI8(char* vector) { char sm = 0; int dimensions = this->dimensions; for(int i = 0; i < dimensions; i++) sm += vector[i] * vector[i]; return sm; }
short vectormath::squareMagnitudeI16(char* vector) { short sm = 0; int dimensions = this->dimensions; for(int i = 0; i < dimensions; i++) sm += vector[i] * vector[i]; return sm; }
short vectormath::squareMagnitudeI16(short* vector) { short sm = 0; int dimensions = this->dimensions; for(int i = 0; i < dimensions; i++) sm += vector[i] * vector[i]; return sm; }
int vectormath::squareMagnitudeI32(char* vector) { int sm = 0; int dimensions = this->dimensions; for(int i = 0; i < dimensions; i++) sm += vector[i] * vector[i]; return sm; }
int vectormath::squareMagnitudeI32(short* vector) { int sm = 0; int dimensions = this->dimensions; for(int i = 0; i < dimensions; i++) sm += vector[i] * vector[i]; return sm; }
int vectormath::squareMagnitudeI32(int* vector) { int sm = 0; int dimensions = this->dimensions; for(int i = 0; i < dimensions; i++) sm += vector[i] * vector[i]; return sm; }
long long vectormath::squareMagnitudeI64(short* vector) { long long sm = 0; int dimensions = this->dimensions; for(int i = 0; i < dimensions; i++) sm += vector[i] * vector[i]; return sm; }
long long vectormath::squareMagnitudeI64(int* vector) { long long sm = 0; int dimensions = this->dimensions; for(int i = 0; i < dimensions; i++) sm += vector[i] * vector[i]; return sm; }
long long vectormath::squareMagnitudeI64(long long* vector) { long long sm = 0; int dimensions = this->dimensions; for(int i = 0; i < dimensions; i++) sm += vector[i] * vector[i]; return sm; }
__int128 vectormath::squareMagnitudeI128(int* vector) { __int128 sm = 0; int dimensions = this->dimensions; for(int i = 0; i < dimensions; i++) sm += vector[i] * vector[i]; return sm; }
__int128 vectormath::squareMagnitudeI128(long long* vector) { __int128 sm = 0; int dimensions = this->dimensions; for(int i = 0; i < dimensions; i++) sm += vector[i] * vector[i]; return sm; }
__int128 vectormath::squareMagnitudeI128(__int128* vector) { __int128 sm = 0; int dimensions = this->dimensions; for(int i = 0; i < dimensions; i++) sm += vector[i] * vector[i]; return sm; }
float vectormath::squareMagnitudeF32(float* vector) { float sm = 0; int dimensions = this->dimensions; for(int i = 0; i < dimensions; i++) sm += vector[i] * vector[i]; return sm; }
double vectormath::squareMagnitudeF64(float* vector) { double sm = 0; int dimensions = this->dimensions; for(int i = 0; i < dimensions; i++) sm += vector[i] * vector[i]; return sm; }
double vectormath::squareMagnitudeF64(double* vector) { double sm = 0; int dimensions = this->dimensions; for(int i = 0; i < dimensions; i++) sm += vector[i] * vector[i]; return sm; }
__float128 vectormath::squareMagnitudeF128(int* vector) { __float128 sm = 0; int dimensions = this->dimensions; for(int i = 0; i < dimensions; i++) sm += vector[i] * vector[i]; return sm; }
__float128 vectormath::squareMagnitudeF128(long long* vector) { __float128 sm = 0; int dimensions = this->dimensions; for(int i = 0; i < dimensions; i++) sm += vector[i] * vector[i]; return sm; }
__float128 vectormath::squareMagnitudeF128(float* vector) { __float128 sm = 0; int dimensions = this->dimensions; for(int i = 0; i < dimensions; i++) sm += vector[i] * vector[i]; return sm; }
__float128 vectormath::squareMagnitudeF128(double* vector) { __float128 sm = 0; int dimensions = this->dimensions; for(int i = 0; i < dimensions; i++) sm += vector[i] * vector[i]; return sm; }
__float128 vectormath::squareMagnitudeF128(__float128* vector) { __float128 sm = 0; int dimensions = this->dimensions; for(int i = 0; i < dimensions; i++) sm += vector[i] * vector[i]; return sm; }
