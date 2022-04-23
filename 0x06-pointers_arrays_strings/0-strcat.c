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
	int i, len1 = strlen(dest), len2 = strlen(src) - 1;
	for (i = 0; i <= len2; i++)
	{
		if (src[i] != '\0')
		{dest[len1] = src[i];
		len1++;
		}
		else
		{
			dest[len1] = '\0';
		}
	}
	return (dest);
}
