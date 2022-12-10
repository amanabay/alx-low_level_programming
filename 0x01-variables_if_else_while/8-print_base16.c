#include <stdio.h>

/**
 * main - Print Hexadecimal numbers
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
		n++;
	}
	n = 97;
	while (n < 103)
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
