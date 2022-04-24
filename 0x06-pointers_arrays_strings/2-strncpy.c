#include "main.h"
/**
 * _strncpy - copys a string
 * @dest: string to be appended
 * @src:second string
 * @n: number of bytes
 * Return: retuns the resulting string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{i++; }
	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		j++;
		i++;
	}dest[i] = '\0';
}
