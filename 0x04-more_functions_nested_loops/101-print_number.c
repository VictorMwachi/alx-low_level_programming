#include "main.h"
/**
 * print_number - prints an integer
 * @n: integer to be printed
 */
void print_number(int n)
{
	unsigned int m;
	if (n < 0)
	{
		m = -n;
		_putchar('-');
	}
	else
	{
		m = n;
	}
	if (m > 9)
	{
		_putchar((m / 10) + '0');
		_putchar((m % 10) + '0');
	}
	else
	{
		_putchar(m + '0');
	}
}
