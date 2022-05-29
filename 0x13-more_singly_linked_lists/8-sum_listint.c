#include "lists.h"
/**
 * sum_listint - sums all the data of listint
 * @head: pointer to the list
 * Return: returns the sum or zero if list is empty
 */
int sum_listint(listint_t *head)
{
	int n,sum = 0;

	if (!head)
		return (0);
	else
		while (*head)
			n= head->n;
			sum +=n;
			head = head->next;
	return (sum);
}
