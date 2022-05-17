#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - prints strings, followed by a new line
 * @separator: the string to be printed between strings
 * @n: the number of strings passed to the function
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		if (separator != NULL && i < n - 1)
		{
			if (va_arg(ap, n) == NULL)
			{
				printf("nil");
			}
			else
			{
				printf("%s%s", va_arg(ap, int), separator);
			}
		}
		else
		{
			if (va_arg(ap, n) == NULL)
			{
				printf("nil");
			}
			else
			{
				printf("%s", va_arg(ap, int));
			}
		}
	}
	printf("\n");
	va_end(ap);
}
