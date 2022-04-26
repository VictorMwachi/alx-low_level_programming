#include "mai.h"
/**
 *_memset -  function fills the first n bytes of the memory area pointed to by s with the constant byte b
 *@s: points memory to be filled
 *@b: constant
 *@n:no of bytes to be filled
*Return: returns pointer to memory area s
*/
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0,j = 0;
	
	while(b[i] != '\0')
	{i++; }
	while(j <= n)
	{s[j] = b[j];
	j++; }
	return (s);}
