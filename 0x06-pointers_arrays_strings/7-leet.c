#include "main.h"

/**
 * leet - encodes a string into 1337.
 *
 * @s: string to be encoded
 * Return: pointer to s
 */
char *leet(char *s)
{
	int i, j;
	char leet[8] = {'O', 'L', '_', 'E', 'A', '_', '_', 'T'};

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 8; j++)
		{
			if ((s[i] == leet[j]) || (s[i] - 32 == leet[j]))
			{
				s[i] = j + '0';
			}
		}
	}
	return (s);
}
