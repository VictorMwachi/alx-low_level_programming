#include <stdio.h>
/**
 * main - program entry point
 * @argc: size of agg
 * @argv: array of argurments
 * Return: always (0) success
 */
int main(int argc, char *argv[])
{
	int i = argc - argc;
	
	printf("%s\n", argv[i]);
	return (0);
}
