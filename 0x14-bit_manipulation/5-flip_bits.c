#include "main.h"
#include <stdio.h>

/**
 * flip_bits -  counts the number of bits you would need to flip
 * to get from one number to another.
 * @n: the number
 * @m: the number to flip n to
 *
 * Return: returns the number of bits you would need to flip to
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int x = n ^ m;
	unsigned long int nflips = 0;

	while (x > 0)
	{
		nflips += (x & 1);
		x >>= 1;
	}

	return (nflips);
}
