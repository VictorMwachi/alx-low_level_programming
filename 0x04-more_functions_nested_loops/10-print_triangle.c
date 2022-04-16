#include "main.h"
/**
 * print_triangle - prints tringle the size specified integer
 *
 * @size: size of the triangle
 */
void print_triangle(int size)
{int i, s = size - 1, k;
if (size > 0)
{
	for(i = 0; i < size; i++)
	{
		for (k = 0; k < size; k++)
		{
			if (k < s)
			{_putchar(' '); }
			else
			{_putchar('#'); }
		}
		s--;
		_putchar('\n');
	}
}
else
{_putchar('\n'); } }
