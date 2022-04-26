#include "main.h"
/**
 * _strchr -  locates a character in a string
 * @s: string of characters
 * @c: character to ve located in string s
 * Return: Returns a pointer to the first occurrence of the character c in the string s, or NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
	int i, n;
	char *f;

	n = strlen(s);
	for (i = 0; i < n; i++)
	{
		if (s[i] == c)
		{
			f = s[i];
			break;
		}
		else
		{
			return (NULL);
		}
	}
	return (f);
}
