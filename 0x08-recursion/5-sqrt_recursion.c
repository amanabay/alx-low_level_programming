#include "main.h"

/**
 * sqrt - finds the square root of a number.
 * @n: the number to find the square root of.
 * @r: the root to be tested.
 *
 * Return: if n has a square root - the square root.
 *         if not - -1.
 */
int ssqrt(int n, int r)
{
	if ((r * r) == n)
		return (r);
	else if(r == n / 2)
		return (-1);
	return (ssqrt(n, r + 1));

}

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: The number to return the square root of.
 * Return: if n has a square root - the square root of n.
 *         if not - -1.
 */

int _sqrt_recursion(int n)
{
	int r = 0;

	if (n < 0)
		return (-1);
	if (n == 1)
		return (1);
	return (ssqrt(n, r));
}
