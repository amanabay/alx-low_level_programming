#include <stdio.h>

/**
 * main -  in the Fibonacci sequence whose values do not exceed 4,000,000,
 *  the program finds and prints the sum of the even-valued terms,
 *  followed by a new line.
 *
 *  Return: Always 0 (Success)
 */
int main(void)
{
	long int m, n, o, sum;

	m = 1;
	n = 2;
	sum = 0;
	do {
		o = m + n;
		m = n;
		n = o;
		if (m % 2 == 0)
			sum += m;

	} while (m < 4000000);
	printf("%lu\n", sum);
	return (0);
}
