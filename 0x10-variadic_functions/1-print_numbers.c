#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - prints numbers followed by anew line
 * @seperator: the string to be printed between numbers
 * @n: the number of integers passed to the function
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		if (separator != NULL)
		{
			printf("%d%s", va_arg(ap, int), separator);
		}
		else
		{
			printf("%d", va_arg(ap, int));
		}
	}
	printf("\n");
	va_end(ap);
}
