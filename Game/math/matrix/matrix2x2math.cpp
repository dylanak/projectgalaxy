#include "../math.h"

matrix2x2math::matrix2x2math() : matrixsquaremath(2) { }

char* matrix2x2math::squareMultiply(char* out, char* matrix, char* matrix1) { char ret[] { matrix[0] * matrix1[0] + matrix[1] * matrix1[2], matrix[0] * matrix1[1] + matrix[1] * matrix1[3], matrix[2] * matrix1[0] + matrix[3] * matrix1[2], matrix[2] * matrix1[1] + matrix[3] * matrix1[3] }; out[0] = ret[0], out[1] = ret[1], out[2] = ret[2], out[3] = ret[3]; return out; }
short* matrix2x2math::squareMultiply(short* out, char* matrix, char* matrix1) { short ret[] { matrix[0] * matrix1[0] + matrix[1] * matrix1[2], matrix[0] * matrix1[1] + matrix[1] * matrix1[3], matrix[2] * matrix1[0] + matrix[3] * matrix1[2], matrix[2] * matrix1[1] + matrix[3] * matrix1[3] }; out[0] = ret[0], out[1] = ret[1], out[2] = ret[2], out[3] = ret[3]; return out; }
short* matrix2x2math::squareMultiply(short* out, short* matrix, short* matrix1) { short ret[] { matrix[0] * matrix1[0] + matrix[1] * matrix1[2], matrix[0] * matrix1[1] + matrix[1] * matrix1[3], matrix[2] * matrix1[0] + matrix[3] * matrix1[2], matrix[2] * matrix1[1] + matrix[3] * matrix1[3] }; out[0] = ret[0], out[1] = ret[1], out[2] = ret[2], out[3] = ret[3]; return out; }
int* matrix2x2math::squareMultiply(int* out, short* matrix, short* matrix1) { int ret[] { matrix[0] * matrix1[0] + matrix[1] + matrix1[2], matrix[0] * matrix1[1] + matrix[1] * matrix1[3], matrix[2] * matrix1[0] + matrix[3] * matrix1[2], matrix[2] * matrix1[1] + matrix[3] * matrix1[3] }; out[0] = ret[0], out[1] = ret[1], out[2] = ret[2], out[3] = ret[3]; return out; }
int* matrix2x2math::squareMultiply(int* out, int* matrix, int* matrix1) { int ret[] { matrix[0] * matrix1[0] + matrix[1] + matrix1[2], matrix[0] * matrix1[1] + matrix[1] * matrix1[3], matrix[2] * matrix1[0] + matrix[3] * matrix1[2], matrix[2] * matrix1[1] + matrix[3] * matrix1[3] }; out[0] = ret[0], out[1] = ret[1], out[2] = ret[2], out[3] = ret[3]; return out; }
long long* matrix2x2math::squareMultiply(long long* out, int* matrix, int* matrix1) { long long ret[] { matrix[0] * matrix1[0] + matrix[1] + matrix1[2], matrix[0] * matrix1[1] + matrix[1] * matrix1[3], matrix[2] * matrix1[0] + matrix[3] * matrix1[2], matrix[2] * matrix1[1] + matrix[3] * matrix1[3] }; out[0] = ret[0], out[1] = ret[1], out[2] = ret[2], out[3] = ret[3]; return out; }
long long* matrix2x2math::squareMultiply(long long* out, long long* matrix, long long* matrix1) { long long ret[] { matrix[0] * matrix1[0] + matrix[1] + matrix1[2], matrix[0] * matrix1[1] + matrix[1] * matrix1[3], matrix[2] * matrix1[0] + matrix[3] * matrix1[2], matrix[2] * matrix1[1] + matrix[3] * matrix1[3] }; out[0] = ret[0], out[1] = ret[1], out[2] = ret[2], out[3] = ret[3]; return out; }
__int128* matrix2x2math::squareMultiply(__int128* out, long long* matrix, long long* matrix1) { __int128 ret[] { matrix[0] * matrix1[0] + matrix[1] + matrix1[2], matrix[0] * matrix1[1] + matrix[1] * matrix1[3], matrix[2] * matrix1[0] + matrix[3] * matrix1[2], matrix[2] * matrix1[1] + matrix[3] * matrix1[3] }; out[0] = ret[0], out[1] = ret[1], out[2] = ret[2], out[3] = ret[3]; return out; }
__int128* matrix2x2math::squareMultiply(__int128* out, __int128* matrix, __int128* matrix1) { __int128 ret[] { matrix[0] * matrix1[0] + matrix[1] + matrix1[2], matrix[0] * matrix1[1] + matrix[1] * matrix1[3], matrix[2] * matrix1[0] + matrix[3] * matrix1[2], matrix[2] * matrix1[1] + matrix[3] * matrix1[3] }; out[0] = ret[0], out[1] = ret[1], out[2] = ret[2], out[3] = ret[3]; return out; }
float* matrix2x2math::squareMultiply(float* out, float* matrix, float* matrix1) { float ret[] { matrix[0] * matrix1[0] + matrix[1] + matrix1[2], matrix[0] * matrix1[1] + matrix[1] * matrix1[3], matrix[2] * matrix1[0] + matrix[3] * matrix1[2], matrix[2] * matrix1[1] + matrix[3] * matrix1[3] }; out[0] = ret[0], out[1] = ret[1], out[2] = ret[2], out[3] = ret[3]; return out; }
double* matrix2x2math::squareMultiply(double* out, float* matrix, float* matrix1) { double ret[] { matrix[0] * matrix1[0] + matrix[1] + matrix1[2], matrix[0] * matrix1[1] + matrix[1] * matrix1[3], matrix[2] * matrix1[0] + matrix[3] * matrix1[2], matrix[2] * matrix1[1] + matrix[3] * matrix1[3] }; out[0] = ret[0], out[1] = ret[1], out[2] = ret[2], out[3] = ret[3]; return out; }
double* matrix2x2math::squareMultiply(double* out, double* matrix, double* matrix1) { double ret[] { matrix[0] * matrix1[0] + matrix[1] + matrix1[2], matrix[0] * matrix1[1] + matrix[1] * matrix1[3], matrix[2] * matrix1[0] + matrix[3] * matrix1[2], matrix[2] * matrix1[1] + matrix[3] * matrix1[3] }; out[0] = ret[0], out[1] = ret[1], out[2] = ret[2], out[3] = ret[3]; return out; }
__float128* matrix2x2math::squareMultiply(__float128* out, double* matrix, double* matrix1) { __float128 ret[] { matrix[0] * matrix1[0] + matrix[1] + matrix1[2], matrix[0] * matrix1[1] + matrix[1] * matrix1[3], matrix[2] * matrix1[0] + matrix[3] * matrix1[2], matrix[2] * matrix1[1] + matrix[3] * matrix1[3] }; out[0] = ret[0], out[1] = ret[1], out[2] = ret[2], out[3] = ret[3]; return out; }
__float128* matrix2x2math::squareMultiply(__float128* out, __float128* matrix, __float128* matrix1) { __float128 ret[] { matrix[0] * matrix1[0] + matrix[1] * matrix1[2], matrix[0] * matrix1[1] + matrix[1] * matrix1[3], matrix[2] * matrix1[0] + matrix[3] * matrix1[2], matrix[2] * matrix1[1] + matrix[3] * matrix1[3] }; out[0] = ret[0], out[1] = ret[1], out[2] = ret[2], out[3] = ret[3]; return out; }

