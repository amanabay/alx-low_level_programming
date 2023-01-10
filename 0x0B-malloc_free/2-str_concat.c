#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings.
 *
 * @s1: first string
 * @s2: second string to be concatenated
 * Return: pointer to newly allocated memory containing
 * concatenated string of @s1 and @s2
 */
char *str_concat(char *s1, char *s2)
{
	int len1 = 0, len2 = 0, clen, i, j;
	char *cs;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;
	clen = len1 + len2 + 1;
	cs = malloc(clen * sizeof(char));
	if (cs == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
		cs[i] = s1[i];
	for (j = 0; j <= len2; j++)
	{
		cs[i] = s2[j];
		i++;
	}
	return (cs);
}
