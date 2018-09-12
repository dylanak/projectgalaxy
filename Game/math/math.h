#ifndef MATH_H_
#define MATH_H_

#include <stdlib.h>
#include <iostream>
#include <math.h>
#include <quadmath.h>
#include <cstdarg>

class vectormath
{
	private:
		int vectordimensions;
	public:
		vectormath(int dimensions);
		virtual ~vectormath();

		virtual int dimensions();

		virtual char* newVectorI8();
		virtual short* newVectorI16();
		virtual int* newVectorI32();
		virtual long long* newVectorI64();
		virtual float* newVectorF32();
		virtual double* newVectorF64();
		virtual __float128* newVectorF128();

		virtual char* add(char* out, char* vector, char* vector1);
		virtual short* add(short* out, short* vector, short* vector1);
		virtual int* add(int* out, int* vector, int* vector1);
		virtual long long* add(long long* out, long long* vector, long long* vector1);
		virtual float* add(float* out, float* vector, float* vector1);
		virtual double* add(double* out, double* vector, double* vector1);
		virtual __float128* add(__float128* out, __float128* vector, __float128* vector1);

		virtual char* add(char* out, bool condensed, int count, ...);
		virtual short* add(short* out, bool condensed, int count, ...);
		virtual int* add(int* out, bool condensed, int count, ...);
		virtual long long* add(long long* out, bool condensed, int count, ...);
		virtual float* add(float* out, bool condensed, int count, ...);
		virtual double* add(double* out, bool condensed, int count, ...);
		virtual __float128* add(__float128* out, bool condensed, int count, ...);

		virtual char* subtract(char* out, char* vector, char* vector1);
		virtual short* subtract(short* out, short* vector, short* vector1);
		virtual int* subtract(int* out, int* vector, int* vector1);
		virtual long long* subtract(long long* out, long long* vector, long long* vector1);
		virtual float* subtract(float* out, float* vector, float* vector1);
		virtual double* subtract(double* out, double* vector, double* vector1);
		virtual __float128* subtract(__float128* out, __float128* vector, __float128* vector1);

		virtual char* subtract(char* out, bool condensed, int count, ...);
		virtual short* subtract(short* out, bool condensed, int count, ...);
		virtual int* subtract(int* out, bool condensed, int count, ...);
		virtual long long* subtract(long long* out, bool condensed, int count, ...);
		virtual float* subtract(float* out, bool condensed, int count, ...);
		virtual double* subtract(double* out, bool condensed, int count, ...);
		virtual __float128* subtract(__float128* out, bool condensed, int count, ...);

		virtual char* scalar(char* out, char* vector, char scalar);
		virtual short* scalar(short* out, char* vector, short scalar);
		virtual short* scalar(short* out, short* vector, short scalar);
		virtual int* scalar(int* out, short* vector, int scalar);
		virtual int* scalar(int* out, int* vector, int scalar);
		virtual long long* scalar(long long* out, int* vector, long long scalar);
		virtual long long* scalar(long long* out, long long* vector, long long scalar);
		virtual float* scalar(float* out, float* vector, float scalar);
		virtual double* scalar(double* out, float* vector, double scalar);
		virtual double* scalar(double* out, double* vector, double scalar);
		virtual __float128* scalar(__float128* out, double* vector, __float128 scalar);
		virtual __float128* scalar(__float128* out, __float128* vector, __float128 scalar);

		virtual char* multiply(char* out, char* vector, char* vector1);
		virtual short* multiply(short* out, char* vector, char* vector1);
		virtual short* multiply(short* out, short* vector, short* vector1);
		virtual int* multiply(int* out, short* vector, short* vector1);
		virtual int* multiply(int* out, int* vector, int* vector1);
		virtual long long* multiply(long long* out, int* vector, int* vector1);
		virtual long long* multiply(long long* out, long long* vector, long long* vector1);
		virtual float* multiply(float* out, float* vector, float* vector1);
		virtual double* multiply(double* out, float* vector, float* vector1);
		virtual double* multiply(double* out, double* vector, double* vector1);
		virtual __float128* multiply(__float128* out, double* vector, double* matrix1);
		virtual __float128* multiply(__float128* out, __float128* vector, __float128* vector1);

		virtual float magnitudeF32(char* vector);
		virtual float magnitudeF32(short* vector);
		virtual float magnitudeF32(int* vector);
		virtual float magnitudeF32(long long* vector);
		virtual float magnitudeF32(float* vector);
		virtual double magnitudeF64(char* vector);
		virtual double magnitudeF64(short* vector);
		virtual double magnitudeF64(int* vector);
		virtual double magnitudeF64(long long* vector);
		virtual double magnitudeF64(float* vector);
		virtual double magnitudeF64(double* vector);
		virtual __float128 magnitudeF128(char* vector);
		virtual __float128 magnitudeF128(short* vector);
		virtual __float128 magnitudeF128(int* vector);
		virtual __float128 magnitudeF128(long long* vector);
		virtual __float128 magnitudeF128(float* vector);
		virtual __float128 magnitudeF128(double* vector);
		virtual __float128 magnitudeF128(__float128* vector);

		virtual char squareMagnitudeI8(char* vector);
		virtual short squareMagnitudeI16(char* vector);
		virtual short squareMagnitudeI16(short* vector);
		virtual int squareMagnitudeI32(char* vector);
		virtual int squareMagnitudeI32(short* vector);
		virtual int squareMagnitudeI32(int* vector);
		virtual long long squareMagnitudeI64(short* vector);
		virtual long long squareMagnitudeI64(int* vector);
		virtual long long squareMagnitudeI64(long long* vector);
		virtual __int128 squareMagnitudeI128(int* vector);
		virtual __int128 squareMagnitudeI128(long long* vector);
		virtual __int128 squareMagnitudeI128(__int128* vector);
		virtual float squareMagnitudeF32(float* vector);
		virtual double squareMagnitudeF64(float* vector);
		virtual double squareMagnitudeF64(double* vector);
		virtual __float128 squareMagnitudeF128(int* vector);
		virtual __float128 squareMagnitudeF128(long long* vector);
		virtual __float128 squareMagnitudeF128(float* vector);
		virtual __float128 squareMagnitudeF128(double* vector);
		virtual __float128 squareMagnitudeF128(__float128* vector);
};
class matrixmath
{
	private:
		int matrixrows;
		int matrixcolumns;
	public:
		matrixmath(int rows, int columns);
		virtual ~matrixmath();

