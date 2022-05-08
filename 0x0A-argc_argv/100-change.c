#include <stdio.h>
/**
 * main - function that returns the sum of +ve numbs
 * @argc: counts the number of args passed
 * @argv: an array of strings
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	money = atoi(argv[1]);
	if (money < 0)
	{
		printf("0\n");
	}
	else if (money != 0 && money > 0)
	{
		if (money >= 25)
		{
			cents = money / 25;
			if ((money % 25) > 0 && (money % 25) < 5)
			{
				cent += money %25;
			}
			else if (