char* matrix2x2math::identity(char* out) { out[0] = out[3] = 1; out[1] = out[2] = 0; return out; }
short* matrix2x2math::identity(short* out) { out[0] = out[3] = 1; out[1] = out[2] = 0; return out; }
int* matrix2x2math::identity(int* out) { out[0] = out[3] = 1; out[1] = out[2] = 0; return out; }
long long* matrix2x2math::identity(long long* out) { out[0] = out[3] = 1; out[1] = out[2] = 0; return out; }
__int128* matrix2x2math::identity(__int128* out) { out[0] = out[3] = 1; out[1] = out[2] = 0; return out; }
float* matrix2x2math::identity(float* out) { out[0] = out[3] = 1; out[1] = out[2] = 0; return out; }
double* matrix2x2math::identity(double* out) { out[0] = out[3] = 1; out[1] = out[2] = 0; return out; }
__float128* matrix2x2math::identity(__float128* out) { out[0] = out[3] = 1; out[1] = out[2] = 0; return out; }

char matrix2x2math::determinantI8(char* matrix) { return matrix[0] * matrix[3] - matrix[2] * matrix[1]; }
short matrix2x2math::determinantI16(char* matrix) { return matrix[0] * matrix[3] - matrix[2] * matrix[1]; }
short matrix2x2math::determinantI16(short* matrix) { return matrix[0] * matrix[3] - matrix[2] * matrix[1]; }
int matrix2x2math::determinantI32(short* matrix) { return matrix[0] * matrix[3] - matrix[2] * matrix[1]; }
int matrix2x2math::determinantI32(int* matrix) { return matrix[0] * matrix[3] - matrix[2] * matrix[1]; }
long long matrix2x2math::determinantI64(int* matrix) { return matrix[0] * matrix[3] - matrix[2] * matrix[1]; }
long long matrix2x2math::determinantI64(long long* matrix) { return matrix[0] * matrix[3] - matrix[2] * matrix[1]; }
__int128 matrix2x2math::determinantI128(long long* matrix) { return matrix[0] * matrix[3] - matrix[2] * matrix[1]; }
__int128 matrix2x2math::determinantI128(__int128* matrix) { return matrix[0] * matrix[3] - matrix[2] * matrix[1]; }
float matrix2x2math::determinantF32(float* matrix) { return matrix[0] * matrix[3] - matrix[2] * matrix[1]; }
double matrix2x2math::determinantF64(float* matrix) { return matrix[0] * matrix[3] - matrix[2] * matrix[1]; }
double matrix2x2math::determinantF64(double* matrix) { return matrix[0] * matrix[3] - matrix[2] * matrix[1]; }
__float128 matrix2x2math::determinantF128(double* matrix) { return matrix[0] * matrix[3] - matrix[2] * matrix[1]; }
__float128 matrix2x2math::determinantF128(__float128* matrix) { return matrix[0] * matrix[3] - matrix[2] * matrix[1]; }
