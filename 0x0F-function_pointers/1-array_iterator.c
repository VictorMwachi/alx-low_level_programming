#include "function_pointers.h"
/**
 * array_iterator - executes a function given as a parameter
 * @array: pointer to the array
 * @size: size of the array
 * action: pointer to the function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;
	
	if (array == NULL || size < 1 || action == NULL)
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
