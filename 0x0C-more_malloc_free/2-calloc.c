#include "main.h"
#include <stdlib.h>
/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: array
 * @size: size in int
 * Return: pointer to the alocated memeory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int i;
	
	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(sizeof(nmemb) * size);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < nmemb * size; i++)
		*(p + i) = 0;
	return ((void *)p);
}
