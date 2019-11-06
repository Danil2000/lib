#include "libmx.h"

char *mx_strndup(const char *s1, size_t n) {
	char *dst = NULL;
	size_t len = mx_strlen(s1);

	if (n < len)
	{
		len = n;
	}
	dst = mx_strnew((int) len);
	return mx_strncpy(dst, s1, len);
}
