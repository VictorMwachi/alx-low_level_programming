#include "main.h"
/**
 * _print_rev_recursion - prints a string in reverse
 * @s: string to be printed in reverse
 */
void _print_rev_recursion(char *s)
{
	int i = strlen(s);
	
	if (s[i] != '\0')
	{
		_putchar(*s);
		s--;
		_print_rev_recursion(s);}
}
