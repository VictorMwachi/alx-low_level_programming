#include "lists.h"
/**
 * free_listint - define function
 * @head:stint pointer
 */
void free_listint(listint_t *head)
{
	if (head == NULL)
		return;
	free_listint(head->next);
	free(head);
}

