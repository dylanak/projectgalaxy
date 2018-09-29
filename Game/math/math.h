#ifndef _CTM_MATH_H
#define _CTM_MATH_H
#include <stdlib.h>
#include <iostream>
#include <math.h>
#include <quadmath.h>
#include <cstdarg>

class vectormath
{
	public:
		int dimensions;

		vectormath(const int& dimensions);
		virtual ~vectormath();

		virtual __int8* newVector(const __int8&);
		virtual __int16* newVector(const __int16&);
		virtual __int32* newVector(const __int32&);
		virtual __int64* newVector(const __int64&);
		virtual __int128* newVector(const __int128&);
		virtual float* newVector(const float&);
		virtual double* newVector(const double&);
		virtual __float128* newVector(const __float128&);

		virtual __int8* add(__int8* out, __int8* vector, __int8* vector1);
		virtual __int16* add(__int16* out, __int16* vector, __int16* vector1);
		virtual __int32* add(__int32* out, __int32* vector, __int32* vector1);
		virtual __int64* add(__int64* out, __int64* vector, __int64* vector1);
		virtual __int128* add(__int128* out, __int128* vector, __int128* vector1);
		virtual float* add(float* out, float* vector, float* vector1);
		virtual double* add(double* out, double* vector, double* vector1);
		virtual __float128* add(__float128* out, __float128* vector, __float128* vector1);

		virtual __int8* add(__int8* out, int count, ...);
		virtual __int16* add(__int16* out, int count, ...);
		virtual __int32* add(__int32* out, int count, ...);
		virtual __int64* add(__int64* out, int count, ...);
		virtual __int128* add(__int128* out, int count, ...);
		virtual float* add(float* out, int count, ...);
		virtual double* add(double* out, int count, ...);
		virtual __float128* add(__float128* out, int count, ...);

		virtual __int8* subtract(__int8* out, __int8* vector, __int8* vector1);
		virtual __int16* subtract(__int16* out, __int16* vector, __int16* vector1);
		virtual __int32* subtract(__int32* out, __int32* vector, __int32* vector1);
		virtual __int64* subtract(__int64* out, __int64* vector, __int64* vector1);
		virtual __int128* subtract(__int128* out, __int128* vector, __int128* vector1);
		virtual float* subtract(float* out, float* vector, float* vector1);
		virtual double* subtract(double* out, double* vector, double* vector1);
		virtual __float128* subtract(__float128* out, __float128* vector, __float128* vector1);

		virtual __int8* subtract(__int8* out, int count, ...);
		virtual __int16* subtract(__int16* out, int count, ...);
		virtual __int32* subtract(__int32* out, int count, ...);
		virtual __int64* subtract(__int64* out, int count, ...);
		virtual __int128* subtract(__int128* out, int count, ...);
		virtual float* subtract(float* out, int count, ...);
		virtual double* subtract(double* out, int count, ...);
		virtual __float128* subtract(__float128* out, int count, ...);

		virtual __int8* scalar(__int8* out, __int8* vector, __int8 scalar);
		virtual __int16* scalar(__int16* out, __int8* vector, __int16 scalar);
		virtual __int16* scalar(__int16* out, __int16* vector, __int16 scalar);
		virtual __int32* scalar(__int32* out, __int16* vector, __int32 scalar);
		virtual __int32* scalar(__int32* out, __int32* vector, __int32 scalar);
		virtual __int64* scalar(__int64* out, __int32* vector, __int64 scalar);
		virtual __int64* scalar(__int64* out, __int64* vector, __int64 scalar);
		virtual __int128* scalar(__int128* out, __int64* vector, __int128 scalar);
		virtual __int128* scalar(__int128* out, __int128* vector, __int128 scalar);
		virtual float* scalar(float* out, float* vector, float scalar);
		virtual double* scalar(double* out, float* vector, double scalar);
		virtual double* scalar(double* out, double* vector, double scalar);
		virtual __float128* scalar(__float128* out, double* vector, __float128 scalar);
		virtual __float128* scalar(__float128* out, __float128* vector, __float128 scalar);

		virtual __int8* multiply(__int8* out, __int8* vector, __int8* vector1);
		virtual __int16* multiply(__int16* out, __int8* vector, __int8* vector1);
		virtual __int16* multiply(__int16* out, __int16* vector, __int16* vector1);
		virtual __int32* multiply(__int32* out, __int16* vector, __int16* vector1);
		virtual __int32* multiply(__int32* out, __int32* vector, __int32* vector1);
		virtual __int64* multiply(__int64* out, __int32* vector, __int32* vector1);
		virtual __int64* multiply(__int64* out, __int64* vector, __int64* vector1);
		virtual __int128* multiply(__int128* out, __int64* vector, __int64* vector1);
		virtual __int128* multiply(__int128* out, __int128* vector, __int128* vector1);
		virtual float* multiply(float* out, float* vector, float* vector1);
		virtual double* multiply(double* out, float* vector, float* vector1);
		virtual double* multiply(double* out, double* vector, double* vector1);
		virtual __float128* multiply(__float128* out, double* vector, double* matrix1);
		virtual __float128* multiply(__float128* out, __float128* vector, __float128* vector1);

		virtual float magnitude(const float&, __int8* vector);
		virtual float magnitude(const float&, __int16* vector);
		virtual float magnitude(const float&, __int32* vector);
		virtual float magnitude(const float&, __int64* vector);
		virtual float magnitude(const float&, __int128* vector);
		virtual float magnitude(const float&, float* vector);
		virtual double magnitude(const double&, __int8* vector);
		virtual double magnitude(const double&, __int16* vector);
		virtual double magnitude(const double&, __int32* vector);
		virtual double magnitude(const double&, __int64* vector);
		virtual double magnitude(const double&, __int128* vector);
		virtual double magnitude(const double&, float* vector);
		virtual double magnitude(const double&, double* vector);
		virtual __float128 magnitude(const __float128&, __int8* vector);
		virtual __float128 magnitude(const __float128&, __int16* vector);
		virtual __float128 magnitude(const __float128&, __int32* vector);
		virtual __float128 magnitude(const __float128&, __int64* vector);
		virtual __float128 magnitude(const __float128&, __int128* vector);
		virtual __float128 magnitude(const __float128&, float* vector);
		virtual __float128 magnitude(const __float128&, double* vector);
		virtual __float128 magnitude(const __float128&, __float128* vector);