		virtual int rows() final;
		virtual int columns() final;

		virtual char* newMatrixI8();
		virtual short* newMatrixI16();
		virtual int* newMatrixI32();
		virtual long long* newMatrixI64();
		virtual float* newMatrixF32();
		virtual double* newMatrixF64();
		virtual __float128* newMatrixF128();

		virtual char* scalar(char* out, char* matrix, char scalar);
		virtual short* scalar(short* out, char* matrix, short scalar);
		virtual short* scalar(short* out, short* matrix, short scalar);
		virtual int* scalar(int* out, short* matrix, int scalar);
		virtual int* scalar(int* out, int* matrix, int scalar);
		virtual long long* scalar(long long* out, int* matrix, long long scalar);
		virtual long long* scalar(long long* out, long long* matrix, long long scalar);
		virtual float* scalar(float* out, float* matrix, float scalar);
		virtual double* scalar(double* out, float* matrix, double scalar);
		virtual double* scalar(double* out, double* matrix, double scalar);
		virtual __float128* scalar(__float128* out, double* matrix, __float128 scalar);
		virtual __float128* scalar(__float128* out, __float128* matrix, __float128 scalar);

		virtual char* multiply(char* out, char* matrix, char* matrix1, int size);
		virtual short* multiply(short* out, char* matrix, char* matrix1, int size);
		virtual short* multiply(short* out, short* matrix, short* matrix1, int size);
		virtual int* multiply(int* out, short* matrix, short* matrix1, int size);
		virtual int* multiply(int* out, int* matrix, int* matrix1, int size);
		virtual long long* multiply(long long* out, int* matrix, int* matrix1, int size);
		virtual long long* multiply(long long* out, long long* matrix, long long* matrix1, int size);
		virtual float* multiply(float* out, float* matrix, float* matrix1, int size);
		virtual double* multiply(double* out, float* matrix, float* matrix1, int size);
		virtual double* multiply(double* out, double* matrix, double* matrix1, int size);
		virtual __float128* multiply(__float128* out, double* matrix, double* matrix1, int size);
		virtual __float128* multiply(__float128* out, __float128* matrix, __float128* matrix1, int size);
};
class matrixsquaremath: public matrixmath
{
	public:
		matrixsquaremath(int);

		virtual char* squareMultiply(char* out, char* matrix, char* matrix1);
		virtual short* squareMultiply(short* out, char* matrix, char* matrix1);
		virtual short* squareMultiply(short* out, short* matrix, short* matrix1);
		virtual int* squareMultiply(int* out, short* matrix, short* matrix1);
		virtual int* squareMultiply(int* out, int* matrix, int* matrix1);
		virtual long long* squareMultiply(long long* out, int* matrix, int* matrix1);
		virtual long long* squareMultiply(long long* out, long long* matrix, long long* matrix1);
		virtual __int128* squareMultiply(__int128* out, long long* matrix, long long* matrix1);
		virtual __int128* squareMultiply(__int128* out, __int128* matrix, __int128* matrix1);
		virtual float* squareMultiply(float* out, float* matrix, float* matrix1);
		virtual double* squareMultiply(double* out, float* matrix, float* matrix1);
		virtual double* squareMultiply(double* out, double* matrix, double* matrix1);
		virtual __float128* squareMultiply(__float128* out, double* matrix, double* matrix1);
		virtual __float128* squareMultiply(__float128* out, __float128* matrix, __float128* matrix1);

		virtual char* identity(char* out);
		virtual short* identity(short* out);
		virtual int* identity(int* out);
		virtual long long* identity(long long* out);
		virtual __int128* identity(__int128* out);
		virtual float* identity(float* out);
		virtual double* identity(double* out);
		virtual __float128* identity(__float128* out);

		virtual void identityI8(bool condensed, int count, ...);
		virtual void identityI16(bool condensed, int count, ...);
		virtual void identityI32(bool condensed, int count, ...);
		virtual void identityI64(bool condensed, int count, ...);
		virtual void identityI128(bool condensed, int count, ...);
		virtual void identityF32(bool condensed, int count, ...);
		virtual void identityF64(bool condensed, int count, ...);
		virtual void identityF128(bool condensed, int count, ...);

		virtual char determinantI8(char* matrix);
		virtual short determinantI16(char* matrix);
		virtual short determinantI16(short* matrix);
		virtual int determinantI32(short* matrix);
		virtual int determinantI32(int* matrix);
		virtual long long determinantI64(int* matrix);
		virtual long long determinantI64(long long* matrix);
		virtual __int128 determinantI128(long long* matrix);
		virtual __int128 determinantI128(__int128* matrix);
		virtual float determinantF32(float* matrix);
		virtual double determinantF64(float* matrix);
		virtual double determinantF64(double* matrix);
		virtual __float128 determinantF128(double* matrix);
		virtual __float128 determinantF128(__float128* matrix);

		virtual float* inverse(float* out, char* matrix);
		virtual float* inverse(float* out, short* matrix);
		virtual float* inverse(float* out, int* matrix);
		virtual float* inverse(float* out, long long* matrix);
		virtual float* inverse(float* out, __int128* matrix);
		virtual float* inverse(float* out, float* matrix);
		virtual double* inverse(double* out, char* matrix);
		virtual double* inverse(double* out, short* matrix);
		virtual double* inverse(double* out, int* matrix);
		virtual double* inverse(double* out, long long* matrix);
		virtual double* inverse(double* out, __int128* matrix);
		virtual double* inverse(double* out, float* matrix);
		virtual double* inverse(double* out, double* matrix);
		virtual __float128* inverse(__float128* out, char* matrix);
		virtual __float128* inverse(__float128* out, short* matrix);
		virtual __float128* inverse(__float128* out, int* matrix);
		virtual __float128* inverse(__float128* out, long long* matrix);
		virtual __float128* inverse(__float128* out, __int128* matrix);
		virtual __float128* inverse(__float128* out, float* matrix);
		virtual __float128* inverse(__float128* out, double* matrix);
		virtual __float128* inverse(__float128* out, __float128* matrix);

