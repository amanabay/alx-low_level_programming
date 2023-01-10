#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space
 * in memory, which contains a copy of the string given
 * as a parameter.
 *
 * @str: string to be copied
 * Return: pointer to new memory location with copied
 * string
 */
char *_strdup(char *str)
{
	int len = 0, i;
	char *cstr;

	if (str == NULL)
		return (NULL);
	while (str[len] != '\0')
		len++;
	cstr = malloc(len * sizeof(str));
	if (cstr == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
		cstr[i] = str[i];
	return (cstr);
}
