#include "search_algos.h"
#include <stdio.h>

/**
 * linear_search - Searches for a value in a sorted array of integers 
 *		using the linear search algorithm
 *
 * @array: array to search in 
 * @size: size of array
 * @value: value to search in array
 *
 * Return: index of value, -1 if not found or array is NULL
 *
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
	
}
