#include <stdio.h>

/**
 * main - Print triple digit combinations
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, m, o;

	n = 48;
	while (n < 57)
	{
		m = n + 1;
		while (m < 58)
		{
			o = m + 1;
			while (o < 58)
			{
				putchar(n);
				putchar(m);
				putchar(o);
				if (n == 55 && m == 56 && o == 57)
					break;
				putchar(',');
				putchar(' ');
				o++;
			}
			m++;
		}
		n++;
	}
	putchar('\n');
	return (0);
}
