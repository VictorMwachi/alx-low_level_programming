#include "lists.h"
/**
 * add_nodeint_end - adds a new node at the end of lit
 * @n: the integer to be inserted at the end of list
 * @head: head of the list
 * Return: the laddress of the new element or NULL if failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *temp;

	new = malloc(sizeof(listint));
	if(!new)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}
	temp= *head;
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = new;
	return (*head);
}

			
