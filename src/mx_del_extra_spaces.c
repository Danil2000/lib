#include "libmx.h"

int mx_count_len_without_space(char *str) {
	int len = 0;
	for (int i = 0; i < mx_strlen(str) - 1; i++)
    {
        if(mx_isspace(str[i]) && mx_isspace(str[i+1])) {
            len++;
        }
    }
    return mx_strlen(str) - len;
}

char *mx_del_extra_spaces(const char *str) {
    if (!str){
        return NULL;
    }

	char *str_trim = mx_strtrim(str);
	int reslen = mx_count_len_without_space(str_trim);
    char *res = mx_strnew(reslen);
    int c = 0;

    if (!res)
    {
       return NULL;
    }

    if (!str_trim)
    {
        return (char *) str;
    }

    for (int i = 0; i < mx_strlen(str_trim); i++)
    {
        if (!mx_isspace(str_trim[i]))
        {
            res[c] = str_trim[i];
            c++;
        }
        else if (!mx_isspace(str_trim[i + 1])) {
            res[c] = ' ';
            c++;
        }
    }
    //mx_strdel(&str_trim);
    return res;
}