		virtual __int8 squareMagnitude(const __int8&, __int8* vector);
		virtual __int16 squareMagnitude(const __int16&, __int8* vector);
		virtual __int16 squareMagnitude(const __int16&, __int16* vector);
		virtual __int32 squareMagnitude(const __int32&, __int8* vector);
		virtual __int32 squareMagnitude(const __int32&, __int16* vector);
		virtual __int32 squareMagnitude(const __int32&, __int32* vector);
		virtual __int64 squareMagnitude(const __int64&, __int16* vector);
		virtual __int64 squareMagnitude(const __int64&, __int32* vector);
		virtual __int64 squareMagnitude(const __int64&, __int64* vector);
		virtual __int128 squareMagnitude(const __int128&, __int32* vector);
		virtual __int128 squareMagnitude(const __int128&, __int64* vector);
		virtual __int128 squareMagnitude(const __int128&, __int128* vector);
		virtual float squareMagnitude(const float&, float* vector);
		virtual double squareMagnitude(const double&, float* vector);
		virtual double squareMagnitude(const double&, double* vector);
		virtual __float128 squareMagnitude(const __float128&, __int32* vector);
		virtual __float128 squareMagnitude(const __float128&, __int64* vector);
		virtual __float128 squareMagnitude(const __float128&, float* vector);
		virtual __float128 squareMagnitude(const __float128&, double* vector);
		virtual __float128 squareMagnitude(const __float128&, __float128* vector);
};
class matrixmath
{
	public:
		const int rows;
		const int columns;

		matrixmath(const int& rows, const int& columns);
		virtual ~matrixmath();

		virtual __int8* newMatrix(const __int8&);
		virtual __int16* newMatrix(const __int16&);
		virtual __int32* newMatrix(const __int32&);
		virtual __int64* newMatrix(const __int64&);
		virtual __int128* newMatrix(const __int128&);
		virtual float* newMatrix(const float&);
		virtual double* newMatrix(const double&);
		virtual __float128* newMatrix(const __float128&);

		virtual __int8* scalar(__int8* out, __int8* matrix, __int8 scalar);
		virtual __int16* scalar(__int16* out, __int8* matrix, __int16 scalar);
		virtual __int16* scalar(__int16* out, __int16* matrix, __int16 scalar);
		virtual __int32* scalar(__int32* out, __int16* matrix, __int32 scalar);
		virtual __int32* scalar(__int32* out, __int32* matrix, __int32 scalar);
		virtual __int64* scalar(__int64* out, __int32* matrix, __int64 scalar);
		virtual __int64* scalar(__int64* out, __int64* matrix, __int64 scalar);
		virtual __int128* scalar(__int128* out, __int64* matrix, __int128 scalar);
		virtual __int128* scalar(__int128* out, __int128* matrix, __int128 scalar);
		virtual float* scalar(float* out, float* matrix, float scalar);
		virtual double* scalar(double* out, float* matrix, double scalar);
		virtual double* scalar(double* out, double* matrix, double scalar);
		virtual __float128* scalar(__float128* out, double* matrix, __float128 scalar);
		virtual __float128* scalar(__float128* out, __float128* matrix, __float128 scalar);

		virtual __int8* multiply(__int8* out, __int8* matrix, __int8* matrix1, int size);
		virtual __int16* multiply(__int16* out, __int8* matrix, __int8* matrix1, int size);
		virtual __int16* multiply(__int16* out, __int16* matrix, __int16* matrix1, int size);
		virtual __int32* multiply(__int32* out, __int16* matrix, __int16* matrix1, int size);
		virtual __int32* multiply(__int32* out, __int32* matrix, __int32* matrix1, int size);
		virtual __int64* multiply(__int64* out, __int32* matrix, __int32* matrix1, int size);
		virtual __int64* multiply(__int64* out, __int64* matrix, __int64* matrix1, int size);
		virtual __int128* multiply(__int128* out, __int64* matrix, __int64* matrix1, int size);
		virtual __int128* multiply(__int128* out, __int128* matrix, __int128* matrix1, int size);
		virtual float* multiply(float* out, float* matrix, float* matrix1, int size);
		virtual double* multiply(double* out, float* matrix, float* matrix1, int size);
		virtual double* multiply(double* out, double* matrix, double* matrix1, int size);
		virtual __float128* multiply(__float128* out, double* matrix, double* matrix1, int size);
		virtual __float128* multiply(__float128* out, __float128* matrix, __float128* matrix1, int size);
};
class matrixsquaremath: public matrixmath
{
	public:
		matrixsquaremath(const int& rowsandcolumns);

		virtual __int8* squareMultiply(__int8* out, __int8* matrix, __int8* matrix1);
		virtual __int16* squareMultiply(__int16* out, __int8* matrix, __int8* matrix1);
		virtual __int16* squareMultiply(__int16* out, __int16* matrix, __int16* matrix1);
		virtual __int32* squareMultiply(__int32* out, __int16* matrix, __int16* matrix1);
		virtual __int32* squareMultiply(__int32* out, __int32* matrix, __int32* matrix1);
		virtual __int64* squareMultiply(__int64* out, __int32* matrix, __int32* matrix1);
		virtual __int64* squareMultiply(__int64* out, __int64* matrix, __int64* matrix1);
		virtual __int128* squareMultiply(__int128* out, __int64* matrix, __int64* matrix1);
		virtual __int128* squareMultiply(__int128* out, __int128* matrix, __int128* matrix1);
		virtual float* squareMultiply(float* out, float* matrix, float* matrix1);
		virtual double* squareMultiply(double* out, float* matrix, float* matrix1);
		virtual double* squareMultiply(double* out, double* matrix, double* matrix1);
		virtual __float128* squareMultiply(__float128* out, double* matrix, double* matrix1);
		virtual __float128* squareMultiply(__float128* out, __float128* matrix, __float128* matrix1);

		virtual __int8* identity(__int8* out);
		virtual __int16* identity(__int16* out);
		virtual __int32* identity(__int32* out);
		virtual __int64* identity(__int64* out);
		virtual __int128* identity(__int128* out);
		virtual float* identity(float* out);
		virtual double* identity(double* out);
		virtual __float128* identity(__float128* out);

		virtual void identity(const __int8&, int& count, ...);
		virtual void identity(const __int16&, int& count, ...);
		virtual void identity(const __int32&, int& count, ...);
		virtual void identity(const __int64&, int& count, ...);
		virtual void identity(const __int128&, int& count, ...);
		virtual void identity(const float&, int& count, ...);
		virtual void identity(const double&, int& count, ...);
		virtual void identity(const __float128&, int& count, ...);

		virtual __int8 determinant(const __int8&, __int8* matrix);
		virtual __int16 determinant(const __int16&, __int8* matrix);
		virtual __int16 determinant(const __int16&, __int16* matrix);
		virtual __int32 determinant(const __int32&, __int16* matrix);
		virtual __int32 determinant(const __int32&, __int32* matrix);
		virtual __int64 determinant(const __int64&, __int32* matrix);
		virtual __int64 determinant(const __int64&, __int64* matrix);
		virtual __int128 determinant(const __int128&, __int64* matrix);
		virtual __int128 determinant(const __int128&, __int128* matrix);
		virtual float determinant(const float&, float* matrix);
		virtual double determinant(const double&, float* matrix);
		virtual double determinant(const double&, double* matrix);
		virtual __float128 determinant(const __float128&, double* matrix);
		virtual __float128 determinant(const __float128&, __float128* matrix);

