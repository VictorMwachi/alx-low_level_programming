#include "main.h"
#include <stddef.h>
/**
 * _strchr -  locates a character in a string
 * @s: string of characters
 * @c: character to ve located in string s
 * Return: Returns a pointer to the first occurrence of the character c in the string s, or NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (NULL);
}
