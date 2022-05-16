#include "function_pointers.h"
/**
 * print_name - prints a name
 * @name: name pointer
 * @f: pointer to function
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL && *name !='\0')
	{
		f(name);
	}
}
