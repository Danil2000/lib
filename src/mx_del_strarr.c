#include "libmx.h"

void mx_del_strarr (char ***arr) {
	char **res = *arr;
	while (res) {
		mx_strdel(res);
		res++;
	}
	free(*arr);
	*arr = NULL;
}
