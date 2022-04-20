#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * rev_string - prints string in reverse
 * @s: string to be printed
 */
void rev_string(char *s)
{
	int i, len, temp;

	len = strlen(s); /* use strlen() to get the length of str string  */
	/* use for loop to iterate the string*/
	for (i = 0; i < len / 2; i++)
	{/* temp variable use to temporary hold the string  */
		temp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = temp;
	}
}
