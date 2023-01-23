#include "function_pointers.h"

/**
 * array_iterator - executes a function as a parameter on each element in array
 * @array: array to iterate through
 * @size: size of the array
 * @action: pointer to the function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;
	
	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}
