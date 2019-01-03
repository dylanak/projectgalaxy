#include "streamutils.h"

using namespace ctm;

const size_t size_limit = std::numeric_limits<size_t>::max();
const lsize_t lsize_limit = std::numeric_limits<lsize_t>::max();

byteposition::byteposition(bitposition* bip) : bip(bip), updatepos(true), updatelimit(true) { };
byteposition::byteposition() : byteposition((size_t)0) { };
byteposition::byteposition(const size_t& pos) : byteposition(pos, size_limit) { };
byteposition::byteposition(const size_t& pos, const size_t& limit) : pos(pos), limit(limit), bip(new bitposition(this)), updatepos(false), updatelimit(false) { }
byteposition::~byteposition() { this->deconstructing = true; if(!this->bip->deconstructing) delete this->bip; }

#ifndef CTM_STREAM_BYTEUPDATE
#define CTM_STREAM_BYTEUPDATE if(this->updatepos) { this->pos = this->bip->pos / 8; this->updatepos = false; } if(this->updatelimit) { this->limit = this->bip->limit / 8; this->updatelimit = false; }
#endif
const size_t& byteposition::getlimit() { CTM_STREAM_BYTEUPDATE; return this->limit; }
const size_t& byteposition::setlimit(const size_t& limit) { if(this->limit != limit) { this->updatelimit = false; if(this->updatepos) { this->pos = this->bip->pos / 8; this->updatepos = false; } if(this->pos > limit) { this->pos = limit; this->bip->updatepos = true; } this->limit = limit; this->bip->updatelimit = true; } return limit; }
size_t byteposition::remaining() { CTM_STREAM_BYTEUPDATE; return this->limit - this->pos; }

byteposition::operator bitposition&() const { return *(this->bip); }
byteposition::operator const size_t&() { CTM_STREAM_BYTEUPDATE; return this->pos; }
size_t byteposition::operator ++(int) { size_t pos = this->pos; ++(*this); return pos; }
byteposition& byteposition::operator ++() { CTM_STREAM_BYTEUPDATE; if(this->pos != this->limit) this->pos++; this->bip->updatepos = true; return *this; }
size_t byteposition::operator --(int) { size_t pos = this->pos; --(*this); return pos; }
byteposition& byteposition::operator --() { CTM_STREAM_BYTEUPDATE; if(this->pos != 0) this->pos--; this->bip->updatepos = true; return *this; }
byteposition& byteposition::operator +=(const size_t& by) { CTM_STREAM_BYTEUPDATE; if(this->limit - by > this->pos) this->pos += by; else this->pos = this->limit; this->bip->updatepos = true; return *this; }
byteposition& byteposition::operator -=(const size_t& by) { CTM_STREAM_BYTEUPDATE; if(by < this->pos) this->pos -= by; else this->pos = 0; this->bip->updatepos = true; return *this; }
byteposition& byteposition::operator =(const size_t& to) { this->updatepos = false; if(this->limit > to) this->pos = to; else this->pos = this->limit; this->bip->updatepos = true; return *this; }
bool byteposition::operator ==(const byteposition& to) const { return this->pos == to.pos; }

bitposition::bitposition(byteposition* byp) : byp(byp), updatepos(true), updatelimit(true) { };
bitposition::bitposition() : bitposition((lsize_t)0) { };
bitposition::bitposition(const lsize_t& pos) : bitposition(pos, (lsize_t)size_limit * 8) { };
bitposition::bitposition(const lsize_t& pos, const lsize_t& limit) : pos(pos), limit(limit), byp(new byteposition(this)), updatepos(false), updatelimit(false) { }
bitposition::~bitposition() { this->deconstructing = true; if(!this->byp->deconstructing) delete this->byp; }

#ifndef CTM_STREAM_BITUPDATE
#define CTM_STREAM_BITUPDATE if(this->updatepos) { this->pos = (lsize_t)this->byp->pos * 8; this->updatepos = false; } if(this->updatelimit) { this->limit = (lsize_t)this->byp->limit * 8; this->updatelimit = false; }
#endif
const lsize_t& bitposition::getlimit() { CTM_STREAM_BITUPDATE; return this->limit; }
const lsize_t& bitposition::setlimit(const lsize_t& limit) { if(this->limit != limit) { this->updatelimit = false; if(this->updatepos) { this->pos = (lsize_t)this->byp->pos * 8; this->updatepos = false; } if(this->pos > limit) { this->pos = limit; this->byp->updatepos = true; } this->limit = limit; this->byp->updatelimit = true; } return limit; }
lsize_t bitposition::remaining() { CTM_STREAM_BITUPDATE; return this->limit - this->pos; }

bitposition::operator byteposition&() const { return *(this->byp); }
bitposition::operator const lsize_t&() { CTM_STREAM_BITUPDATE; return this->pos; }
lsize_t bitposition::operator ++(int) { lsize_t pos = this->pos; ++(*this); return pos; }
bitposition& bitposition::operator ++() { CTM_STREAM_BITUPDATE; if(this->pos != this->limit) this->pos++; this->byp->updatepos = true; return *this; }
lsize_t bitposition::operator --(int) { lsize_t pos = this->pos; --(*this); return pos; }
bitposition& bitposition::operator --() { CTM_STREAM_BITUPDATE; if(this->pos != 0) this->pos--; this->byp->updatepos = true; return *this; }
bitposition& bitposition::operator +=(const lsize_t& by) { CTM_STREAM_BITUPDATE; if(this->limit - by > this->pos) this->pos += by; else this->pos = this->limit; this->byp->updatepos = true; this->byp->updatepos = true; return *this; }
bitposition& bitposition::operator -=(const lsize_t& by) { CTM_STREAM_BITUPDATE; if(by < this->pos) this->pos -= by; else this->pos = 0; this->byp->updatepos = true; return *this; }
bitposition& bitposition::operator =(const lsize_t& to) { this->updatepos = false; if(this->limit > to) this->pos = to; else this->pos = this->limit; this->byp->updatepos = true; return *this; }
