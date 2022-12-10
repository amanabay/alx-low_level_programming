#include <stdio.h>

/**
 * main - Print double digit combinations
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, m;

	n = 48;
	while (n < 57)
	{	
		m = n + 1;
		while (m < 58)
		{
		 	putchar(n);
			putchar(m);
			if (n == 56 && m == 57)
				break;
			putchar(',');
			putchar(' ');
			m++;	
		}
		n++;
	}
	putchar('\n');
	return (0);
}
