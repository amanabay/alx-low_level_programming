#include <stdio.h>

/**
 * main -  finds and prints the largest prime factor of
 * the number 612852475143, followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int num, i;

	num = 612852475143;
	while (i <  (num / 2))
	{
		if ((num % 2) == 0)
		{
			num /= 2;
			continue;
		}
		for (i = 3; i < num / 2; i += 2)
		{
			if (num % i == 0)
				num /= i;
		}
	}
	printf("%lu\n", num);
	return (0);
}
