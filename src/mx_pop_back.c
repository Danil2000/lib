#include "libmx.h"

void mx_pop_back(t_list **head) {
	if ((*head)->next == NULL)
	{
		(*head)->data = NULL;
		free(*head);
		return;
	}

	t_list *temp = *head;

	while(temp->next->next != NULL) {
		temp = temp->next;
	}
	temp->next->data = NULL;
	free(temp->next);
	temp->next = NULL;
}
