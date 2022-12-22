#include "main.h"

/**
 * _strncat - concatenates two strings while using n bytes from asrc.
 * @dest: destination string to which @src is concatenated to
 * @src: source string to be concatenated
 * @n: number of bytes taken from @src
 *
 * Return: pointer to @dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int len = 0, i = 0;

	while (dest[i++])
		len++;
	for (i = 0; src[i] != '\0' && i < n; i++)
		dest[len++] = src[i];
	return (dest);
}
