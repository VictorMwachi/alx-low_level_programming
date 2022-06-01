#include "main.h"
/*
 * _stoi - convers char to unsigned int
 * @c: character to be converted
 * Return: unsigned int
 */
unsigned int _stoi(char c)
{
		return ((unsigned int) c - '0');
}
/**
 * _pow - returns power
 * @n: base number
 * @e: exponent
 * Return: the result
 */
unsigned int _pow(unsigned int n, unsigned int e)
{
	unsigned int expo = 1;

	while (e > 0)
	{
		expo *= n;
		e--;
	}
	return (expo);
}
/**
 * binary_to_uint - converts binary number to unsigned int
 * @b: string pointer
 * Return: he converted number, or 0 if
 * there is one or more chars in the string b that is not 0 or 1 b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0, l, bin = 0;

	if (!b)
		return (0);
	while (b[i] != '\0')
		if (b[i] == '0' || b[i] == '1')
		{
			i++;
		}
		else
			return (0);
	i = i - 1;
	for (l = 0; l < i ; l++)
	{
		bin += _stoi(b[l]) * _pow(2, i - 1);
		i--;
	}
	return (bin);
}
