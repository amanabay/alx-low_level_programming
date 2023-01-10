#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars, and
 * initializes it with a specific char.
 *
 * @size: size of the array
 * @c: char to populate array
 * Return: pointer to array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr;

	if (size == 0)
		return (NULL);
	arr = malloc(size * sizeof(char));
	for (i = 0; i < size; i++)
		arr[i] = c;
	if (arr == NULL)
		return (NULL);
	return (arr);
}
