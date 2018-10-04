#include "streamutils.h"

using namespace ctm;

byteposition::byteposition(bitposition* bip) { this->bip = bip; this->updatepos = true; this->updatelimit = true; };
byteposition::byteposition() : byteposition((size_t)0) { };
byteposition::byteposition(const size_t& pos) : byteposition(pos, SIZE_LIMIT) { };
byteposition::byteposition(const size_t& pos, const size_t& limit) { this->pos = pos; this->limit = limit; this->bip = new bitposition(this); this->updatepos = false; this->updatelimit = false; }
byteposition::~byteposition() { this->deconstructing = true; if(!this->bip->deconstructing) delete this->bip; }

void byteposition::update() { if(this->updatepos) { this->pos = this->bip->pos / 8; this->updatepos = false; } if(this->updatelimit) { this->limit = this->bip->limit / 8; this->updatelimit = false; } }
const size_t& byteposition::getlimit() { this->update(); return this->limit; }
const size_t& byteposition::setlimit(const size_t& limit) { if(this->limit != limit) { if((this->updatepos ? this->bip->pos / 8 : this->pos) > limit) { this->updatepos = false; this->pos = limit; this->bip->updatepos = true; } this->limit = limit; this->bip->updatelimit = true; } return limit; }
size_t byteposition::remaining() { this->update(); return this->limit - this->pos; }

byteposition::operator bitposition&() const { return *(this->bip); }
byteposition::operator const size_t&() { this->update(); return this->pos; }
size_t byteposition::operator ++(int) { size_t pos = this->pos; ++(*this); return pos; }
byteposition& byteposition::operator ++() { this->update(); if(this->pos != this->limit) this->pos++; this->bip->updatepos = true; return *this; }
size_t byteposition::operator --(int) { size_t pos = this->pos; --(*this); return pos; }
byteposition& byteposition::operator --() { this->update(); if(this->pos != 0) this->pos--; this->bip->updatepos = true; return *this; }
byteposition& byteposition::operator +=(const size_t& by) { this->update(); if(this->limit - by > this->pos) this->pos += by; else this->pos = this->limit; this->bip->updatepos = true; return *this; }
byteposition& byteposition::operator -=(const size_t& by) { this->update(); if(by < this->pos) this->pos -= by; else this->pos = 0; this->bip->updatepos = true; return *this; }
byteposition& byteposition::operator =(const size_t& to) { this->updatepos = false; if(this->limit > to) this->pos = to; else this->pos = this->limit; this->bip->updatepos = true; return *this; }
bool byteposition::operator ==(const byteposition& to) const { return this->pos == to.pos; }

bitposition::bitposition(byteposition* byp) { this->byp = byp; this->updatepos = true; this->updatelimit = true; };
bitposition::bitposition() : bitposition((lsize_t)0) { };
bitposition::bitposition(const lsize_t& pos) : bitposition(pos, (lsize_t)SIZE_LIMIT * 8 + 7) { };
bitposition::bitposition(const lsize_t& pos, const lsize_t& limit) { this->pos = pos; this->limit = limit; this->byp = new byteposition(this); this->updatepos = false; this->updatelimit = false; }
bitposition::~bitposition() { this->deconstructing = true; if(!this->byp->deconstructing) delete this->byp; }

void bitposition::update() { if(this->updatepos) { this->pos = (lsize_t)this->byp->pos * 8; this->updatepos = false; } if(this->updatelimit) { this->limit = (lsize_t)this->byp->limit * 8 + 7; this->updatelimit = false; } }
const lsize_t& bitposition::getlimit() { this->update(); return this->limit; }
const lsize_t& bitposition::setlimit(const lsize_t& limit) { if(this->limit != limit) { this->updatelimit = false; if((this->updatepos ? (lsize_t)this->byp->pos * 8 : this->pos) > limit) { this->updatepos = false; this->pos = limit; this->byp->updatepos = true; } this->limit = limit; this->byp->updatelimit = true; } return limit; }
size_t bitposition::remaining() { this->update(); return this->limit - this->pos; }

bitposition::operator byteposition&() const { return *(this->byp); }
bitposition::operator const lsize_t&() { this->update(); return this->pos; }
lsize_t bitposition::operator ++(int) { lsize_t pos = this->pos; ++(*this); return pos; }
bitposition& bitposition::operator ++() { this->update(); if(this->pos != this->limit) this->pos++; this->byp->updatepos = true; return *this; }
lsize_t bitposition::operator --(int) { lsize_t pos = this->pos; --(*this); return pos; }
bitposition& bitposition::operator --() { this->update(); if(this->pos != 0) this->pos--; this->byp->updatepos = true; return *this; }
bitposition& bitposition::operator +=(const lsize_t& by) { this->update(); if(this->limit - by > this->pos) this->pos += by; else this->pos = this->limit; this->byp->updatepos = true; this->byp->updatepos = true; return *this; }
bitposition& bitposition::operator -=(const lsize_t& by) { this->update(); if(by < this->pos) this->pos -= by; else this->pos = 0; this->byp->updatepos = true; return *this; }
bitposition& bitposition::operator =(const lsize_t& to) { this->updatepos = false; if(this->limit > to) this->pos = to; else this->pos = this->limit; this->byp->updatepos = true; return *this; }
