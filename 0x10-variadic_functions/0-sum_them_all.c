#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - prints numbers, followed by a new line
 * @n: the number of integers passed to the function
 * @...: variable number of parameters to calculate the sum of
 *
 * Return: sum of variable numbers
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list nums;
	unsigned int i, sum = 0;

	va_start(nums, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(nums, int);
	}
	va_end(nums);
	return (sum);
}