		virtual float* inverse(float* out, __int8* matrix);
		virtual float* inverse(float* out, __int16* matrix);
		virtual float* inverse(float* out, __int32* matrix);
		virtual float* inverse(float* out, __int64* matrix);
		virtual float* inverse(float* out, __int128* matrix);
		virtual float* inverse(float* out, float* matrix);
		virtual double* inverse(double* out, __int8* matrix);
		virtual double* inverse(double* out, __int16* matrix);
		virtual double* inverse(double* out, __int32* matrix);
		virtual double* inverse(double* out, __int64* matrix);
		virtual double* inverse(double* out, __int128* matrix);
		virtual double* inverse(double* out, float* matrix);
		virtual double* inverse(double* out, double* matrix);
		virtual __float128* inverse(__float128* out, __int8* matrix);
		virtual __float128* inverse(__float128* out, __int16* matrix);
		virtual __float128* inverse(__float128* out, __int32* matrix);
		virtual __float128* inverse(__float128* out, __int64* matrix);
		virtual __float128* inverse(__float128* out, __int128* matrix);
		virtual __float128* inverse(__float128* out, float* matrix);
		virtual __float128* inverse(__float128* out, double* matrix);
		virtual __float128* inverse(__float128* out, __float128* matrix);

		virtual __int8* translate(__int8* out, __int8* matrix, __int8* vector);
		virtual __int16* translate(__int16* out, __int8* matrix, __int8* vector);
		virtual __int16* translate(__int16* out, __int16* matrix, __int16* vector);
		virtual __int32* translate(__int32* out, __int16* matrix, __int16* vector);
		virtual __int32* translate(__int32* out, __int32* matrix, __int32* vector);
		virtual __int64* translate(__int64* out, __int32* matrix, __int32* vector);
		virtual __int64* translate(__int64* out, __int64* matrix, __int64* vector);
		virtual __int128* translate(__int128* out, __int64* matrix, __int64* vector);
		virtual __int128* translate(__int128* out, __int128* matrix, __int128* vector);
		virtual float* translate(float* out, __int8* matrix, float* vector);
		virtual float* translate(float* out, __int16* matrix, float* vector);
		virtual float* translate(float* out, __int32* matrix, float* vector);
		virtual float* translate(float* out, __int64* matrix, float* vector);
		virtual float* translate(float* out, __int128* matrix, float* vector);
		virtual float* translate(float* out, float* matrix, float* vector);
		virtual double* translate(double* out, float* matrix, float* vector);
		virtual double* translate(double* out, __int8* matrix, double* vector);
		virtual double* translate(double* out, __int16* matrix, double* vector);
		virtual double* translate(double* out, __int32* matrix, double* vector);
		virtual double* translate(double* out, __int64* matrix, double* vector);
		virtual double* translate(double* out, __int128* matrix, double* vector);
		virtual double* translate(double* out, float* matrix, double* vector);
		virtual double* translate(double* out, double* matrix, double* vector);
		virtual __float128* translate(__float128* out, double* matrix, double* vector);
		virtual __float128* translate(__float128* out, __int8* matrix, __float128* vector);
		virtual __float128* translate(__float128* out, __int16* matrix, __float128* vector);
		virtual __float128* translate(__float128* out, __int32* matrix, __float128* vector);
		virtual __float128* translate(__float128* out, __int64* matrix, __float128* vector);
		virtual __float128* translate(__float128* out, __int128* matrix, __float128* vector);
		virtual __float128* translate(__float128* out, float* matrix, __float128* vector);
		virtual __float128* translate(__float128* out, double* matrix, __float128* vector);
		virtual __float128* translate(__float128* out, __float128* matrix, __float128* vector);
};

class matrix2x2math final : public matrixsquaremath
{
	private:
		matrix2x2math();
	public:
		virtual __int8* squareMultiply(__int8* out, __int8* matrix, __int8* matrix1) override;
		virtual __int16* squareMultiply(__int16* out, __int8* matrix, __int8* matrix1) override;
		virtual __int16* squareMultiply(__int16* out, __int16* matrix, __int16* matrix1) override;
		virtual __int32* squareMultiply(__int32* out, __int16* matrix, __int16* matrix1) override;
		virtual __int32* squareMultiply(__int32* out, __int32* matrix, __int32* matrix1) override;
		virtual __int64* squareMultiply(__int64* out, __int32* matrix, __int32* matrix1) override;
		virtual __int64* squareMultiply(__int64* out, __int64* matrix, __int64* matrix1) override;
		virtual __int128* squareMultiply(__int128* out, __int64* matrix, __int64* matrix1) override;
		virtual __int128* squareMultiply(__int128* out, __int128* matrix, __int128* matrix1) override;
		virtual float* squareMultiply(float* out, float* matrix, float* matrix1) override;
		virtual double* squareMultiply(double* out, float* matrix, float* matrix1) override;
		virtual double* squareMultiply(double* out, double* matrix, double* matrix1) override;
		virtual __float128* squareMultiply(__float128* out, double* matrix, double* matrix1) override;
		virtual __float128* squareMultiply(__float128* out, __float128* matrix, __float128* matrix1) override;

		virtual __int8* identity(__int8* out) override;
		virtual __int16* identity(__int16* out) override;
		virtual __int32* identity(__int32* out) override;
		virtual __int64* identity(__int64* out) override;
		virtual __int128* identity(__int128* out) override;
		virtual float* identity(float* out) override;
		virtual double* identity(double* out) override;
		virtual __float128* identity(__float128* out) override;

		virtual __int8 determinant(const __int8&, __int8* matrix) override;
		virtual __int16 determinant(const __int16&, __int8* matrix) override;
		virtual __int16 determinant(const __int16&, __int16* matrix) override;
		virtual __int32 determinant(const __int32&, __int16* matrix) override;
		virtual __int32 determinant(const __int32&, __int32* matrix) override;
		virtual __int64 determinant(const __int64&, __int32* matrix) override;
		virtual __int64 determinant(const __int64&, __int64* matrix) override;
		virtual __int128 determinant(const __int128&, __int64* matrix) override;
		virtual __int128 determinant(const __int128&, __int128* matrix) override;
		virtual float determinant(const float&, float* matrix) override;
		virtual double determinant(const double&, float* matrix) override;
		virtual double determinant(const double&, double* matrix) override;
		virtual __float128 determinant(const __float128&, double* matrix) override;
		virtual __float128 determinant(const __float128&, __float128* matrix) override;

