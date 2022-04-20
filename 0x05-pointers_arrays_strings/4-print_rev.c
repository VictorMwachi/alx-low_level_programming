#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * print_rev - prints string in reverse
 * @s: string to be printed
 */
void print_rev(char *s)
{int len = strlen(s),i;
	for (i=len; i >=0;i--)
	{putchar(s[i]);}
}
