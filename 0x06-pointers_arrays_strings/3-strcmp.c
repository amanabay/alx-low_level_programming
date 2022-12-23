#include "main.h"

/**
 * _strcmp - compares two strings.
 * @s1: string to be compared to @s2
 * @s2: string to be compared to @s1
 *
 * Return: 0, if the s1 and s2 are equal
 * a negative value if s1 is less than s2
 * a positive value if s1 is greater than s2
 */
int _strcmp(char *s1, char *s2)
{
	int s;

	while (*s1 || *s2)
	{
		s = 0;
		if (*s1 > *s2 || *s1 < *s2)
		{
			s = *s1 - *s2;
			break;
		}
		s1++;
		s2++;
	}
	return (s);
}
