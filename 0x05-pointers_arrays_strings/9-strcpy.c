#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strcpy - copys a string
 * @dest:will hold copy of src value
 * @src: contains string to be copied
 * Return: returns dest
 */
char *_strcpy(char *dest, char *src)
{
	int i, len = strlen(src);

	for (i = 0; i <= len; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
