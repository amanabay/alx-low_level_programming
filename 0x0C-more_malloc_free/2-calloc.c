#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocate memory for array of nmemb elements of size bytes
 * @nmemb: number of elemnts
 * @size: size in bytes of elements
 *
 * Return: pointer to the new mem location
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *memory;
	char *zeros;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	memory = malloc(size * nmemb);
	if (memory == NULL)
		return (NULL);
	zeros = memory;
	for (i = 0; i < (size * nmemb); i++)
		zeros[i] = 0;
	return (memory);
}
