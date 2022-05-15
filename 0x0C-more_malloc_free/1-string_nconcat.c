#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - concatenates 2 string
 * @s1: first string
 * @s2:second string
 * @n: number of bytes
 * Return: pointer to new memory location
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int i, j, k, m, a;

	i = j = a = 0;
	while (s1[i] != '\0')
	{
		i++;
	}
	while (s2[j] != '\0')
	{
		j++;
	}
	if (n >= j)
		n = j;
	p = malloc(sizeof(char) * (i + n + 1));
	if (p == NULL)
	{
		return (NULL);
	}
	for (k = 0; k < i; k++)
		{
			p[k] = s1[k];
		}
		for (m = i; m < i + n; m++)
		{
			p[m] = s2[a];
			a++;
		}
		p[i+n] = '\0';
	return (p);
}
