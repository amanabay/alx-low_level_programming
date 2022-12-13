#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers from n to 9
 * followed by a new line.
 * @n: starting point
 */
void print_to_98(int n)
{	int i;

	if (n <= 98)
	{
		for (i = n; i < 98; i++)
		{
			printf("%d, ", i);
		}
		printf("%d\n", 98);
	}
	else if (n >= 98)
	{
		for (i = n; i > 98; i--)
		{
			printf("%d, ", i);
		}
		printf("%d\n", 98);
	}
}
