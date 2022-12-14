#include "main.h"

/**
 * _strlen - returns the length of a string.
 * @s: string whose length is to be returned
 *
 * Return: the length of @s
 */
int _strlen(char *s)
{
	int len;

	len = 0;
	while (*s++)
	{
		len++;
	}
	return (len);
}