		friend class math;
};
class matrix3x3math final : public matrixsquaremath
{
	private:
		matrix3x3math();
	public:
		virtual __int8* squareMultiply(__int8* out, __int8* matrix, __int8* matrix1) override;
		virtual __int16* squareMultiply(__int16* out, __int8* matrix, __int8* matrix1) override;
		virtual __int16* squareMultiply(__int16* out, __int16* matrix, __int16* matrix1) override;
		virtual __int32* squareMultiply(__int32* out, __int16* matrix, __int16* matrix1) override;
		virtual __int32* squareMultiply(__int32* out, __int32* matrix, __int32* matrix1) override;
		virtual __int64* squareMultiply(__int64* out, __int32* matrix, __int32* matrix1) override;
		virtual __int64* squareMultiply(__int64* out, __int64* matrix, __int64* matrix1) override;
		virtual __int128* squareMultiply(__int128* out, __int64* matrix, __int64* matrix1) override;
		virtual __int128* squareMultiply(__int128* out, __int128* matrix, __int128* matrix1) override;
		virtual float* squareMultiply(float* out, float* matrix, float* matrix1) override;
		virtual double* squareMultiply(double* out, float* matrix, float* matrix1) override;
		virtual double* squareMultiply(double* out, double* matrix, double* matrix1) override;
		virtual __float128* squareMultiply(__float128* out, double* matrix, double* matrix1) override;
		virtual __float128* squareMultiply(__float128* out, __float128* matrix, __float128* matrix1) override;

		virtual __int8* identity(__int8* out) override;
		virtual __int16* identity(__int16* out) override;
		virtual __int32* identity(__int32* out) override;
		virtual __int64* identity(__int64* out) override;
		virtual __int128* identity(__int128* out) override;
		virtual float* identity(float* out) override;
		virtual double* identity(double* out) override;
		virtual __float128* identity(__float128* out) override;

		virtual __int8 determinant(const __int8&, __int8* matrix) override;
		virtual __int16 determinant(const __int16&, __int8* matrix) override;
		virtual __int16 determinant(const __int16&, __int16* matrix) override;
		virtual __int32 determinant(const __int32&, __int16* matrix) override;
		virtual __int32 determinant(const __int32&, __int32* matrix) override;
		virtual __int64 determinant(const __int64&, __int32* matrix) override;
		virtual __int64 determinant(const __int64&, __int64* matrix) override;
		virtual __int128 determinant(const __int128&, __int64* matrix) override;
		virtual __int128 determinant(const __int128&, __int128* matrix) override;
		virtual float determinant(const float&, float* matrix) override;
		virtual double determinant(const double&, float* matrix) override;
		virtual double determinant(const double&, double* matrix) override;
		virtual __float128 determinant(const __float128&, double* matrix) override;
		virtual __float128 determinant(const __float128&, __float128* matrix) override;

		friend class math;
};

class matrix4x4math final : public matrixsquaremath
{
	private:
		matrix4x4math();
	public:
		virtual __int8* squareMultiply(__int8* out, __int8* matrix, __int8* matrix1) override;
		virtual __int16* squareMultiply(__int16* out, __int8* matrix, __int8* matrix1) override;
		virtual __int16* squareMultiply(__int16* out, __int16* matrix, __int16* matrix1) override;
		virtual __int32* squareMultiply(__int32* out, __int16* matrix, __int16* matrix1) override;
		virtual __int32* squareMultiply(__int32* out, __int32* matrix, __int32* matrix1) override;
		virtual __int64* squareMultiply(__int64* out, __int32* matrix, __int32* matrix1) override;
		virtual __int64* squareMultiply(__int64* out, __int64* matrix, __int64* matrix1) override;
		virtual __int128* squareMultiply(__int128* out, __int64* matrix, __int64* matrix1) override;
		virtual __int128* squareMultiply(__int128* out, __int128* matrix, __int128* matrix1) override;
		virtual float* squareMultiply(float* out, float* matrix, float* matrix1) override;
		virtual double* squareMultiply(double* out, float* matrix, float* matrix1) override;
		virtual double* squareMultiply(double* out, double* matrix, double* matrix1) override;
		virtual __float128* squareMultiply(__float128* out, double* matrix, double* matrix1) override;
		virtual __float128* squareMultiply(__float128* out, __float128* matrix, __float128* matrix1) override;

		virtual __int8* identity(__int8* out) override;
		virtual __int16* identity(__int16* out) override;
		virtual __int32* identity(__int32* out) override;
		virtual __int64* identity(__int64* out) override;
		virtual __int128* identity(__int128* out) override;
		virtual float* identity(float* out) override;
		virtual double* identity(double* out) override;
		virtual __float128* identity(__float128* out) override;

		virtual __int8 determinant(const __int8&, __int8* matrix) override;
		virtual __int16 determinant(const __int16&, __int8* matrix) override;
		virtual __int16 determinant(const __int16&, __int16* matrix) override;
		virtual __int32 determinant(const __int32&, __int16* matrix) override;
		virtual __int32 determinant(const __int32&, __int32* matrix) override;
		virtual __int64 determinant(const __int64&, __int32* matrix) override;
		virtual __int64 determinant(const __int64&, __int64* matrix) override;
		virtual __int128 determinant(const __int128&, __int64* matrix) override;
		virtual __int128 determinant(const __int128&, __int128* matrix) override;
		virtual float determinant(const float&, float* matrix) override;
		virtual double determinant(const double&, float* matrix) override;
		virtual double determinant(const double&, double* matrix) override;
		virtual __float128 determinant(const __float128&, double* matrix) override;
		virtual __float128 determinant(const __float128&, __float128* matrix) override;

		virtual __int8* translate(__int8* out, __int8* matrix, __int8* vector) override;
		virtual __int16* translate(__int16* out, __int8* matrix, __int8* vector) override;
		virtual __int16* translate(__int16* out, __int16* matrix, __int16* vector) override;
		virtual __int32* translate(__int32* out, __int16* matrix, __int16* vector) override;
		virtual __int32* translate(__int32* out, __int32* matrix, __int32* vector) override;
		virtual __int64* translate(__int64* out, __int32* matrix, __int32* vector) override;
		virtual __int64* translate(__int64* out, __int64* matrix, __int64* vector) override;
		virtual __int128* translate(__int128* out, __int64* matrix, __int64* vector) override;
		virtual __int128* translate(__int128* out, __int128* matrix, __int128* vector) override;
		virtual float* translate(float* out, __int8* matrix, float* vector) override;
		virtual float* translate(float* out, __int16* matrix, float* vector) override;
		virtual float* translate(float* out, __int32* matrix, float* vector) override;
		virtual float* translate(float* out, __int64* matrix, float* vector) override;
		virtual float* translate(float* out, __int128* matrix, float* vector) override;
		virtual float* translate(float* out, float* matrix, float* vector) override;
		virtual double* translate(double* out, float* matrix, float* vector) override;
		virtual double* translate(double* out, __int8* matrix, double* vector) override;
		virtual double* translate(double* out, __int16* matrix, double* vector) override;
		virtual double* translate(double* out, __int32* matrix, double* vector) override;
		virtual double* translate(double* out, __int64* matrix, double* vector) override;
		virtual double* translate(double* out, __int128* matrix, double* vector) override;
		virtual double* translate(double* out, float* matrix, double* vector) override;
		virtual double* translate(double* out, double* matrix, double* vector) override;
		virtual __float128* translate(__float128* out, double* matrix, double* vector) override;
		virtual __float128* translate(__float128* out, __int8* matrix, __float128* vector) override;
		virtual __float128* translate(__float128* out, __int16* matrix, __float128* vector) override;
		virtual __float128* translate(__float128* out, __int32* matrix, __float128* vector) override;
		virtual __float128* translate(__float128* out, __int64* matrix, __float128* vector) override;
		virtual __float128* translate(__float128* out, __int128* matrix, __float128* vector) override;
		virtual __float128* translate(__float128* out, float* matrix, __float128* vector) override;
		virtual __float128* translate(__float128* out, double* matrix, __float128* vector) override;
		virtual __float128* translate(__float128* out, __float128* matrix, __float128* vector) override;

