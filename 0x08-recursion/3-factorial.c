#include "main.h"

/**
 * factorial - prints the factorial of a number, if less than zero prints -1
 *
 * @n: to be factorialed
 * Return: Factorial of n
 */
int factorial(int n)
{
	if (n == 0 || n == 1)
		return (1);
	else if (n < 0)
		return (-1);
	else
		return (n * factorial(n - 1));
}
