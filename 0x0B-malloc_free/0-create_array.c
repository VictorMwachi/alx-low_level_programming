#include "main.h"
#include <stdlib.h>

/**
 * create_array - allocates a char array and fills with byte
 * @size: the size of the char array
 * @c: the default byte filling
 *
 * Return: pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr = (char*)malloc(sizeof(char) * size);

	if (size == 0 || arr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}