		virtual char* translate(char* out, char* matrix, char* vector);
		virtual short* translate(short* out, char* matrix, char* vector);
		virtual short* translate(short* out, short* matrix, short* vector);
		virtual int* translate(int* out, short* matrix, short* vector);
		virtual int* translate(int* out, int* matrix, int* vector);
		virtual long long* translate(long long* out, int* matrix, int* vector);
		virtual long long* translate(long long* out, long long* matrix, long long* vector);
		virtual __int128* translate(__int128* out, long long* matrix, long long* vector);
		virtual __int128* translate(__int128* out, __int128* matrix, __int128* vector);
		virtual float* translate(float* out, char* matrix, float* vector);
		virtual float* translate(float* out, short* matrix, float* vector);
		virtual float* translate(float* out, int* matrix, float* vector);
		virtual float* translate(float* out, long long* matrix, float* vector);
		virtual float* translate(float* out, __int128* matrix, float* vector);
		virtual float* translate(float* out, float* matrix, float* vector);
		virtual double* translate(double* out, float* matrix, float* vector);
		virtual double* translate(double* out, char* matrix, double* vector);
		virtual double* translate(double* out, short* matrix, double* vector);
		virtual double* translate(double* out, int* matrix, double* vector);
		virtual double* translate(double* out, long long* matrix, double* vector);
		virtual double* translate(double* out, __int128* matrix, double* vector);
		virtual double* translate(double* out, float* matrix, double* vector);
		virtual double* translate(double* out, double* matrix, double* vector);
		virtual __float128* translate(__float128* out, double* matrix, double* vector);
		virtual __float128* translate(__float128* out, char* matrix, __float128* vector);
		virtual __float128* translate(__float128* out, short* matrix, __float128* vector);
		virtual __float128* translate(__float128* out, int* matrix, __float128* vector);
		virtual __float128* translate(__float128* out, long long* matrix, __float128* vector);
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
		virtual char* squareMultiply(char* out, char* matrix, char* matrix1) override;
		virtual short* squareMultiply(short* out, char* matrix, char* matrix1) override;
		virtual short* squareMultiply(short* out, short* matrix, short* matrix1) override;
		virtual int* squareMultiply(int* out, short* matrix, short* matrix1) override;
		virtual int* squareMultiply(int* out, int* matrix, int* matrix1) override;
		virtual long long* squareMultiply(long long* out, int* matrix, int* matrix1) override;
		virtual long long* squareMultiply(long long* out, long long* matrix, long long* matrix1) override;
		virtual __int128* squareMultiply(__int128* out, long long* matrix, long long* matrix1) override;
		virtual __int128* squareMultiply(__int128* out, __int128* matrix, __int128* matrix1) override;
		virtual float* squareMultiply(float* out, float* matrix, float* matrix1) override;
		virtual double* squareMultiply(double* out, float* matrix, float* matrix1) override;
		virtual double* squareMultiply(double* out, double* matrix, double* matrix1) override;
		virtual __float128* squareMultiply(__float128* out, double* matrix, double* matrix1) override;
		virtual __float128* squareMultiply(__float128* out, __float128* matrix, __float128* matrix1) override;

		virtual char* identity(char* out) override;
		virtual short* identity(short* out) override;
		virtual int* identity(int* out) override;
		virtual long long* identity(long long* out) override;
		virtual __int128* identity(__int128* out) override;
		virtual float* identity(float* out) override;
		virtual double* identity(double* out) override;
		virtual __float128* identity(__float128* out) override;

		virtual char determinantI8(char* matrix) override;
		virtual short determinantI16(char* matrix) override;
		virtual short determinantI16(short* matrix) override;
		virtual int determinantI32(short* matrix) override;
		virtual int determinantI32(int* matrix) override;
		virtual long long determinantI64(int* matrix) override;
		virtual long long determinantI64(long long* matrix) override;
		virtual __int128 determinantI128(long long* matrix) override;
		virtual __int128 determinantI128(__int128* matrix) override;
		virtual float determinantF32(float* matrix) override;
		virtual double determinantF64(float* matrix) override;
		virtual double determinantF64(double* matrix) override;
		virtual __float128 determinantF128(double* matrix) override;
		virtual __float128 determinantF128(__float128* matrix) override;

		friend class math;
};
class matrix3x3math final : public matrixsquaremath
{
	private:
		matrix3x3math();
	public:
		virtual char* squareMultiply(char* out, char* matrix, char* matrix1) override;
		virtual short* squareMultiply(short* out, char* matrix, char* matrix1) override;
		virtual short* squareMultiply(short* out, short* matrix, short* matrix1) override;
		virtual int* squareMultiply(int* out, short* matrix, short* matrix1) override;
		virtual int* squareMultiply(int* out, int* matrix, int* matrix1) override;
		virtual long long* squareMultiply(long long* out, int* matrix, int* matrix1) override;
		virtual long long* squareMultiply(long long* out, long long* matrix, long long* matrix1) override;
		virtual __int128* squareMultiply(__int128* out, long long* matrix, long long* matrix1) override;
		virtual __int128* squareMultiply(__int128* out, __int128* matrix, __int128* matrix1) override;
		virtual float* squareMultiply(float* out, float* matrix, float* matrix1) override;
		virtual double* squareMultiply(double* out, float* matrix, float* matrix1) override;
		virtual double* squareMultiply(double* out, double* matrix, double* matrix1) override;
		virtual __float128* squareMultiply(__float128* out, double* matrix, double* matrix1) override;
		virtual __float128* squareMultiply(__float128* out, __float128* matrix, __float128* matrix1) override;

