#include "function_pointer.h"
/**
 * array_iterator - executes a function given as a parameter
 * @array: pointer to the array
 * @size: size of the array
 * action: pointer to the function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i = 0;
	
	if (array == NULL || action == NULL || size <= 0)
	{
		return;
	}
	else
	{
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}
