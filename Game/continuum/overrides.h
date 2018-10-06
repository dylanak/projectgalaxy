#ifndef _CTM_OVERRIDES_H
#define _CTM_OVERRIDES_H
#include <ostream>

const char DIGITS[10] { '0', '1', '2', '3', '4', '5', '6', '7', '8', '9' };

typedef unsigned char digit_t;

std::ostream& operator <<(std::ostream& stream, __int128_t val);

std::ostream& operator <<(std::ostream& stream, __uint128_t val);
#endif
