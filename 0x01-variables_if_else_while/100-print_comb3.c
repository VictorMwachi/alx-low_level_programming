#include <stdio.h>
/**
 * main-entry point
 *
 * Return: always 0 success
 */
int main(void)
{int a,b;
for (a = 0; a <=9; a++)
{for (b = 1; b <= 9; b++)
{if (a!= b && a < b)
{putchar(a);
putchar(b);
putchar(',');
putchar(' '); } } }
puchar('\n');
return (0); }