		virtual char* identity(char* out) override;
		virtual short* identity(short* out) override;
		virtual int* identity(int* out) override;
		virtual long long* identity(long long* out) override;
		virtual __int128* identity(__int128* out) override;
		virtual float* identity(float* out) override;
		virtual double* identity(double* out) override;
		virtual __float128* identity(__float128* out) override;

		virtual char determinantI8(char* matrix) override;
		virtual short determinantI16(char* matrix) override;
		virtual short determinantI16(short* matrix) override;
		virtual int determinantI32(short* matrix) override;
		virtual int determinantI32(int* matrix) override;
		virtual long long determinantI64(int* matrix) override;
		virtual long long determinantI64(long long* matrix) override;
		virtual __int128 determinantI128(long long* matrix) override;
		virtual __int128 determinantI128(__int128* matrix) override;
		virtual float determinantF32(float* matrix) override;
		virtual double determinantF64(float* matrix) override;
		virtual double determinantF64(double* matrix) override;
		virtual __float128 determinantF128(double* matrix) override;
		virtual __float128 determinantF128(__float128* matrix) override;

		friend class math;
};

class matrix4x4math final : public matrixsquaremath
{
	private:
		matrix4x4math();
	public:
		virtual char* squareMultiply(char* out, char* matrix, char* matrix1) override;
		virtual short* squareMultiply(short* out, char* matrix, char* matrix1) override;
		virtual short* squareMultiply(short* out, short* matrix, short* matrix1) override;
		virtual int* squareMultiply(int* out, short* matrix, short* matrix1) override;
		virtual int* squareMultiply(int* out, int* matrix, int* matrix1) override;
		virtual long long* squareMultiply(long long* out, int* matrix, int* matrix1) override;
		virtual long long* squareMultiply(long long* out, long long* matrix, long long* matrix1) override;
		virtual __int128* squareMultiply(__int128* out, long long* matrix, long long* matrix1) override;
		virtual __int128* squareMultiply(__int128* out, __int128* matrix, __int128* matrix1) override;
		virtual float* squareMultiply(float* out, float* matrix, float* matrix1) override;
		virtual double* squareMultiply(double* out, float* matrix, float* matrix1) override;
		virtual double* squareMultiply(double* out, double* matrix, double* matrix1) override;
		virtual __float128* squareMultiply(__float128* out, double* matrix, double* matrix1) override;
		virtual __float128* squareMultiply(__float128* out, __float128* matrix, __float128* matrix1) override;

		virtual char* identity(char* out) override;
		virtual short* identity(short* out) override;
		virtual int* identity(int* out) override;
		virtual long long* identity(long long* out) override;
		virtual __int128* identity(__int128* out) override;
		virtual float* identity(float* out) override;
		virtual double* identity(double* out) override;
		virtual __float128* identity(__float128* out) override;

		virtual char determinantI8(char* matrix) override;
		virtual short determinantI16(char* matrix) override;
		virtual short determinantI16(short* matrix) override;
		virtual int determinantI32(short* matrix) override;
		virtual int determinantI32(int* matrix) override;
		virtual long long determinantI64(int* matrix) override;
		virtual long long determinantI64(long long* matrix) override;
		virtual __int128 determinantI128(long long* matrix) override;
		virtual __int128 determinantI128(__int128* matrix) override;
		virtual float determinantF32(float* matrix) override;
		virtual double determinantF64(float* matrix) override;
		virtual double determinantF64(double* matrix) override;
		virtual __float128 determinantF128(double* matrix) override;
		virtual __float128 determinantF128(__float128* matrix) override;

		virtual char* translate(char* out, char* matrix, char* vector) override;
		virtual short* translate(short* out, char* matrix, char* vector) override;
		virtual short* translate(short* out, short* matrix, short* vector) override;
		virtual int* translate(int* out, short* matrix, short* vector) override;
		virtual int* translate(int* out, int* matrix, int* vector) override;
		virtual long long* translate(long long* out, int* matrix, int* vector) override;
		virtual long long* translate(long long* out, long long* matrix, long long* vector) override;
		virtual __int128* translate(__int128* out, long long* matrix, long long* vector) override;
		virtual __int128* translate(__int128* out, __int128* matrix, __int128* vector) override;
		virtual float* translate(float* out, char* matrix, float* vector) override;
		virtual float* translate(float* out, short* matrix, float* vector) override;
		virtual float* translate(float* out, int* matrix, float* vector) override;
		virtual float* translate(float* out, long long* matrix, float* vector) override;
		virtual float* translate(float* out, __int128* matrix, float* vector) override;
		virtual float* translate(float* out, float* matrix, float* vector) override;
		virtual double* translate(double* out, float* matrix, float* vector) override;
		virtual double* translate(double* out, char* matrix, double* vector) override;
		virtual double* translate(double* out, short* matrix, double* vector) override;
		virtual double* translate(double* out, int* matrix, double* vector) override;
		virtual double* translate(double* out, long long* matrix, double* vector) override;
		virtual double* translate(double* out, __int128* matrix, double* vector) override;
		virtual double* translate(double* out, float* matrix, double* vector) override;
		virtual double* translate(double* out, double* matrix, double* vector) override;
		virtual __float128* translate(__float128* out, double* matrix, double* vector) override;
		virtual __float128* translate(__float128* out, char* matrix, __float128* vector) override;
		virtual __float128* translate(__float128* out, short* matrix, __float128* vector) override;
		virtual __float128* translate(__float128* out, int* matrix, __float128* vector) override;
		virtual __float128* translate(__float128* out, long long* matrix, __float128* vector) override;
		virtual __float128* translate(__float128* out, __int128* matrix, __float128* vector) override;
		virtual __float128* translate(__float128* out, float* matrix, __float128* vector) override;
		virtual __float128* translate(__float128* out, double* matrix, __float128* vector) override;
		virtual __float128* translate(__float128* out, __float128* matrix, __float128* vector) override;

