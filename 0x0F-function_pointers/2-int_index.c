#include "function_pointers.h"
/**
 * int_index - searches for an integer
 * @array: the array
 * @size: number of elements in the array
 * @cmp: pointer to the function
 * Return: the index of first matching integer
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
	{
		return (-1);
	}
	if (array != NULL && size > 0 && cmp != NULL)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
			{
				return (i);
			}
		}
	}
	return (-1);
}