		virtual float* rotateX(float* out, __int8* matrix, float anglex);
		virtual float* rotateX(float* out, __int16* matrix, float anglex);
		virtual float* rotateX(float* out, __int32* matrix, float anglex);
		virtual float* rotateX(float* out, __int64* matrix, float anglex);
		virtual float* rotateX(float* out, __int128* matrix, float anglex);
		virtual float* rotateX(float* out, float* matrix, float anglex);
		virtual double* rotateX(double* out, __int8* matrix, double anglex);
		virtual double* rotateX(double* out, __int16* matrix, double anglex);
		virtual double* rotateX(double* out, __int32* matrix, double anglex);
		virtual double* rotateX(double* out, __int64* matrix, double anglex);
		virtual double* rotateX(double* out, __int128* matrix, double anglex);
		virtual double* rotateX(double* out, float* matrix, double anglex);
		virtual double* rotateX(double* out, double* matrix, double anglex);
		virtual __float128* rotateX(__float128* out, __int8* matrix, __float128 anglex);
		virtual __float128* rotateX(__float128* out, __int16* matrix, __float128 anglex);
		virtual __float128* rotateX(__float128* out, __int32* matrix, __float128 anglex);
		virtual __float128* rotateX(__float128* out, __int64* matrix, __float128 anglex);
		virtual __float128* rotateX(__float128* out, __int128* matrix, __float128 anglex);
		virtual __float128* rotateX(__float128* out, float* matrix, __float128 anglex);
		virtual __float128* rotateX(__float128* out, double* matrix, __float128 anglex);
		virtual __float128* rotateX(__float128* out, __float128* matrix, __float128 anglex);

		virtual float* rotateY(float* out, __int8* matrix, float angley);
		virtual float* rotateY(float* out, __int16* matrix, float angley);
		virtual float* rotateY(float* out, __int32* matrix, float angley);
		virtual float* rotateY(float* out, __int64* matrix, float angley);
		virtual float* rotateY(float* out, __int128* matrix, float angley);
		virtual float* rotateY(float* out, float* matrix, float angley);
		virtual double* rotateY(double* out, __int8* matrix, double angley);
		virtual double* rotateY(double* out, __int16* matrix, double angley);
		virtual double* rotateY(double* out, __int32* matrix, double angley);
		virtual double* rotateY(double* out, __int64* matrix, double angley);
		virtual double* rotateY(double* out, __int128* matrix, double angley);
		virtual double* rotateY(double* out, float* matrix, double angley);
		virtual double* rotateY(double* out, double* matrix, double angley);
		virtual __float128* rotateY(__float128* out, __int8* matrix, __float128 angley);
		virtual __float128* rotateY(__float128* out, __int16* matrix, __float128 angley);
		virtual __float128* rotateY(__float128* out, __int32* matrix, __float128 angley);
		virtual __float128* rotateY(__float128* out, __int64* matrix, __float128 angley);
		virtual __float128* rotateY(__float128* out, __int128* matrix, __float128 angley);
		virtual __float128* rotateY(__float128* out, float* matrix, __float128 angley);
		virtual __float128* rotateY(__float128* out, double* matrix, __float128 angley);
		virtual __float128* rotateY(__float128* out, __float128* matrix, __float128 angley);

		virtual float* rotateZ(float* out, __int8* matrix, float anglez);
		virtual float* rotateZ(float* out, __int16* matrix, float anglez);
		virtual float* rotateZ(float* out, __int32* matrix, float anglez);
		virtual float* rotateZ(float* out, __int64* matrix, float anglez);
		virtual float* rotateZ(float* out, __int128* matrix, float anglez);
		virtual float* rotateZ(float* out, float* matrix, float anglez);
		virtual double* rotateZ(double* out, __int8* matrix, double anglez);
		virtual double* rotateZ(double* out, __int16* matrix, double anglez);
		virtual double* rotateZ(double* out, __int32* matrix, double anglez);
		virtual double* rotateZ(double* out, __int64* matrix, double anglez);
		virtual double* rotateZ(double* out, __int128* matrix, double anglez);
		virtual double* rotateZ(double* out, float* matrix, double anglez);
		virtual double* rotateZ(double* out, double* matrix, double anglez);
		virtual __float128* rotateZ(__float128* out, __int8* matrix, __float128 anglez);
		virtual __float128* rotateZ(__float128* out, __int16* matrix, __float128 anglez);
		virtual __float128* rotateZ(__float128* out, __int32* matrix, __float128 anglez);
		virtual __float128* rotateZ(__float128* out, __int64* matrix, __float128 anglez);
		virtual __float128* rotateZ(__float128* out, __int128* matrix, __float128 anglez);
		virtual __float128* rotateZ(__float128* out, float* matrix, __float128 anglez);
		virtual __float128* rotateZ(__float128* out, double* matrix, __float128 anglez);
		virtual __float128* rotateZ(__float128* out, __float128* matrix, __float128 anglez);

		virtual float* rotateXY(float* out, __int8* matrix, float* angles);
		virtual float* rotateXY(float* out, __int16* matrix, float* angles);
		virtual float* rotateXY(float* out, __int32* matrix, float* angles);
		virtual float* rotateXY(float* out, __int64* matrix, float* angles);
		virtual float* rotateXY(float* out, __int128* matrix, float* angles);
		virtual float* rotateXY(float* out, float* matrix, float* angles);
		virtual double* rotateXY(double* out, __int8* matrix, double* angles);
		virtual double* rotateXY(double* out, __int16* matrix, double* angles);
		virtual double* rotateXY(double* out, __int32* matrix, double* angles);
		virtual double* rotateXY(double* out, __int64* matrix, double* angles);
		virtual double* rotateXY(double* out, __int128* matrix, double* angles);
		virtual double* rotateXY(double* out, float* matrix, double* angles);
		virtual double* rotateXY(double* out, double* matrix, double* angles);
		virtual __float128* rotateXY(__float128* out, __int8* matrix, __float128* angles);
		virtual __float128* rotateXY(__float128* out, __int16* matrix, __float128* angles);
		virtual __float128* rotateXY(__float128* out, __int32* matrix, __float128* angles);
		virtual __float128* rotateXY(__float128* out, __int64* matrix, __float128* angles);
		virtual __float128* rotateXY(__float128* out, __int128* matrix, __float128* angles);
		virtual __float128* rotateXY(__float128* out, float* matrix, __float128* angles);
		virtual __float128* rotateXY(__float128* out, double* matrix, __float128* angles);
		virtual __float128* rotateXY(__float128* out, __float128* matrix, __float128* angles);