		virtual float* rotateX(float* out, char* matrix, float anglex);
		virtual float* rotateX(float* out, short* matrix, float anglex);
		virtual float* rotateX(float* out, int* matrix, float anglex);
		virtual float* rotateX(float* out, long long* matrix, float anglex);
		virtual float* rotateX(float* out, __int128* matrix, float anglex);
		virtual float* rotateX(float* out, float* matrix, float anglex);
		virtual double* rotateX(double* out, char* matrix, double anglex);
		virtual double* rotateX(double* out, short* matrix, double anglex);
		virtual double* rotateX(double* out, int* matrix, double anglex);
		virtual double* rotateX(double* out, long long* matrix, double anglex);
		virtual double* rotateX(double* out, __int128* matrix, double anglex);
		virtual double* rotateX(double* out, float* matrix, double anglex);
		virtual double* rotateX(double* out, double* matrix, double anglex);
		virtual __float128* rotateX(__float128* out, char* matrix, __float128 anglex);
		virtual __float128* rotateX(__float128* out, short* matrix, __float128 anglex);
		virtual __float128* rotateX(__float128* out, int* matrix, __float128 anglex);
		virtual __float128* rotateX(__float128* out, long long* matrix, __float128 anglex);
		virtual __float128* rotateX(__float128* out, __int128* matrix, __float128 anglex);
		virtual __float128* rotateX(__float128* out, float* matrix, __float128 anglex);
		virtual __float128* rotateX(__float128* out, double* matrix, __float128 anglex);
		virtual __float128* rotateX(__float128* out, __float128* matrix, __float128 anglex);

		virtual float* rotateY(float* out, char* matrix, float angley);
		virtual float* rotateY(float* out, short* matrix, float angley);
		virtual float* rotateY(float* out, int* matrix, float angley);
		virtual float* rotateY(float* out, long long* matrix, float angley);
		virtual float* rotateY(float* out, __int128* matrix, float angley);
		virtual float* rotateY(float* out, float* matrix, float angley);
		virtual double* rotateY(double* out, char* matrix, double angley);
		virtual double* rotateY(double* out, short* matrix, double angley);
		virtual double* rotateY(double* out, int* matrix, double angley);
		virtual double* rotateY(double* out, long long* matrix, double angley);
		virtual double* rotateY(double* out, __int128* matrix, double angley);
		virtual double* rotateY(double* out, float* matrix, double angley);
		virtual double* rotateY(double* out, double* matrix, double angley);
		virtual __float128* rotateY(__float128* out, char* matrix, __float128 angley);
		virtual __float128* rotateY(__float128* out, short* matrix, __float128 angley);
		virtual __float128* rotateY(__float128* out, int* matrix, __float128 angley);
		virtual __float128* rotateY(__float128* out, long long* matrix, __float128 angley);
		virtual __float128* rotateY(__float128* out, __int128* matrix, __float128 angley);
		virtual __float128* rotateY(__float128* out, float* matrix, __float128 angley);
		virtual __float128* rotateY(__float128* out, double* matrix, __float128 angley);
		virtual __float128* rotateY(__float128* out, __float128* matrix, __float128 angley);

		virtual float* rotateZ(float* out, char* matrix, float anglez);
		virtual float* rotateZ(float* out, short* matrix, float anglez);
		virtual float* rotateZ(float* out, int* matrix, float anglez);
		virtual float* rotateZ(float* out, long long* matrix, float anglez);
		virtual float* rotateZ(float* out, __int128* matrix, float anglez);
		virtual float* rotateZ(float* out, float* matrix, float anglez);
		virtual double* rotateZ(double* out, char* matrix, double anglez);
		virtual double* rotateZ(double* out, short* matrix, double anglez);
		virtual double* rotateZ(double* out, int* matrix, double anglez);
		virtual double* rotateZ(double* out, long long* matrix, double anglez);
		virtual double* rotateZ(double* out, __int128* matrix, double anglez);
		virtual double* rotateZ(double* out, float* matrix, double anglez);
		virtual double* rotateZ(double* out, double* matrix, double anglez);
		virtual __float128* rotateZ(__float128* out, char* matrix, __float128 anglez);
		virtual __float128* rotateZ(__float128* out, short* matrix, __float128 anglez);
		virtual __float128* rotateZ(__float128* out, int* matrix, __float128 anglez);
		virtual __float128* rotateZ(__float128* out, long long* matrix, __float128 anglez);
		virtual __float128* rotateZ(__float128* out, __int128* matrix, __float128 anglez);
		virtual __float128* rotateZ(__float128* out, float* matrix, __float128 anglez);
		virtual __float128* rotateZ(__float128* out, double* matrix, __float128 anglez);
		virtual __float128* rotateZ(__float128* out, __float128* matrix, __float128 anglez);

		virtual float* rotateXY(float* out, char* matrix, float* angles);
		virtual float* rotateXY(float* out, short* matrix, float* angles);
		virtual float* rotateXY(float* out, int* matrix, float* angles);
		virtual float* rotateXY(float* out, long long* matrix, float* angles);
		virtual float* rotateXY(float* out, __int128* matrix, float* angles);
		virtual float* rotateXY(float* out, float* matrix, float* angles);
		virtual double* rotateXY(double* out, char* matrix, double* angles);
		virtual double* rotateXY(double* out, short* matrix, double* angles);
		virtual double* rotateXY(double* out, int* matrix, double* angles);
		virtual double* rotateXY(double* out, long long* matrix, double* angles);
		virtual double* rotateXY(double* out, __int128* matrix, double* angles);
		virtual double* rotateXY(double* out, float* matrix, double* angles);
		virtual double* rotateXY(double* out, double* matrix, double* angles);
		virtual __float128* rotateXY(__float128* out, char* matrix, __float128* angles);
		virtual __float128* rotateXY(__float128* out, short* matrix, __float128* angles);
		virtual __float128* rotateXY(__float128* out, int* matrix, __float128* angles);
		virtual __float128* rotateXY(__float128* out, long long* matrix, __float128* angles);
		virtual __float128* rotateXY(__float128* out, __int128* matrix, __float128* angles);
		virtual __float128* rotateXY(__float128* out, float* matrix, __float128* angles);
		virtual __float128* rotateXY(__float128* out, double* matrix, __float128* angles);
		virtual __float128* rotateXY(__float128* out, __float128* matrix, __float128* angles);

