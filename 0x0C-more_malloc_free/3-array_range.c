#include "main.h"
#include <stdlib.h>

/**
 * array_range - create array of integers filled with numbers from min to max
 * @min: first number in the array
 * @max: last number in the array
 *
 * Return: array of numbers
 */
int *array_range(int min, int max)
{
	int *arr, i, size;

	if (min > max)
		return (NULL);
	size = max - min + 1;
	arr = malloc(size * sizeof(int));
	for (i = 0; i < size; i++)
		arr[i] = min++;
	return (arr);
}
