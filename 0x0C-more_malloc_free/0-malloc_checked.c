#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - allocates memory using malloc
 * @b:ize to be allocated
 * Return: return pointer to allocated memory
 **/
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(sizeof(b));
	if (p == NULL)
	{
		exit(98);
	}
	return (p);
}
