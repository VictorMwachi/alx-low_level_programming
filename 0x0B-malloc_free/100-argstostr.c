#include "main.h"
#include <stddef.h>
#include <stdio.h>
/**
 * argstostr - cocatnates all args
 * @ac: size of av
 * @av: arguments
 * Return: return a pointer to new string
 */
char *argstostr(int ac, char **av)
{
	char *s;

	if (!av || ac == 0)
	{
		return (NULL);
	}
	while (*av++)
	{
		s = *av;
		printf('\n');
	}
	return (s);
}
