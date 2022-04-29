#include "main.h"
/**
 * _pow_recursion - gets power of integer x bi recursion
 * @x: integer to be raised to power y
 * @y: power of x
 * Return: returns the answer
 */
int _pow_recursion(int x, int y)
{
	int r;
	
	if (y > 0)
	{
		r =x * _pow_recursion(x, y);
		y--;
		_pow_recursion(x, y);
	}
	else if (y < 0)
	{
		r = -1;
	}
	else
	{
		r = 1;
	}
	return (r);}
