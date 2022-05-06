#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars, and initializes it with a specific char
 * @size:
 * @c:
 * Return:
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	int i;

	if (size == 0)
	{return (NULL); }

	arr = malloc(sizeof(char) * size);
	/*check if malloc was succesfull*/
	if (arr == NULL)
	{return (NULL); }
	for (i = 0; i < size; i++)
	{arr[i] = c; }
	return (arr);
}
