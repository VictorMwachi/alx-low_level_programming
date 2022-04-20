#include "main.h"
#include <string.h>
/**
 * puts2 - prints any other charactor starting from first
 * @str: string to be printed
 */
void puts2(char *str)
{
	int i = 0, len = strlen(str);

	for (i = 0; i <= len - 1; i++)
	{
		while (i % 2 == 0)
		{
			if (str[i] != '\0')
			{putchar(str[i]); }
		}
	}
}
