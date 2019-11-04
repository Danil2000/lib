#include "libmx.h"

void mx_pop_front(t_list **head) {
	t_list *next = NULL;
	if (!head)
	{
		return;
	}
	next = (*head)->next;
	(*head)->data = NULL;
	free(head);
	*head = next;
}
