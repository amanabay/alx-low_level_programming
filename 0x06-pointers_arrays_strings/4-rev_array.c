#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers.
 *
 * @a: array to be reversed
 * @n: size of the array
 */
void reverse_array(int *a, int n)
{
	int i = 0, j = n - 1, temp;

	for (i = 0; i < j; i++)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
		j--;
	}
}
