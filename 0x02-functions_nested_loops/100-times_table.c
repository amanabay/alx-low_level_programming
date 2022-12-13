#include "main.h"

/**
 * print_times_table - prints the n times table, starting with 0.
 * @n: determines the size of the table
 */
void print_times_table(int n)
{
	int rows, cols, product;

	if (n >= 0 && n <= 15)
	{
		for (rows = 0; rows <= n; rows++)
		{
			_putchar('0');
			for (cols = 1; cols <= n; cols++)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				product = rows * cols;
				if (product <= 9 || product == 99)
					_putchar(' ');
				if (product >= 100)
				{
					_putchar((product / 100) + '0');
					_putchar((product / 10) % 10 + '0');
				}
				else if (product <= 99 && product >= 10)
					_putchar((product / 10) + '0');
				_putchar((product % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
