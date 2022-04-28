#include "main.h"
#include <string.h>
/**
 * _print_rev_recursion - prints a string in reverse
 * @s: string to be printed in reverse
 */
void _print_rev_recursion(char *s)
{
	int i = strlen(s);
	char ch;
	
	if (s[i] != '\0')
	{
		ch = s[i];
		_putchar(ch);
		s--;
		_print_rev_recursion(s);}
}
