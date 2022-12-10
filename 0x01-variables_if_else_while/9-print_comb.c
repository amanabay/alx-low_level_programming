#include <stdio.h>

/**
 * main - Print single number combinations
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	n = 48;
	while (n < 58)
	{
		putchar(n);
		putchar(',');
		putchar(' ');
		n++;
	}
	putchar('\n');
	return (0);
}
