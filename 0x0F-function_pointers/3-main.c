#include "calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - program entry point
 * @argc: no of argurments passed
 * @argv: string of argurements
 * Return: 0 always success
 */
int main (int argc, char *argv[])
{
	if (argc < 4)
	{
		return (-1);
	}
	if (argv[2] == "+" || argv[2] == "-" || argv[2] == "/" || argv[2] == "%" || argv[2] == "*")
	{
		printf("%d\n", (*get_op_func(argv[2]))(atoi(argv[1]), atoi(argv[3])));
	}
	return (0);
}
