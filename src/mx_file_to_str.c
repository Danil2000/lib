 #include "libmx.h"

 char *mx_file_to_str(const char *file) {
 	int read_file = open(file, O_RDONLY);
 	if(read_file < 0)
  		return NULL;
 //чтение - запись
 	int i = 0;
 	int size_file = 0;
 	char buffer[1];

	while(read(read_file, buffer, 1)) {
 		size_file++;
 	}
 	if (close(read_file) < 0)
  		return NULL;

 	char *str = mx_strnew(size_file);

 	int read_file2 = open(file, O_RDONLY);

 	while(size_file) {
  		read(read_file2, buffer, 1);
  		str[i] = buffer[0];
 		i++;
  		size_file--;
 	}
 	if (close(read_file2) < 0)
  		return NULL;
 	return str;
}

