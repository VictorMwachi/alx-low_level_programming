#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - duplicate the string str.
 * @str: dtring to be duplicated
 * Return: eturns a pointer to the duplicated string.
 */
char *_strdup(char *str)
{
	int i, len;
	char *new;

	if (str == NULL)
	{
		return (NULL);
	}
	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	new = malloc(sizeof(char) * len + 1);
	/*check if malloc success*/
	if (new == NULL)
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
