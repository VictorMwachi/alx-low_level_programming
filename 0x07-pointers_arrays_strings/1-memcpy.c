#include "main.h"
/**
 * _memcpy - copies n bytes from memory area src to memory area dest
 * @dest: memory area bytes copied to be stored
 * @src: memory area containing bytes to be copied
 * @n: no of bytes to be copied
 *Return: Returns a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0, j = 0;

	while (dest != '\0')
	{i++; }	
	while (src[j] != '\0')
	{dest[i] = src[j];
	j++;
	i++; }
	return (dest); }
