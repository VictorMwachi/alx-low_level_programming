#include "variadic_functions.h"
#include <stdarg.h>
/**
 * print_numbers - prints numbers followed by anew line
 * @seperator: the string to be printed between numbers
 * @n: the number of integers passed to the function
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	int i;

	va_start(n, ap);
	for (i = 0; i < n; i++)
	{
		if (seperator != NULL)
		{
			printf("%d%s", va_arg(ap, int), seperator);
		}
		else
		{
			printf("%d", va_arg(ap, int));
		}
	}
	va_end(ap);
}
