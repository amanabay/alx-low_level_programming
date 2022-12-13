#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0.
 */
void times_table(void)
{
	int rows, cols, product;

	for (rows = 0; rows < 10; rows++)
	{
		_putchar('0');
		for (cols = 1; cols < 10; cols++)
		{
			_putchar(',');
			_putchar(' ');
			product = rows * cols;
			if (product <= 9)
				_putchar(' ');
			else
				_putchar((product / 10) + '0');
			_putchar((product % 10) + '0');
		}
		_putchar('\n');
	}
}
