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
	listint_t *new, *temp;

	if (!*head)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	for (i = 0; i < idx; i++)
		head = head->next;
	new->n = n;
	new->next = *head;
	temp->next=new;
	*head = temp;
}
