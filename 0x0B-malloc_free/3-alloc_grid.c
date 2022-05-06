#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * alloc_grid - creates a 2 dimen array of integers
 * @width: width of array
 * @height: height of array
 * Return: returns pointer to the array
 */
int **alloc_grid(int width, int height)
{
	int *arr;

	if (width < 1 || height < 1)
	{
		return (NULL);
	}
	arr = malloc(sizeof(int) * (width * height));
	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		for (k = 0; k < width; k++)
		{
			arr[k] = 0;
		}
	}
	return (arr);
}