		virtual float* rotateXZ(float* out, __int8* matrix, float* angles);
		virtual float* rotateXZ(float* out, __int16* matrix, float* angles);
		virtual float* rotateXZ(float* out, __int32* matrix, float* angles);
		virtual float* rotateXZ(float* out, __int64* matrix, float* angles);
		virtual float* rotateXZ(float* out, __int128* matrix, float* angles);
		virtual float* rotateXZ(float* out, float* matrix, float* angles);
		virtual double* rotateXZ(double* out, __int8* matrix, double* angles);
		virtual double* rotateXZ(double* out, __int16* matrix, double* angles);
		virtual double* rotateXZ(double* out, __int32* matrix, double* angles);
		virtual double* rotateXZ(double* out, __int64* matrix, double* angles);
		virtual double* rotateXZ(double* out, __int128* matrix, double* angles);
		virtual double* rotateXZ(double* out, float* matrix, double* angles);
		virtual double* rotateXZ(double* out, double* matrix, double* angles);
		virtual __float128* rotateXZ(__float128* out, __int8* matrix, __float128* angles);
		virtual __float128* rotateXZ(__float128* out, __int16* matrix, __float128* angles);
		virtual __float128* rotateXZ(__float128* out, __int32* matrix, __float128* angles);
		virtual __float128* rotateXZ(__float128* out, __int64* matrix, __float128* angles);
		virtual __float128* rotateXZ(__float128* out, __int128* matrix, __float128* angles);
		virtual __float128* rotateXZ(__float128* out, float* matrix, __float128* angles);
		virtual __float128* rotateXZ(__float128* out, double* matrix, __float128* angles);
		virtual __float128* rotateXZ(__float128* out, __float128* matrix, __float128* angles);

		virtual float* rotateXYZ(float* out, __int8* matrix, float* angles);
		virtual float* rotateXYZ(float* out, __int16* matrix, float* angles);
		virtual float* rotateXYZ(float* out, __int32* matrix, float* angles);
		virtual float* rotateXYZ(float* out, __int64* matrix, float* angles);
		virtual float* rotateXYZ(float* out, __int128* matrix, float* angles);
		virtual float* rotateXYZ(float* out, float* matrix, float* angles);
		virtual double* rotateXYZ(double* out, __int8* matrix, double* angles);
		virtual double* rotateXYZ(double* out, __int16* matrix, double* angles);
		virtual double* rotateXYZ(double* out, __int32* matrix, double* angles);
		virtual double* rotateXYZ(double* out, __int64* matrix, double* angles);
		virtual double* rotateXYZ(double* out, __int128* matrix, double* angles);
		virtual double* rotateXYZ(double* out, float* matrix, double* angles);
		virtual double* rotateXYZ(double* out, double* matrix, double* angles);
		virtual __float128* rotateXYZ(__float128* out, __int8* matrix, __float128* angles);
		virtual __float128* rotateXYZ(__float128* out, __int16* matrix, __float128* angles);
		virtual __float128* rotateXYZ(__float128* out, __int32* matrix, __float128* angles);
		virtual __float128* rotateXYZ(__float128* out, __int64* matrix, __float128* angles);
		virtual __float128* rotateXYZ(__float128* out, __int128* matrix, __float128* angles);
		virtual __float128* rotateXYZ(__float128* out, float* matrix, __float128* angles);
		virtual __float128* rotateXYZ(__float128* out, double* matrix, __float128* angles);
		virtual __float128* rotateXYZ(__float128* out, __float128* matrix, __float128* angles);

		virtual float* rotateXZY(float* out, __int8* matrix, float* angles);
		virtual float* rotateXZY(float* out, __int16* matrix, float* angles);
		virtual float* rotateXZY(float* out, __int32* matrix, float* angles);
		virtual float* rotateXZY(float* out, __int64* matrix, float* angles);
		virtual float* rotateXZY(float* out, __int128* matrix, float* angles);
		virtual float* rotateXZY(float* out, float* matrix, float* angles);
		virtual double* rotateXZY(double* out, __int8* matrix, double* angles);
		virtual double* rotateXZY(double* out, __int16* matrix, double* angles);
		virtual double* rotateXZY(double* out, __int32* matrix, double* angles);
		virtual double* rotateXZY(double* out, __int64* matrix, double* angles);
		virtual double* rotateXZY(double* out, __int128* matrix, double* angles);
		virtual double* rotateXZY(double* out, float* matrix, double* angles);
		virtual double* rotateXZY(double* out, double* matrix, double* angles);
		virtual __float128* rotateXZY(__float128* out, __int8* matrix, __float128* angles);
		virtual __float128* rotateXZY(__float128* out, __int16* matrix, __float128* angles);
		virtual __float128* rotateXZY(__float128* out, __int32* matrix, __float128* angles);
		virtual __float128* rotateXZY(__float128* out, __int64* matrix, __float128* angles);
		virtual __float128* rotateXZY(__float128* out, __int128* matrix, __float128* angles);
		virtual __float128* rotateXZY(__float128* out, float* matrix, __float128* angles);
		virtual __float128* rotateXZY(__float128* out, double* matrix, __float128* angles);
		virtual __float128* rotateXZY(__float128* out, __float128* matrix, __float128* angles);

		virtual float* rotateYX(float* out, __int8* matrix, float* angles);
		virtual float* rotateYX(float* out, __int16* matrix, float* angles);
		virtual float* rotateYX(float* out, __int32* matrix, float* angles);
		virtual float* rotateYX(float* out, __int64* matrix, float* angles);
		virtual float* rotateYX(float* out, __int128* matrix, float* angles);
		virtual float* rotateYX(float* out, float* matrix, float* angles);
		virtual double* rotateYX(double* out, __int8* matrix, double* angles);
		virtual double* rotateYX(double* out, __int16* matrix, double* angles);
		virtual double* rotateYX(double* out, __int32* matrix, double* angles);
		virtual double* rotateYX(double* out, __int64* matrix, double* angles);
		virtual double* rotateYX(double* out, __int128* matrix, double* angles);
		virtual double* rotateYX(double* out, float* matrix, double* angles);
		virtual double* rotateYX(double* out, double* matrix, double* angles);
		virtual __float128* rotateYX(__float128* out, __int8* matrix, __float128* angles);
		virtual __float128* rotateYX(__float128* out, __int16* matrix, __float128* angles);
		virtual __float128* rotateYX(__float128* out, __int32* matrix, __float128* angles);
		virtual __float128* rotateYX(__float128* out, __int64* matrix, __float128* angles);
		virtual __float128* rotateYX(__float128* out, __int128* matrix, __float128* angles);
		virtual __float128* rotateYX(__float128* out, float* matrix, __float128* angles);
		virtual __float128* rotateYX(__float128* out, double* matrix, __float128* angles);
		virtual __float128* rotateYX(__float128* out, __float128* matrix, __float128* angles);

