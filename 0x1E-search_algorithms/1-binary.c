#include "search_algos.h"

/**
 * binary_search - Searches for a value in a sorted array of integers
 *		using the binary search algorithm
 *
 * @array: array to search in
 * @size: size of array
 * @value: value to search in array
 *
 * Return: index of value, -1 if not found or array is NULL
 *
 */

int binary_search(int *array, size_t size, int value)
{
	int i, left = 0, right = size - 1, mid;

	if (array == NULL)
		return (-1);

	while (left <= right)
	{
		printf("Searching in array: ");
		for (i = left; i <= right; i++)
		{
			printf("%d", array[i]);
			if (i != right)
				printf(", ");
		}
		printf("\n");

		mid = (left + right) / 2;

		if (array[mid] < value)
			left = mid + 1;
		else if (array[mid] > value)
			right = mid - 1;
		else
			return (mid);
	}
	return (-1);
}
