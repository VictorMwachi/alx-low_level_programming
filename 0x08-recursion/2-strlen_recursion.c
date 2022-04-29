#include "main.h"
/**
 * _strlen_recursion -returns the length of a string
 * @s: strings length to be determined
 * Return: lenth integer is returned
 */
int _strlen_recursion(char *s)
{
	if (*s)
	{
		s++;
		return (1 + _strlen_recursion(s));
	}
}