		virtual float* rotateYZ(float* out, __int8* matrix, float* angles);
		virtual float* rotateYZ(float* out, __int16* matrix, float* angles);
		virtual float* rotateYZ(float* out, __int32* matrix, float* angles);
		virtual float* rotateYZ(float* out, __int64* matrix, float* angles);
		virtual float* rotateYZ(float* out, __int128* matrix, float* angles);
		virtual float* rotateYZ(float* out, float* matrix, float* angles);
		virtual double* rotateYZ(double* out, __int8* matrix, double* angles);
		virtual double* rotateYZ(double* out, __int16* matrix, double* angles);
		virtual double* rotateYZ(double* out, __int32* matrix, double* angles);
		virtual double* rotateYZ(double* out, __int64* matrix, double* angles);
		virtual double* rotateYZ(double* out, __int128* matrix, double* angles);
		virtual double* rotateYZ(double* out, float* matrix, double* angles);
		virtual double* rotateYZ(double* out, double* matrix, double* angles);
		virtual __float128* rotateYZ(__float128* out, __int8* matrix, __float128* angles);
		virtual __float128* rotateYZ(__float128* out, __int16* matrix, __float128* angles);
		virtual __float128* rotateYZ(__float128* out, __int32* matrix, __float128* angles);
		virtual __float128* rotateYZ(__float128* out, __int64* matrix, __float128* angles);
		virtual __float128* rotateYZ(__float128* out, __int128* matrix, __float128* angles);
		virtual __float128* rotateYZ(__float128* out, float* matrix, __float128* angles);
		virtual __float128* rotateYZ(__float128* out, double* matrix, __float128* angles);
		virtual __float128* rotateYZ(__float128* out, __float128* matrix, __float128* angles);

		virtual float* rotateYXZ(float* out, __int8* matrix, float* angles);
		virtual float* rotateYXZ(float* out, __int16* matrix, float* angles);
		virtual float* rotateYXZ(float* out, __int32* matrix, float* angles);
		virtual float* rotateYXZ(float* out, __int64* matrix, float* angles);
		virtual float* rotateYXZ(float* out, __int128* matrix, float* angles);
		virtual float* rotateYXZ(float* out, float* matrix, float* angles);
		virtual double* rotateYXZ(double* out, __int8* matrix, double* angles);
		virtual double* rotateYXZ(double* out, __int16* matrix, double* angles);
		virtual double* rotateYXZ(double* out, __int32* matrix, double* angles);
		virtual double* rotateYXZ(double* out, __int64* matrix, double* angles);
		virtual double* rotateYXZ(double* out, __int128* matrix, double* angles);
		virtual double* rotateYXZ(double* out, float* matrix, double* angles);
		virtual double* rotateYXZ(double* out, double* matrix, double* angles);
		virtual __float128* rotateYXZ(__float128* out, __int8* matrix, __float128* angles);
		virtual __float128* rotateYXZ(__float128* out, __int16* matrix, __float128* angles);
		virtual __float128* rotateYXZ(__float128* out, __int32* matrix, __float128* angles);
		virtual __float128* rotateYXZ(__float128* out, __int64* matrix, __float128* angles);
		virtual __float128* rotateYXZ(__float128* out, __int128* matrix, __float128* angles);
		virtual __float128* rotateYXZ(__float128* out, float* matrix, __float128* angles);
		virtual __float128* rotateYXZ(__float128* out, double* matrix, __float128* angles);
		virtual __float128* rotateYXZ(__float128* out, __float128* matrix, __float128* angles);

		virtual float* rotateYZX(float* out, __int8* matrix, float* angles);
		virtual float* rotateYZX(float* out, __int16* matrix, float* angles);
		virtual float* rotateYZX(float* out, __int32* matrix, float* angles);
		virtual float* rotateYZX(float* out, __int64* matrix, float* angles);
		virtual float* rotateYZX(float* out, __int128* matrix, float* angles);
		virtual float* rotateYZX(float* out, float* matrix, float* angles);
		virtual double* rotateYZX(double* out, __int8* matrix, double* angles);
		virtual double* rotateYZX(double* out, __int16* matrix, double* angles);
		virtual double* rotateYZX(double* out, __int32* matrix, double* angles);
		virtual double* rotateYZX(double* out, __int64* matrix, double* angles);
		virtual double* rotateYZX(double* out, __int128* matrix, double* angles);
		virtual double* rotateYZX(double* out, float* matrix, double* angles);
		virtual double* rotateYZX(double* out, double* matrix, double* angles);
		virtual __float128* rotateYZX(__float128* out, __int8* matrix, __float128* angles);
		virtual __float128* rotateYZX(__float128* out, __int16* matrix, __float128* angles);
		virtual __float128* rotateYZX(__float128* out, __int32* matrix, __float128* angles);
		virtual __float128* rotateYZX(__float128* out, __int64* matrix, __float128* angles);
		virtual __float128* rotateYZX(__float128* out, __int128* matrix, __float128* angles);
		virtual __float128* rotateYZX(__float128* out, float* matrix, __float128* angles);
		virtual __float128* rotateYZX(__float128* out, double* matrix, __float128* angles);
		virtual __float128* rotateYZX(__float128* out, __float128* matrix, __float128* angles);

		virtual float* rotateZX(float* out, __int8* matrix, float* angles);
		virtual float* rotateZX(float* out, __int16* matrix, float* angles);
		virtual float* rotateZX(float* out, __int32* matrix, float* angles);
		virtual float* rotateZX(float* out, __int64* matrix, float* angles);
		virtual float* rotateZX(float* out, __int128* matrix, float* angles);
		virtual float* rotateZX(float* out, float* matrix, float* angles);
		virtual double* rotateZX(double* out, __int8* matrix, double* angles);
		virtual double* rotateZX(double* out, __int16* matrix, double* angles);
		virtual double* rotateZX(double* out, __int32* matrix, double* angles);
		virtual double* rotateZX(double* out, __int64* matrix, double* angles);
		virtual double* rotateZX(double* out, __int128* matrix, double* angles);
		virtual double* rotateZX(double* out, float* matrix, double* angles);
		virtual double* rotateZX(double* out, double* matrix, double* angles);
		virtual __float128* rotateZX(__float128* out, __int8* matrix, __float128* angles);
		virtual __float128* rotateZX(__float128* out, __int16* matrix, __float128* angles);
		virtual __float128* rotateZX(__float128* out, __int32* matrix, __float128* angles);
		virtual __float128* rotateZX(__float128* out, __int64* matrix, __float128* angles);
		virtual __float128* rotateZX(__float128* out, __int128* matrix, __float128* angles);
		virtual __float128* rotateZX(__float128* out, float* matrix, __float128* angles);
		virtual __float128* rotateZX(__float128* out, double* matrix, __float128* angles);
		virtual __float128* rotateZX(__float128* out, __float128* matrix, __float128* angles);

