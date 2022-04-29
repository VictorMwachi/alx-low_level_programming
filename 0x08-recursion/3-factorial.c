#include "main.h"
/**
 * factorial - gets factorial of a number
 * @n: integer to get factorial
 * Return: always zeron on suceess
 */
int factorial(int n)
{
	int t = 0;

	if (n >= 0)
	{t = n * factorial(n-1);}
	return (t);
}
