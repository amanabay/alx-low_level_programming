#include "main.h"

/**
 * _memcpy - copies memory area.
 *
 * @dest: destination
 * @src: source
 * @n: number of bytes to copy
 *
 * Return: a pointer to the memory area dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *dest_ptr = dest;
	char *src_ptr = src;

	while (n--)
		*dest_ptr++ = *src_ptr++;

	return (dest);
}
