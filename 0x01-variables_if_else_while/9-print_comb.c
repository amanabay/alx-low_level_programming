#include <stdio.h>

/**
 * main - Print single number combinations in ascending order
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
		if (n == 57)
			break;
		putchar(',');
		putchar(' ');
		n++;
	}
	putchar('\n');
	return (0);
}
