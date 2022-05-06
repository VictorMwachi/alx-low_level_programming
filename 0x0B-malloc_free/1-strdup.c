#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - function returns a pointer to a new string which is a duplicate of the string str. Memory for the new string is obtained with malloc, and can be freed with free
 * @str: dtring to be duplicated
 * Return: eturns a pointer to the duplicated string. It returns NULL if insufficient memory was available
 */
char *_strdup(char *str)
{
	int i, len;
	char *new;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	new = malloc(sizeof(char) * len);
	/*check if malloc success*/
	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len; i++)
	{
		new[i] = str[i];
	}
	new[len] = '\0';
	return (new);
}
