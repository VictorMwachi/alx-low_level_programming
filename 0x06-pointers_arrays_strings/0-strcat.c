#include "main.h"
#include <stdio.h>
/**
 * _strcat - concatenates two strings
 * @dest: holds a string to merged
 * @src: holds the other string to be meged
 * Return: returns pointer to the resulting string
 */
char *_strcat(char *dest, char *src)
{
	int i = strlen(dest) - 1, j = 0;
	
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
