#include "libmx.h"

char *mx_strtrim(const char *str) {
	
	if (!str)
	{
		return 0;
	}
	int lspaces = 0;
	int rspaces = 0;
	int strlen = mx_strlen(str);
	char *res = NULL;

	for (int i = 0; i < strlen; i++)
	{
		if(mx_isspace(str[i])) {
			lspaces++;
			continue;
		}
		break;
	}
	for (int i = strlen; i >= 0; i--)
	{
		if(mx_isspace(str[i])) {
			rspaces++;
			continue;
		}
		break;
	}
	if (lspaces == strlen)
	{
		return mx_strnew(0);
	}

	res = mx_strnew(strlen - lspaces - rspaces);
	return mx_strncpy(res, str + lspaces, strlen - lspaces - rspaces);
}


