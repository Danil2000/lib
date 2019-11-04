#include "libmx.h"

int mx_count_words(const char *str, char c) {
	
	if (str == 0)
	{
		return -1;	
	}
	int len = mx_strlen(str);
	int lastC = str[0];
	int count  = 0;
	for (int i = 0; i < len; i++)
	{
		if ((str[i]== c || str[i]=='\0') && lastC != c)
		{
			count++;
		}
		lastC = str[i];
	}
	return count;
}
