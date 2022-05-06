#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * str_concat - concatenates two strings.
 * @s1: string 1
 * @s2: string 2
 * Return: the new string from the two
 */
char *str_concat(char *s1, char *s2)
{
	int i, k, j, n, len;
	char *new;
	
	i = 0;
	k = 0;
	/*check if NULL is passed*/
	if (s1 == NULL || s2 == NULL)
	{
		return (NULL);
	}
	/*find length of s1*/
	while (s1[i] != '\0')
	{
		i++;
	}
	/*find length of s2*/
	while (s2[k] != '\0')
	{
		k++;
	}
	/*length of he new string*/
	len = i + k;
	new = malloc(sizeof(char) * len + 1);
	/*check if malloc wa success*/
	if (new == NULL)
	{
		return (NULL);
	}
	for (j = 0; j < len1; j++)
	{
		new[j] = s1[j];
	}
	for (n = i; n < len; n++)
	{
		new[n] = s2[len - n];
	}
	new[len] = '\0';
	return (new);
}
