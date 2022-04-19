#include "main.h"
#include <stdio.h>
/**
 * print_times_table - prints n times table starting with 0
 * @n: integer n
 */
void print_times_table(int n)
{
	int k, i, j;

	if (n < 15 && n >= 0)
	{
	for (i = 0; i <= n; i++)
	{
		for (k = 0; k <= n; k++)
		{
			j = i * k;
			if (k == n)
			{printf("%d\n" ,j); }
			else
			{
				if (j > 9)
				{_putchar(j / 10 + '0');
				_putchar(j % 10 + '0'); }
				else
				{_putchar(j + '0'); }
		}
	}
	}
}
