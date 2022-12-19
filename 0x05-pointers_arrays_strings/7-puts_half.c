#include "main.h"

/**
 * puts_half -  prints half of a string, followed by a new line.
 * @str: string to be printed.
 */
void puts_half(char *str)
{
	int len = 0, i = 0, mid;

	while (str[i++])
		len++;
	if (len % 2 == 0)
		mid = len / 2;
	else
		mid = (len + 1) / 2;
	for (i = mid; i < len; i++)
		_putchar(str[i]);
	_putchar('\n');
}
