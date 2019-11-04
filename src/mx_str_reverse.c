#include "libmx.h"

void mx_str_reverse (char *s) {
	int len = mx_strlen(s);
	//mx_printint(count);
	for (int i = 0; i < len /2; i++)
	{
			 mx_swap_char(&s[i], &s[len - i -1]);
	}
}
