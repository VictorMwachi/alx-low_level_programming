#include "main.h"
/**
 * malloc_checked - allocates memory using malloc
 * @b: integer to be stored
 * Return: nothing
 */
void *malloc_checked(unsigned int b)
{
	int *p;
	p = malloc(sizeof(unsigned int) * b);
	if (p == NULL)
	{
		free(p);
		exit (98);
	}
}
