#include <stdio.h>

/**
 * main - Prints all possible combinations of two two-digit numbers
 * with numbers ranging from 0 to 99 separated by a space
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int m, n;

	m = 0;
	while (m <= 98)
	{
		n = m + 1;
		while (n <= 99)
		{
			putchar((m / 10) + '0');
			putchar((m % 10) + '0');
			putchar(' ');
			putchar((n / 10) + '0');
			putchar((n % 10) + '0');
			if (m == 98 && n == 99)
				break;
			putchar(',');
			putchar(' ');
			n++;
		}
		m++;
	}
	putchar('\n');
	return (0);
}
