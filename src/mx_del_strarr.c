#include "libmx.h"

void mx_del_strarr (char ***arr) {
	for (int i = 0; i < mx_strlen(**arr); ++i)
	{
		mx_strdel(arr[i]);
	}
}
