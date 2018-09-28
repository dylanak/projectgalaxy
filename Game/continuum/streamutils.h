#include <crtdefs.h>
#include <limits>

typedef unsigned __int128 lsize_t;

const size_t SIZE_LIMIT = std::numeric_limits<size_t>::max();
const lsize_t LSIZE_LIMIT = std::numeric_limits<lsize_t>::max();

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
			void setlimit(const size_t& limit);

			operator bitposition&() const;
			operator const size_t&();
			operator bool();
			byteposition& operator ++(int);
			byteposition& operator ++();
			byteposition& operator --(int);
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
			void setlimit(const lsize_t& limit);

			operator byteposition&() const;
			operator const lsize_t&();
			operator bool();
			bitposition& operator ++(int);
			bitposition& operator ++();
			bitposition& operator --(int);
			bitposition& operator --();
			bitposition& operator +=(const lsize_t& by);
			bitposition& operator -=(const lsize_t& by);
			bitposition& operator =(const lsize_t& to);

			friend class byteposition;
	};
}
