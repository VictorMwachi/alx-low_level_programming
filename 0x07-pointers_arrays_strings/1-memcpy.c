#include "main.h"
#include <string.h>
/**
 * _memcpy - copies n bytes from memory area src to memory area dest
 * @dest: memory area bytes copied to be stored
 * @src: memory area containing bytes to be copied
 * @n: no of bytes to be copied
 *Return: Returns a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int j = 0;

	while (src[j] != '\0' && j < n)
	{dest[j] = src[j];
	j++; }
	return (dest); }
