#include "lists.h"
/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: pointer to the listint
 * Return: returns the head node’s data (n)
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;

	if (*head == NULL)
		return (0);
	temp = head->next->next;
	free(head->next);
	head = temp;
	return (*head);
}
