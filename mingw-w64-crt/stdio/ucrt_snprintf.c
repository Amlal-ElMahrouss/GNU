/**
 * This file has no copyright assigned and is placed in the Public Domain.
 * This file is part of the mingw-w64 runtime package.
 * No warranty is given; refer to the file DISCLAIMER.PD within this package.
 */

#undef __MSVCRT_VERSION__
#define __MSVCRT_VERSION__ 0x1400
#include <stdio.h>

int snprintf (char * __restrict__ __stream, size_t __n, const char * __restrict__ __format, ...)
{
  __builtin_va_list ap;
  int ret;
  __builtin_va_start(ap, __format);
  ret = __stdio_common_vsprintf(UCRTBASE_PRINTF_STANDARD_SNPRINTF_BEHAVIOUR, __stream, __n, __format, NULL, ap);
  __builtin_va_end(ap);
  return ret;
}
