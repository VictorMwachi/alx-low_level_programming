#include "main.h"
/**
 * print_times_table - prints n times table starting with 0;
 * @n: integer n
 */
void print_times_table(int n)
{
	int k,i,j;
	for (i = 0; i <= n; i++)
	{
		for (k = 0; k <= n; k++)
		{
			j = i * k;
			if (k == n)
			{printf("%d, ",j); }
			else
			{printf("%d",j); }
		}
		_putchar('\n');
	}
}
