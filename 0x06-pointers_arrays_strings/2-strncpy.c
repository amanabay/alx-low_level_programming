#include "main.h"

/**
 * _strncpy - copies a string while using n bytes from @src.
 * @dest: destination string to which @src is copied to
 * @src: source string to be copied
 * @n: number of bytes taken from @src
 *
 * Return: pointer to @dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int len = 0, i = 0;

	while (src[i++])
		len++;
	for (i = 0; src[i] != '\0' && i < n; i++)
		dest[i] = src[i];
	for (i = len; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
