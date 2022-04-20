#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * puts_half - prints half a string
 * @str: string to be printed half of it
 */
void puts_half(char *str)
{
	int i, len = strlen(str), half = (len - 1) / 2;

	for (i = half + 1; i <= half + half + 1; i++)
	{
		if (str[i] != '\0')
		{putchar(str[i]); }
	}
	putchar('\n');
}
