#include "main.h"

/**
 * cap_string - capitalizes all words of a string.
 * @s: string to be capitalized
 *
 * Return: pointer to @s
 */
char *cap_string(char *s)
{
	int i = 0;

	for (i = 0; s[i] != '\0'; i++)
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