		virtual float* rotateZY(float* out, __int8* matrix, float* angles);
		virtual float* rotateZY(float* out, __int16* matrix, float* angles);
		virtual float* rotateZY(float* out, __int32* matrix, float* angles);
		virtual float* rotateZY(float* out, __int64* matrix, float* angles);
		virtual float* rotateZY(float* out, __int128* matrix, float* angles);
		virtual float* rotateZY(float* out, float* matrix, float* angles);
		virtual double* rotateZY(double* out, __int8* matrix, double* angles);
		virtual double* rotateZY(double* out, __int16* matrix, double* angles);
		virtual double* rotateZY(double* out, __int32* matrix, double* angles);
		virtual double* rotateZY(double* out, __int64* matrix, double* angles);
		virtual double* rotateZY(double* out, __int128* matrix, double* angles);
		virtual double* rotateZY(double* out, float* matrix, double* angles);
		virtual double* rotateZY(double* out, double* matrix, double* angles);
		virtual __float128* rotateZY(__float128* out, __int8* matrix, __float128* angles);
		virtual __float128* rotateZY(__float128* out, __int16* matrix, __float128* angles);
		virtual __float128* rotateZY(__float128* out, __int32* matrix, __float128* angles);
		virtual __float128* rotateZY(__float128* out, __int64* matrix, __float128* angles);
		virtual __float128* rotateZY(__float128* out, __int128* matrix, __float128* angles);
		virtual __float128* rotateZY(__float128* out, float* matrix, __float128* angles);
		virtual __float128* rotateZY(__float128* out, double* matrix, __float128* angles);
		virtual __float128* rotateZY(__float128* out, __float128* matrix, __float128* angles);

		virtual float* rotateZXY(float* out, __int8* matrix, float* angles);
		virtual float* rotateZXY(float* out, __int16* matrix, float* angles);
		virtual float* rotateZXY(float* out, __int32* matrix, float* angles);
		virtual float* rotateZXY(float* out, __int64* matrix, float* angles);
		virtual float* rotateZXY(float* out, __int128* matrix, float* angles);
		virtual float* rotateZXY(float* out, float* matrix, float* angles);
		virtual double* rotateZXY(double* out, __int8* matrix, double* angles);
		virtual double* rotateZXY(double* out, __int16* matrix, double* angles);
		virtual double* rotateZXY(double* out, __int32* matrix, double* angles);
		virtual double* rotateZXY(double* out, __int64* matrix, double* angles);
		virtual double* rotateZXY(double* out, __int128* matrix, double* angles);
		virtual double* rotateZXY(double* out, float* matrix, double* angles);
		virtual double* rotateZXY(double* out, double* matrix, double* angles);
		virtual __float128* rotateZXY(__float128* out, __int8* matrix, __float128* angles);
		virtual __float128* rotateZXY(__float128* out, __int16* matrix, __float128* angles);
		virtual __float128* rotateZXY(__float128* out, __int32* matrix, __float128* angles);
		virtual __float128* rotateZXY(__float128* out, __int64* matrix, __float128* angles);
		virtual __float128* rotateZXY(__float128* out, __int128* matrix, __float128* angles);
		virtual __float128* rotateZXY(__float128* out, float* matrix, __float128* angles);
		virtual __float128* rotateZXY(__float128* out, double* matrix, __float128* angles);
		virtual __float128* rotateZXY(__float128* out, __float128* matrix, __float128* angles);

		virtual float* rotateZYX(float* out, __int8* matrix, float* angles);
		virtual float* rotateZYX(float* out, __int16* matrix, float* angles);
		virtual float* rotateZYX(float* out, __int32* matrix, float* angles);
		virtual float* rotateZYX(float* out, __int64* matrix, float* angles);
		virtual float* rotateZYX(float* out, __int128* matrix, float* angles);
		virtual float* rotateZYX(float* out, float* matrix, float* angles);
		virtual double* rotateZYX(double* out, __int8* matrix, double* angles);
		virtual double* rotateZYX(double* out, __int16* matrix, double* angles);
		virtual double* rotateZYX(double* out, __int32* matrix, double* angles);
		virtual double* rotateZYX(double* out, __int64* matrix, double* angles);
		virtual double* rotateZYX(double* out, __int128* matrix, double* angles);
		virtual double* rotateZYX(double* out, float* matrix, double* angles);
		virtual double* rotateZYX(double* out, double* matrix, double* angles);
		virtual __float128* rotateZYX(__float128* out, __int8* matrix, __float128* angles);
		virtual __float128* rotateZYX(__float128* out, __int16* matrix, __float128* angles);
		virtual __float128* rotateZYX(__float128* out, __int32* matrix, __float128* angles);
		virtual __float128* rotateZYX(__float128* out, __int64* matrix, __float128* angles);
		virtual __float128* rotateZYX(__float128* out, __int128* matrix, __float128* angles);
		virtual __float128* rotateZYX(__float128* out, float* matrix, __float128* angles);
		virtual __float128* rotateZYX(__float128* out, double* matrix, __float128* angles);
		virtual __float128* rotateZYX(__float128* out, __float128* matrix, __float128* angles);

		virtual float* frustrum(float* out, float left, float right, float bottom, float top, float near, float far);
		virtual double* frustrum(double* out, double left, double right, double bottom, double top, double near, double far);
		virtual __float128* frustrum(__float128* out, __float128 left, __float128 right, __float128 bottom, __float128 top, __float128 near, __float128 far);

		virtual float* ortho(float* out, float horizontal, float vertical, float near, float far);
		virtual double* ortho(double* out, double horizontal, double vertical, double near, double far);
		virtual __float128* ortho(__float128* out, __float128 horizontal, __float128 vertical, __float128 near, __float128 far);

		virtual float* perspectiveHorizontal(float* out, float aspect, float fovx, float near, float far);
		virtual double* perspectiveHorizontal(double* out, double aspect, double fovx, double near, double far);
		virtual __float128* perspectiveHorizontal(__float128* out, __float128 aspect, __float128 fovx, __float128 near, __float128 far);

		virtual float* perspectiveVertical(float* out, float aspect, float fovy, float near, float far);
		virtual double* perspectiveVertical(double* out, double aspect, double fovy, double near, double far);
		virtual __float128* perspectiveVertical(__float128* out, __float128 aspect, __float128 fovy, __float128 near, __float128 far);

		friend class math;
};
class math
{
	public:
		static matrix2x2math mat2;
		static matrix3x3math mat3;
		static matrix4x4math mat4;
};
#endif
