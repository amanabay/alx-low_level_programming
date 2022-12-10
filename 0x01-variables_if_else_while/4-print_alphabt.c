#include <stdio.h>

/**
 * main - Print all lowercase alphabets except q and e
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	n = 97;
	while (n < 123)
	{
		if (n == 101)
		{
			n++;
			continue;
		}
		else if (n == 113)
		{
			n++;
			continue;
		}
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
