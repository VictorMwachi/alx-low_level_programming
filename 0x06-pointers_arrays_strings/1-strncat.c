#include "main.h"
/**
 * _strncat - concatenates two strings
 * @dest: holds a string to merged
 * @src: holds the other string to be meged
 * @n: number of bytes from second string
 * Return: returns pointer to the resulting string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
