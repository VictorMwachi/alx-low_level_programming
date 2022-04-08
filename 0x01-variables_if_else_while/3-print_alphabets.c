#include <stdio.h>
/**
 * main-entry point
 *
 * Return:always 0 (success)
 */
int main(void)
{char lower;
for (lower = 'a'; lower <= 'z'; lower++)
{putchar(lower); }
for (lower = 'A'; lower <= 'Z'; lower++)
{putchar(lower); }
putchar('\n');
return (0);
}