		virtual float* rotateXZ(float* out, char* matrix, float* angles);
		virtual float* rotateXZ(float* out, short* matrix, float* angles);
		virtual float* rotateXZ(float* out, int* matrix, float* angles);
		virtual float* rotateXZ(float* out, long long* matrix, float* angles);
		virtual float* rotateXZ(float* out, __int128* matrix, float* angles);
		virtual float* rotateXZ(float* out, float* matrix, float* angles);
		virtual double* rotateXZ(double* out, char* matrix, double* angles);
		virtual double* rotateXZ(double* out, short* matrix, double* angles);
		virtual double* rotateXZ(double* out, int* matrix, double* angles);
		virtual double* rotateXZ(double* out, long long* matrix, double* angles);
		virtual double* rotateXZ(double* out, __int128* matrix, double* angles);
		virtual double* rotateXZ(double* out, float* matrix, double* angles);
		virtual double* rotateXZ(double* out, double* matrix, double* angles);
		virtual __float128* rotateXZ(__float128* out, char* matrix, __float128* angles);
		virtual __float128* rotateXZ(__float128* out, short* matrix, __float128* angles);
		virtual __float128* rotateXZ(__float128* out, int* matrix, __float128* angles);
		virtual __float128* rotateXZ(__float128* out, long long* matrix, __float128* angles);
		virtual __float128* rotateXZ(__float128* out, __int128* matrix, __float128* angles);
		virtual __float128* rotateXZ(__float128* out, float* matrix, __float128* angles);
		virtual __float128* rotateXZ(__float128* out, double* matrix, __float128* angles);
		virtual __float128* rotateXZ(__float128* out, __float128* matrix, __float128* angles);

		virtual float* rotateXYZ(float* out, char* matrix, float* angles);
		virtual float* rotateXYZ(float* out, short* matrix, float* angles);
		virtual float* rotateXYZ(float* out, int* matrix, float* angles);
		virtual float* rotateXYZ(float* out, long long* matrix, float* angles);
		virtual float* rotateXYZ(float* out, __int128* matrix, float* angles);
		virtual float* rotateXYZ(float* out, float* matrix, float* angles);
		virtual double* rotateXYZ(double* out, char* matrix, double* angles);
		virtual double* rotateXYZ(double* out, short* matrix, double* angles);
		virtual double* rotateXYZ(double* out, int* matrix, double* angles);
		virtual double* rotateXYZ(double* out, long long* matrix, double* angles);
		virtual double* rotateXYZ(double* out, __int128* matrix, double* angles);
		virtual double* rotateXYZ(double* out, float* matrix, double* angles);
		virtual double* rotateXYZ(double* out, double* matrix, double* angles);
		virtual __float128* rotateXYZ(__float128* out, char* matrix, __float128* angles);
		virtual __float128* rotateXYZ(__float128* out, short* matrix, __float128* angles);
		virtual __float128* rotateXYZ(__float128* out, int* matrix, __float128* angles);
		virtual __float128* rotateXYZ(__float128* out, long long* matrix, __float128* angles);
		virtual __float128* rotateXYZ(__float128* out, __int128* matrix, __float128* angles);
		virtual __float128* rotateXYZ(__float128* out, float* matrix, __float128* angles);
		virtual __float128* rotateXYZ(__float128* out, double* matrix, __float128* angles);
		virtual __float128* rotateXYZ(__float128* out, __float128* matrix, __float128* angles);

		virtual float* rotateXZY(float* out, char* matrix, float* angles);
		virtual float* rotateXZY(float* out, short* matrix, float* angles);
		virtual float* rotateXZY(float* out, int* matrix, float* angles);
		virtual float* rotateXZY(float* out, long long* matrix, float* angles);
		virtual float* rotateXZY(float* out, __int128* matrix, float* angles);
		virtual float* rotateXZY(float* out, float* matrix, float* angles);
		virtual double* rotateXZY(double* out, char* matrix, double* angles);
		virtual double* rotateXZY(double* out, short* matrix, double* angles);
		virtual double* rotateXZY(double* out, int* matrix, double* angles);
		virtual double* rotateXZY(double* out, long long* matrix, double* angles);
		virtual double* rotateXZY(double* out, __int128* matrix, double* angles);
		virtual double* rotateXZY(double* out, float* matrix, double* angles);
		virtual double* rotateXZY(double* out, double* matrix, double* angles);
		virtual __float128* rotateXZY(__float128* out, char* matrix, __float128* angles);
		virtual __float128* rotateXZY(__float128* out, short* matrix, __float128* angles);
		virtual __float128* rotateXZY(__float128* out, int* matrix, __float128* angles);
		virtual __float128* rotateXZY(__float128* out, long long* matrix, __float128* angles);
		virtual __float128* rotateXZY(__float128* out, __int128* matrix, __float128* angles);
		virtual __float128* rotateXZY(__float128* out, float* matrix, __float128* angles);
		virtual __float128* rotateXZY(__float128* out, double* matrix, __float128* angles);
		virtual __float128* rotateXZY(__float128* out, __float128* matrix, __float128* angles);

		virtual float* rotateYX(float* out, char* matrix, float* angles);
		virtual float* rotateYX(float* out, short* matrix, float* angles);
		virtual float* rotateYX(float* out, int* matrix, float* angles);
		virtual float* rotateYX(float* out, long long* matrix, float* angles);
		virtual float* rotateYX(float* out, __int128* matrix, float* angles);
		virtual float* rotateYX(float* out, float* matrix, float* angles);
		virtual double* rotateYX(double* out, char* matrix, double* angles);
		virtual double* rotateYX(double* out, short* matrix, double* angles);
		virtual double* rotateYX(double* out, int* matrix, double* angles);
		virtual double* rotateYX(double* out, long long* matrix, double* angles);
		virtual double* rotateYX(double* out, __int128* matrix, double* angles);
		virtual double* rotateYX(double* out, float* matrix, double* angles);
		virtual double* rotateYX(double* out, double* matrix, double* angles);
		virtual __float128* rotateYX(__float128* out, char* matrix, __float128* angles);
		virtual __float128* rotateYX(__float128* out, short* matrix, __float128* angles);
		virtual __float128* rotateYX(__float128* out, int* matrix, __float128* angles);
		virtual __float128* rotateYX(__float128* out, long long* matrix, __float128* angles);
		virtual __float128* rotateYX(__float128* out, __int128* matrix, __float128* angles);
		virtual __float128* rotateYX(__float128* out, float* matrix, __float128* angles);
		virtual __float128* rotateYX(__float128* out, double* matrix, __float128* angles);
		virtual __float128* rotateYX(__float128* out, __float128* matrix, __float128* angles);

