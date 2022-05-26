#include "lists.h"
#include <stdio.h>
/**
 * print_list - prints all elements of a list_t list
 * @h: singly linked list to print
 * Return: number of nodes in the list
 */
size_t print_list(const list_t *h)
{
	size_t n = 0;
	
	if (h == NULL)
		return (-1);
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		n++;
	}
	return (n);
}
