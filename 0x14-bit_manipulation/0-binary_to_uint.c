#include "main.h"
#include <stddef.h>

/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: pointer to string containing the binary number
 *
 * Return: the converted number or 0 if b is NULL or b contains
 * characters other than 0 or 1
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int dec = 0;
	int i = 0;

	if (b == NULL)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);

		dec = 2 * dec + (b[i] - '0');
	}
	return (dec);
}
