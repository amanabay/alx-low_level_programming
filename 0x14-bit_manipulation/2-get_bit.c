#include "main.h"

/**
 * get_bit - gets the value of a bit at a given index.
 * @n: the bit
 * @index: the index to get the value at
 *
 * Return: the value of bit at index, if fails -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit = (n >> index);

	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	return (bit & 1);

}