		virtual float* rotateYZ(float* out, char* matrix, float* angles);
		virtual float* rotateYZ(float* out, short* matrix, float* angles);
		virtual float* rotateYZ(float* out, int* matrix, float* angles);
		virtual float* rotateYZ(float* out, long long* matrix, float* angles);
		virtual float* rotateYZ(float* out, __int128* matrix, float* angles);
		virtual float* rotateYZ(float* out, float* matrix, float* angles);
		virtual double* rotateYZ(double* out, char* matrix, double* angles);
		virtual double* rotateYZ(double* out, short* matrix, double* angles);
		virtual double* rotateYZ(double* out, int* matrix, double* angles);
		virtual double* rotateYZ(double* out, long long* matrix, double* angles);
		virtual double* rotateYZ(double* out, __int128* matrix, double* angles);
		virtual double* rotateYZ(double* out, float* matrix, double* angles);
		virtual double* rotateYZ(double* out, double* matrix, double* angles);
		virtual __float128* rotateYZ(__float128* out, char* matrix, __float128* angles);
		virtual __float128* rotateYZ(__float128* out, short* matrix, __float128* angles);
		virtual __float128* rotateYZ(__float128* out, int* matrix, __float128* angles);
		virtual __float128* rotateYZ(__float128* out, long long* matrix, __float128* angles);
		virtual __float128* rotateYZ(__float128* out, __int128* matrix, __float128* angles);
		virtual __float128* rotateYZ(__float128* out, float* matrix, __float128* angles);
		virtual __float128* rotateYZ(__float128* out, double* matrix, __float128* angles);
		virtual __float128* rotateYZ(__float128* out, __float128* matrix, __float128* angles);

		virtual float* rotateYXZ(float* out, char* matrix, float* angles);
		virtual float* rotateYXZ(float* out, short* matrix, float* angles);
		virtual float* rotateYXZ(float* out, int* matrix, float* angles);
		virtual float* rotateYXZ(float* out, long long* matrix, float* angles);
		virtual float* rotateYXZ(float* out, __int128* matrix, float* angles);
		virtual float* rotateYXZ(float* out, float* matrix, float* angles);
		virtual double* rotateYXZ(double* out, char* matrix, double* angles);
		virtual double* rotateYXZ(double* out, short* matrix, double* angles);
		virtual double* rotateYXZ(double* out, int* matrix, double* angles);
		virtual double* rotateYXZ(double* out, long long* matrix, double* angles);
		virtual double* rotateYXZ(double* out, __int128* matrix, double* angles);
		virtual double* rotateYXZ(double* out, float* matrix, double* angles);
		virtual double* rotateYXZ(double* out, double* matrix, double* angles);
		virtual __float128* rotateYXZ(__float128* out, char* matrix, __float128* angles);
		virtual __float128* rotateYXZ(__float128* out, short* matrix, __float128* angles);
		virtual __float128* rotateYXZ(__float128* out, int* matrix, __float128* angles);
		virtual __float128* rotateYXZ(__float128* out, long long* matrix, __float128* angles);
		virtual __float128* rotateYXZ(__float128* out, __int128* matrix, __float128* angles);
		virtual __float128* rotateYXZ(__float128* out, float* matrix, __float128* angles);
		virtual __float128* rotateYXZ(__float128* out, double* matrix, __float128* angles);
		virtual __float128* rotateYXZ(__float128* out, __float128* matrix, __float128* angles);

		virtual float* rotateYZX(float* out, char* matrix, float* angles);
		virtual float* rotateYZX(float* out, short* matrix, float* angles);
		virtual float* rotateYZX(float* out, int* matrix, float* angles);
		virtual float* rotateYZX(float* out, long long* matrix, float* angles);
		virtual float* rotateYZX(float* out, __int128* matrix, float* angles);
		virtual float* rotateYZX(float* out, float* matrix, float* angles);
		virtual double* rotateYZX(double* out, char* matrix, double* angles);
		virtual double* rotateYZX(double* out, short* matrix, double* angles);
		virtual double* rotateYZX(double* out, int* matrix, double* angles);
		virtual double* rotateYZX(double* out, long long* matrix, double* angles);
		virtual double* rotateYZX(double* out, __int128* matrix, double* angles);
		virtual double* rotateYZX(double* out, float* matrix, double* angles);
		virtual double* rotateYZX(double* out, double* matrix, double* angles);
		virtual __float128* rotateYZX(__float128* out, char* matrix, __float128* angles);
		virtual __float128* rotateYZX(__float128* out, short* matrix, __float128* angles);
		virtual __float128* rotateYZX(__float128* out, int* matrix, __float128* angles);
		virtual __float128* rotateYZX(__float128* out, long long* matrix, __float128* angles);
		virtual __float128* rotateYZX(__float128* out, __int128* matrix, __float128* angles);
		virtual __float128* rotateYZX(__float128* out, float* matrix, __float128* angles);
		virtual __float128* rotateYZX(__float128* out, double* matrix, __float128* angles);
		virtual __float128* rotateYZX(__float128* out, __float128* matrix, __float128* angles);

