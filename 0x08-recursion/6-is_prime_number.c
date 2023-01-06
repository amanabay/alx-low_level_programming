#include "main.h"

/**
 * is_div - checks if a number is divisible
 * @n: The number to be checked.
 * @d: The divisor.
 *
 * Return: if number is divisible - 0.
 *         if number is not divisible - 1.
 */
int is_div(int n, int d)
{
	if (n % d == 0)
		return (0);
	if (d == n / 2)
		return (1);
	return (is_div(n, d + 1));
}

/**
 * is_prime_number - xhecks if a number is prime.
 * @n: the number to be checked.
 *
 * Return: if the integer is prime - 1
 *         if the number is prime - 0
 */
int is_prime_number(int n)
{
	int d = 2;

	if (n <= 1)
		return (0);
	else if (n >= 2 && n <= 3)
		return (1);
	return (is_div(n, d));
}
