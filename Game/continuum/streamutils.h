#ifndef _CTM_STREAMUTILS_H
#define _CTM_STREAMUTILS_H
#include <crtdefs.h>
#include <limits>

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

			void update();

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

			void update();

			bitposition& operator=(const bitposition&);
		public:
			bitposition();
			bitposition(const lsize_t& pos);
			bitposition(const lsize_t& pos, const lsize_t& limit);
			~bitposition();

			const lsize_t& getlimit();
			const lsize_t& setlimit(const lsize_t& limit);
			size_t remaining();

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
}
#endif
