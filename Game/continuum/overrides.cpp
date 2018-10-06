#include "overrides.h"

std::ostream& operator <<(std::ostream& stream, __int128_t val)
{
	std::ostream::sentry s(stream);
	if(s)
	{
		__uint128_t t = val < 0 ? -val : val;
		char buf[128];
		char* b = buf + 128;
		do
		{
			*(--b) = DIGITS[t % 10];
			t /= 10;
		}
		while(t != 0);
		if(val < 0)
			*(--b) = '-';
		digit_t l = buf + 128 - b;
		if(stream.rdbuf()->sputn(b, l) != l) stream.setstate(std::ios_base::badbit);
	}
	return stream;
}

std::ostream& operator <<(std::ostream& stream, __uint128_t val)
{
	std::ostream::sentry s(stream);
	if(s)
	{
		char buf[128];
		char* b = buf + 128;
		do
		{
			*(--b) = DIGITS[val % 10];
			val /= 10;
		}
		while(val != 0);
		if(val < 0)
			*(--b) = '-';
		digit_t l = buf + 128 - b;
		if(stream.rdbuf()->sputn(b, l) != l) stream.setstate(std::ios_base::badbit);
	}
	return stream;
}
