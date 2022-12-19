#include "main.h"

/**
 * rev_string - reverses a string.
 *
 * @s: string to be reversed
 */
void rev_string(char *s)
{
	int len, i, j;
	char temp;

	len = 0;
	while (s[i++])
		len++;
	for (i = len - 1; i >= 0; i--)
	{
		for (j = 0; j < len; j++)
		{
			temp = s[i];
			s[i] = s[j];
			s[j] = temp;
		}
	}
}
