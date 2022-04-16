#include "main.h"
/**
 * print_triangle - prints triangle the size specified integer
 *
 * @size: Size of the triangle
 * Return: Always zero
 */
void print_triangle(int size)
{int i, k, s;
s = size - 1;
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
} }
else
{_putchar('\n'); } }
