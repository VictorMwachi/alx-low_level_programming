#include <stdio.h>
#include <stdlib.h>

/**
 * main - function that returns the sum of +ve numbs
 * @argc: counts the number of args passed
 * @argv: an array of strings
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i, n, c = 0, COINS[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	n = atoi(argv[1]);
	if (n < 0)
	{
		printf("0\n");
	}
	for (i = 0; i < 5; i++)
	{
		if (n / COINS[i])
		{
			c += n / COINS[i];
			n %= COINS[i];
		}
	}
	printf("%d\n", c);
	return (0);
}
