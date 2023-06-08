#ifndef siphash_h
#define siphash_h

#include <stdio.h>
#include "stdint.h"

uint64_t siphash24(const void* src, unsigned long src_sz,
                   unsigned char key[16]);

#endif
