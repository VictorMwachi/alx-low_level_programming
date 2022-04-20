#include "main.h"
/**
 * swap_int - swaps the integer a and b
 * @a: integer
 * @b: integer
 */
void swap_int(int *a, int *b)
{
	*a = &b;
	*b = &a;
}
