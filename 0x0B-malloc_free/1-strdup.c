#include "main.h"
#include <stdlib.h>
/**
 * _strdup - function returns a pointer to a new string which is a duplicate of the string str. Memory for the new string is obtained with malloc, and can be freed with free
 * @str: dtring to be duplicated
 * Return: eturns a pointer to the duplicated string. It returns NULL if insufficient memory was available
 */
char *_strdup(char *str)
{
	int i = 0;
	char *new;

	new = malloc(sizeof(str));
	/*chech if malloc success*/
	if (str == NULL || new == NULL)
	{
		return (NULL);
	}
	while (*str)
	{
		new[i] = str[i];
		i++;
	}
	return (new);
}
