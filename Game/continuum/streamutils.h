#ifndef _CTM_STREAMUTILS_H
#define _CTM_STREAMUTILS_H
#include <crtdefs.h>
#include <limits>
#include <stdint.h>

typedef unsigned __int128 lsize_t;

extern const size_t size_limit;
extern const lsize_t lsize_limit;

namespace ctm
{
	class bitposition;
	class byteposition
	{
		private:
			byteposition(bitposition* byp);
			byteposition(byteposition&);

			size_t pos = 0;
			size_t limit = 0;
			bitposition* bip;
			bool updatepos;
			bool updatelimit;
			bool deconstructing = false;

			byteposition& operator=(const byteposition&);
		public:
			byteposition();
			byteposition(const size_t& pos);
			byteposition(const size_t& pos, const size_t& limit);
			~byteposition();

			const size_t& getlimit();
			const size_t& setlimit(const size_t& limit);
			size_t remaining();

			operator bitposition&() const;
			operator const size_t&();
			size_t operator ++(int);
			byteposition& operator ++();
			size_t operator --(int);
			byteposition& operator --();
			byteposition& operator +=(const size_t& by);
			byteposition& operator -=(const size_t& by);
			byteposition& operator =(const size_t& to);
			bool operator ==(const byteposition& to) const;

			friend class bitposition;
	};

	class bitposition
	{
		private:
			bitposition(byteposition* byp);
			bitposition(bitposition&);

			lsize_t pos = 0;
			lsize_t limit = 0;
			byteposition* byp;
			bool updatepos;
			bool updatelimit;
			bool deconstructing = false;

			bitposition& operator=(const bitposition&);
		public:
			bitposition();
			bitposition(const lsize_t& pos);
			bitposition(const lsize_t& pos, const lsize_t& limit);
			~bitposition();

			const lsize_t& getlimit();
			const lsize_t& setlimit(const lsize_t& limit);
			lsize_t remaining();

			operator byteposition&() const;
			operator const lsize_t&();
			lsize_t operator ++(int);
			bitposition& operator ++();
			lsize_t operator --(int);
			bitposition& operator --();
			bitposition& operator +=(const lsize_t& by);
			bitposition& operator -=(const lsize_t& by);
			bitposition& operator =(const lsize_t& to);

			friend class byteposition;
	};

	template<class T, T d = 0>
	T readbytesequence(const uint8_t* const buffer, byteposition& by, const size_t& bytes)
	{
		T t = d;
		lsize_t bits = (lsize_t)bytes * 8;
		for(lsize_t i = 0; i < bits; i += 8)
			t |= (buffer[by++] << i);
		return (t & ~(~0 << (bytes * 8))) | d;
	}
	bool readbit(const uint8_t* const buffer, bitposition& bi);
	template<class T, T d = 0>
	T readbitsequence(const uint8_t* const buffer, bitposition& bi, const lsize_t& bits)
	{
		T t = d;
		byteposition& by = bi;
		uint8_t firstbits = bi & 7;
		if(firstbits != 0)
			t |= buffer[by++] >> (firstbits);
		for(lsize_t i = (8 - firstbits) & 7; i < bits; bi += std::min<lsize_t>(8, bits - i), i += 8)
			t |= (buffer[by] << i);
		return (t & ~(~0 << bits)) | d;
	}
}
#endif
