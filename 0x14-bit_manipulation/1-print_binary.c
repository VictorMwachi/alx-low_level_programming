#include "main.h"
/**
 * print_binary - prints a binary of a number
 * @n: nunmber to be converted to binary
 */
void print_binary(unsigned int long n)
{
	if (n > 1)
		print_binary(n >> 1);
	_putchar((n & 1) + '0');
}
