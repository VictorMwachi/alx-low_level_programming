#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars
 * @size:size of the array
 * @c:character to be filled in array
 * Return: Returns a pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	arr = malloc(sizeof(char) * size);
	/*check if malloc was succesfull*/
	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}
