#include "main.h"
/**
 * factorial - gets factorial of a number
 * @n: integer to get factorial
 * Return: always zeron on suceess
 */
int factorial(int n)
{
	int t;

	if (n >= 0)
	{
		t=n*(n-1);
		factorial(n-1);}
	return (t);}
