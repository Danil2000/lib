#include "libmx.h"

int mx_coun_len_space(char *str_new) {
	int i = 0;
	int len_end = 0;
	char *str = mx_strtrim(str_new);

	while (str[i]) {
    	if (!mx_isspace(str[i]))
    	   	len_end++;
 
    	if (mx_isspace(str[i])){
    		len_end++;

    		while(mx_isspace(str[i + 1]))
    			i++;
    	}
    	i++;
    }
    free(str);
  //free(str_new);
    return len_end;
}

char *mx_del_extra_spaces(const char *str) {

	int i = 0;
	int j = 0;
    if (!str)
        return NULL;

	char *str_start = mx_strtrim(str);

	//cчитаем число символов конечного файла без лишних пробелов, чтобы выделить ему память
	int len_end = mx_coun_len_space(str_start);
    char *str_end = mx_strnew(len_end);

    while (str_start[i]) {
    	if (!mx_isspace(str_start[i])) {
    		str_end[j] = str_start[i];
    	   	i++;
    		j++;
    	}
    	if (mx_isspace(str_start[i])){
    		str_end[j] = ' ';
    		j++;

    		while(mx_isspace(str_start[i + 1])) {
    			i++;
    		}
    		i++;
    	}

    }
    free(str_start);
    return str_end;
}
