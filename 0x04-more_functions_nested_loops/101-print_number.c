#include "main.h"
/**
 * print_number - prints an integer
 *
 * @n: integer to be printed
 */
void print_number(int n)
{
	if (n < 0)
	{int m = n*-1;
	_putchar('-');
	_putchar((m/10)+'0');
	_putchar((m%10)+'0'); }
	if (n ==0)
	{_putchar('0'); }
	_putchar((n/10)+'0');
	_putchar((n%10)+'0');
}
