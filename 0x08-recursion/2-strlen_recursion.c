#include "main.h"

/**
 * _strlen_recursion - returns length of a string
 * @s: The string whose length is to be calculated.
 *
 * Return: length of string
 */
int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s)
	{
		len++;
		len = len + _strlen_recursion(s + 1);
	}
	return (len);
}

