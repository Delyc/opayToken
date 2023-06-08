#ifndef restricted_digit_set_mode_h
#define restricted_digit_set_mode_h

#if (defined(__APPLE__) && defined(__MACH__)) /* MacOS X Framework build */
#include <sys/types.h>
#endif

#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>

uint32_t ConvertFromFourDigitToken(uint64_t FourDigitToken);

#endif
