#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase.
 * @s: string that will be converted to uppercase
 *
 * Return: pointer to @s
 */
char *string_toupper(char *s)
{
	int i = 0, len = 0;

	while (s[i++])
		len++;
	for (i = 0; i < len; i++)
	{
		if (s[i] >= 97 && s[i] <= 122)
			s[i] = s[i] - 32;
	}
	return (s);
}
