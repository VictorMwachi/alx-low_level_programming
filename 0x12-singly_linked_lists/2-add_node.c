#include "lists.h"
/**
 * add_node - adds a node in the beginning of list
 * @head: head of the list
 * @str: needs to be duplicated
 * Return: returns the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	new_node = (list_t *) malloc(sizeof(list_t));
	new_node->data = str;
	new_node->next= head;
	head = new_node;
	return head;
}
