#include "libmx.h"

void mx_pop_front(t_list **head) {
	
	if (!head || !*(head))
	{
		return;
	}
	t_list *next = (*head)->next;

	free(head);
	
	(*head)->data = NULL;
	
	*head = next;
}
