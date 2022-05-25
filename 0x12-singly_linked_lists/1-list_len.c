#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * list_len - finds the number of nodes in a list
 * @h: singly linked list
 * Return: number of elements in a linked list
 */
size_t list_len(const list_t *h)
{
	unsigned int i;
	const list_t *temp;
	
	temp = h;
	for (i = 0; temp; i++)
		temp = temp->next;
	return (i);
}
