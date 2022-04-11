#include <stdio.h>
/**
 * main-entry point
 *
 * Return: always 0 success
 */
int main(void)
{int a = 48;
int b = 48;
int c = 48;
for (a = 48; a <= 57; a++)
{
for (b = 48; b <= 57; b++)
{
for (c = 48; c <= 57; c++)
{
if (a != b && a != c && b != c && a < b && b < c)
{putchar(a);
putchar(b);
putchar(c);
if (a == 55 && b == 56 && c == 57)
{break; }
putchar(',');
putchar(' '); } } } }
putchar('\n');
return (0); }
