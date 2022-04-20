#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strcpy - copys a string
 * @dest:
 * @src:
 */
char *_strcpy(char *dest, char *src)
{
	char *ptr = *src;
	return (*dest = ptr);
}
