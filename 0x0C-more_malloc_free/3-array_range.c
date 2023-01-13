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
	int *arr, i, n;

	if (min > max)
		return (NULL);
	arr = malloc(((max - min) + 1) * sizeof(int));
	n = min;
	for (i = 0; i < ((max - min) + 1); i++)
	{
		arr[i] = n;
		n++;
	}
	return (arr);
}
