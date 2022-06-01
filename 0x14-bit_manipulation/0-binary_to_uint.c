#include "main.h"
/**
 * binary_to_uint - converts binary number to unsigned int
 * @b: string pointer
 * Return: he converted number, or 0 if
 * there is one or more chars in the string b that is not 0 or 1 b is NULL
 */
unsigned int _stoi(char c)
{
		return ((unsigned int) c - '0');
}
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
unsigned int binary_to_uint(const char *b)
{
	int i = 0, l;
	unsigned int bin = 0;

	if (!b)
		return (0);
	while (b[i] != '\0')
		if (b[i] =='0' || b[i] == '1')
		{
			i++;
		}
		else
			return (0);
	for (l = 0; l < i && b[l] !='\0'; l++)
	{
		bin +=_stoi(b[l])*_pow(2,i);
		i--;
	}
	return (bin);
}
