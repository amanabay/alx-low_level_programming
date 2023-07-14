#include "main.h"

/**
 * _memset - fills memory with a constant byte.
 *
 * @s: memory array to fill
 * @b: constant byte
 * @n: size of memory array to fills
 *
 * Return: a pointer to the memory area s.
 *
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *ptr = s;

	while (n--)
		*ptr++ = b;

	return (s);
}
