#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers, starting
 *	with 1 and 2, followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int m, n, o, i;

	m = 1;
	n = 2;
	for (i = 0; i < 50; i++)
	{
		printf("%lu", m);
		if (i == 49)
			break;
		printf(", ");
		o = m + n;
		m = n;
		n = o;
	}
	printf("\n");
	return (0);
}
