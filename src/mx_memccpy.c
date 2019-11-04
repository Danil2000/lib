#include "libmx.h"

void *mx_memccpy(void *restrict dst, const void *restrict src, int c, size_t n) {
	void *p = mx_memchr (src, c, n);
	  if (p != NULL)
    	return mx_mempcpy (dst, src, (((int)p) - ((int)src) + 1));
	
	  memcpy (dst, src, n);
	  return NULL;
}
