#include <stdio.h>

/**
 * main - Print lowercase and uppercase characters
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	n = 97;
	while (n < 123)
	{
		putchar(n);
		n++;
	}
	n = 65;
	while (n < 91)
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
