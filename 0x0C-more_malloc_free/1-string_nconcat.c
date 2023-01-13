#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: first to be concatenated
 * @s2: second to be concatenated
 * @n: number of bytes of @s2 to be concatenated to @s1
 *
 * Return: newly allocated memory containing concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = 0, len2 = 0, i, j;
	char *cs;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;
	if (n >= len2)
		n = len2;
	cs = malloc((len1 + n) * sizeof(char));
	if (cs == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
		cs[i] = s1[i];
	for (j = 0; j <= n; j++)
	{
		cs[i] = s2[j];
		i++;
	}
	return (cs);
}
