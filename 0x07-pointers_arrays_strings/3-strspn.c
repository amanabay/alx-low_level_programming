#include "main.h"

/**
 * _strspn - gets the length of a prefix substring.
 *
 * @s: string
 * @accept: substring
 *
 * Return: number of bytes in the initial segment of s
 *	which consist only of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	char *s_ptr = s;

	while (*s_ptr != '\0')
	{
		char *accept_ptr = accept;

		while (*accept_ptr != '\0')
		{
			if (*s_ptr == *accept_ptr)
				count++;

			accept_ptr++;
		}

		if (*accept_ptr == '\0')
			break;
	}

	return (count);
}
