#include "main.h"

/**
 * *_strcat - concatenates two strings.
 * @dest: destination string to which @src is concatenated to
 * @src: source string to be concatenated
 *
 * Return: pointer to @dest
 */
char *_strcat(char *dest, char *src)
{
	int len = 0, i = 0;

	while (dest[i++])
		len++;
	for (i = 0; src[i] != '\0'; i++)
		dest[len++] = src[i];
	return (dest);
}
