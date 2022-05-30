#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: pointer to the listint
 * @idx: index position new node to be inserted
 * @n: integer to be inserted
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *prev, *next, h;
	unsigned int i;

	h = *head;
	if (!h)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	for (i = 0; i < idx; i++)
	{
		if ((i + 1) == idx)
		{
			prev = h;
			next = h->next;
			new->next = h;
			prev->next = new;
			new->next = new;
			h = prev;
		}
	h = h->next;
	}
	return (h);
}
