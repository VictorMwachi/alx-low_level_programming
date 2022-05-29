#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: pointer of the listint
 * @index: index of the node
 * Return: if the node does not exist, return NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	if (!head)
		return (NULL);
	for (i = 0; i < index; i++)
		head = head->next;
	return (head);
}

