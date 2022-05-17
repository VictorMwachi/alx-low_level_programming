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
	char *str;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(ap, char *);
		if (separator != NULL && i < n - 1)
		{
			if (str == NULL)
			{
				 if (i<n-1){
				printf("nil%s",separator);}
				else
				{printf("nil");}
			}
			else
			{
				printf("%s%s", str, separator);
			}
		}
		else
		{
			if (str == NULL)
			{
				 if (i < n- 1){
				printf("nil%s",separator);}
				else
				{printf("nil");}
			}
			else
			{
				printf("%s", str);
			}
		}
	}
	va_end(ap);
	printf("\n");
}
