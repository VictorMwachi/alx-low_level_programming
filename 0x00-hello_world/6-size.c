#include <stdio.h>

/**
 * main-Entry point
 *
 * Return:always 0 success
 */
int main(void)
{char a;
int b;
long int c;
long long int d;
float e;
printf("Size of a char: %ld byte(s)",sizeof(a));
printf("Size of an int: %ld byte(s)",sizeof(b));
printf("Size of a long int: %ld byte(s)",sizeof(c));
printf("Size of a long long int: %ld byte(s)",sizeof(d));
printf("Size of a float: %ld byte(s)",sizeof(e));
return (0);
}
