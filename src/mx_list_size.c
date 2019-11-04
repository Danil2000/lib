#include "libmx.h"

int mx_list_size(t_list *list) {
	t_list *current = list;
	int count = 0;
	while(current->next != NULL) {
		current = current->next;
		count++;
	}
	count++;
	return count;
}