		virtual float* rotateZX(float* out, char* matrix, float* angles);
		virtual float* rotateZX(float* out, short* matrix, float* angles);
		virtual float* rotateZX(float* out, int* matrix, float* angles);
		virtual float* rotateZX(float* out, long long* matrix, float* angles);
		virtual float* rotateZX(float* out, __int128* matrix, float* angles);
		virtual float* rotateZX(float* out, float* matrix, float* angles);
		virtual double* rotateZX(double* out, char* matrix, double* angles);
		virtual double* rotateZX(double* out, short* matrix, double* angles);
		virtual double* rotateZX(double* out, int* matrix, double* angles);
		virtual double* rotateZX(double* out, long long* matrix, double* angles);
		virtual double* rotateZX(double* out, __int128* matrix, double* angles);
		virtual double* rotateZX(double* out, float* matrix, double* angles);
		virtual double* rotateZX(double* out, double* matrix, double* angles);
		virtual __float128* rotateZX(__float128* out, char* matrix, __float128* angles);
		virtual __float128* rotateZX(__float128* out, short* matrix, __float128* angles);
		virtual __float128* rotateZX(__float128* out, int* matrix, __float128* angles);
		virtual __float128* rotateZX(__float128* out, long long* matrix, __float128* angles);
		virtual __float128* rotateZX(__float128* out, __int128* matrix, __float128* angles);
		virtual __float128* rotateZX(__float128* out, float* matrix, __float128* angles);
		virtual __float128* rotateZX(__float128* out, double* matrix, __float128* angles);
		virtual __float128* rotateZX(__float128* out, __float128* matrix, __float128* angles);

		virtual float* rotateZY(float* out, char* matrix, float* angles);
		virtual float* rotateZY(float* out, short* matrix, float* angles);
		virtual float* rotateZY(float* out, int* matrix, float* angles);
		virtual float* rotateZY(float* out, long long* matrix, float* angles);
		virtual float* rotateZY(float* out, __int128* matrix, float* angles);
		virtual float* rotateZY(float* out, float* matrix, float* angles);
		virtual double* rotateZY(double* out, char* matrix, double* angles);
		virtual double* rotateZY(double* out, short* matrix, double* angles);
		virtual double* rotateZY(double* out, int* matrix, double* angles);
		virtual double* rotateZY(double* out, long long* matrix, double* angles);
		virtual double* rotateZY(double* out, __int128* matrix, double* angles);
		virtual double* rotateZY(double* out, float* matrix, double* angles);
		virtual double* rotateZY(double* out, double* matrix, double* angles);
		virtual __float128* rotateZY(__float128* out, char* matrix, __float128* angles);
		virtual __float128* rotateZY(__float128* out, short* matrix, __float128* angles);
		virtual __float128* rotateZY(__float128* out, int* matrix, __float128* angles);
		virtual __float128* rotateZY(__float128* out, long long* matrix, __float128* angles);
		virtual __float128* rotateZY(__float128* out, __int128* matrix, __float128* angles);
		virtual __float128* rotateZY(__float128* out, float* matrix, __float128* angles);
		virtual __float128* rotateZY(__float128* out, double* matrix, __float128* angles);
		virtual __float128* rotateZY(__float128* out, __float128* matrix, __float128* angles);

		virtual float* rotateZXY(float* out, char* matrix, float* angles);
		virtual float* rotateZXY(float* out, short* matrix, float* angles);
		virtual float* rotateZXY(float* out, int* matrix, float* angles);
		virtual float* rotateZXY(float* out, long long* matrix, float* angles);
		virtual float* rotateZXY(float* out, __int128* matrix, float* angles);
		virtual float* rotateZXY(float* out, float* matrix, float* angles);
		virtual double* rotateZXY(double* out, char* matrix, double* angles);
		virtual double* rotateZXY(double* out, short* matrix, double* angles);
		virtual double* rotateZXY(double* out, int* matrix, double* angles);
		virtual double* rotateZXY(double* out, long long* matrix, double* angles);
		virtual double* rotateZXY(double* out, __int128* matrix, double* angles);
		virtual double* rotateZXY(double* out, float* matrix, double* angles);
		virtual double* rotateZXY(double* out, double* matrix, double* angles);
		virtual __float128* rotateZXY(__float128* out, char* matrix, __float128* angles);
		virtual __float128* rotateZXY(__float128* out, short* matrix, __float128* angles);
		virtual __float128* rotateZXY(__float128* out, int* matrix, __float128* angles);
		virtual __float128* rotateZXY(__float128* out, long long* matrix, __float128* angles);
		virtual __float128* rotateZXY(__float128* out, __int128* matrix, __float128* angles);
		virtual __float128* rotateZXY(__float128* out, float* matrix, __float128* angles);
		virtual __float128* rotateZXY(__float128* out, double* matrix, __float128* angles);
		virtual __float128* rotateZXY(__float128* out, __float128* matrix, __float128* angles);

		virtual float* rotateZYX(float* out, char* matrix, float* angles);
		virtual float* rotateZYX(float* out, short* matrix, float* angles);
		virtual float* rotateZYX(float* out, int* matrix, float* angles);
		virtual float* rotateZYX(float* out, long long* matrix, float* angles);
		virtual float* rotateZYX(float* out, __int128* matrix, float* angles);
		virtual float* rotateZYX(float* out, float* matrix, float* angles);
		virtual double* rotateZYX(double* out, char* matrix, double* angles);
		virtual double* rotateZYX(double* out, short* matrix, double* angles);
		virtual double* rotateZYX(double* out, int* matrix, double* angles);
		virtual double* rotateZYX(double* out, long long* matrix, double* angles);
		virtual double* rotateZYX(double* out, __int128* matrix, double* angles);
		virtual double* rotateZYX(double* out, float* matrix, double* angles);
		virtual double* rotateZYX(double* out, double* matrix, double* angles);
		virtual __float128* rotateZYX(__float128* out, char* matrix, __float128* angles);
		virtual __float128* rotateZYX(__float128* out, short* matrix, __float128* angles);
		virtual __float128* rotateZYX(__float128* out, int* matrix, __float128* angles);
		virtual __float128* rotateZYX(__float128* out, long long* matrix, __float128* angles);
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
