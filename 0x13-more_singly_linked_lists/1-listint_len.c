#include "lists.h"
/**
 * listint_len - returns the number of elements in a linked listint_t list
 * @h: pointer to the list
 * Return: number of elements in the list
 */
size_t listint_len(const listint_t *h)
{
	size_t n;
	int count = 0;

	for (n = 0; h != NULL; n++)
	{
		if (h->n != NULL)
			count++;
	}
	return (count);
}
