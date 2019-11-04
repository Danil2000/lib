#include "libmx.h"


char *mx_strtrim(const char *str) {
	if (str == 0)
	{
		return 0;
	}
	int end = mx_strlen(str);
	int start = 0;
	while(mx_isspace(str[start])){
		start++;
	}
	while(mx_isspace(str[end-1])){
		end--;
	}
	int d = start - end;
	char *c = mx_strnew(d);

	if (c!=0)
	{
		for (int i = 0; i < d; i++, start++)
		{
			c[i] = str[start];
		}
	}
	return c;
}


