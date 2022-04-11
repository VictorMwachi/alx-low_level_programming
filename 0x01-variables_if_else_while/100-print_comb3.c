#include <stdio.h>
/**
 * main-entry point
 *
 * Return: always 0 success
 */
int main(void)
{int a=48;
int b=48;
for (a = 48; a <=57; a++)
{for (b = 48; b <= 57; b++)
{if (a!= b && a < b)
{putchar(a);
putchar(b);
putchar(',');
putchar(' '); } } }
putchar('\n');
return (0); }
