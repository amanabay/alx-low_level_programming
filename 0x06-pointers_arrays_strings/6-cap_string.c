#include "main.h"

/**
 * cap_string - capitalizes all words of a string.
 * @s: string to be capitalized
 *
 * Return: pointer to @s
 */
char *cap_string(char *s)
{
	int len = 0, i = 0;

	while (s[i++])
		len++;
	for (i = 0; i < len; i++)
	{
		if ((s[i] == ' ' || s[i] == '\t' || s[i] == '\n' || s[i] == ','
			|| s[i] == ';' || s[i] == '.' || s[i] == '!' || s[i] == '?'
			|| s[i] == '\"' || s[i] == '(' || s[i] == ')' || s[i] == '{'
			|| s[i] == '}') && (s[i + 1] >= 97 && s[i + 1] <= 122))
		{
			s[i + 1] = s[i + 1] - 32;
		}

	}
	return (s);
}
