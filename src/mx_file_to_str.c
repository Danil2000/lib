 #include "libmx.h"

 char *mx_file_to_str(const char *file) {
 	int fp;
 	char * str = mx_strnew(999);
 	fp = open(file, O_RDONLY);
 	if (fp)
 	{
 		read(fp, str, 100);
 	}
 	return str;
 }
