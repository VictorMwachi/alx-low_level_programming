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
	int **arr, i, k;

	if (width < 1 || height < 1)
	{
		return (NULL);
	}
	arr = malloc(sizeof(int *) * height);
	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		arr[i] = malloc(sizeof(int) * width);
		if (arr[i] == NULL)
		{
			while (i >= 0)
			{
				free(arr[i--]);
			}
			free(arr);
			return (NULL);
		}
		for (k = 0; k < width; k++)
		{
			arr[i][k] = 0;
		}
	}
	return (arr);
}
