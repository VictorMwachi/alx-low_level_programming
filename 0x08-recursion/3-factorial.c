#include "main.h"
/**
 * factorial - gets factorial of a number
 * @n: integer to get factorial
 * Return: returns the factorial digit
 */
int factorial(int n)
{
	int t;

	if (n > 0)
	{
		t = n * factorial(n - 1);
	}
	else if (n < 0)
	{
		t = -1;
	}
	else
	{
		t = 1;
	}
	return (t);
}
