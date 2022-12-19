#include "main.h"

/**
 * rev_string - reverses a string.
 *
 * @s: string to be reversed
 */
void rev_string(char *s)
{
	int len = 0, i = 0, j;
	char temp;

	while (s[i++])
		len++;
	j = len - 1;
	for (i = 0; i < j; i++)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
		j--;
	}
}
