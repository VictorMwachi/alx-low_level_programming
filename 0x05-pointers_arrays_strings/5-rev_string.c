#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * print_rev - prints string in reverse
 * @s: string to be printed
 */
void rev_string(char *s)
{
	/*int len = strlen(s), i;

	for (i = len - 1; i >= 0; i--)
	{putchar(s[i]); }
	putchar('\n');*/
	printf("%p",strrev(s));
}
