#include <stdio.h>

/**
 * main - Print single digit numbers starting from 0
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
	putchar('\n');
	return (0);
}
