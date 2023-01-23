#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - returns sum of a & b
 * @a: first number to add
 * @b: second number to add
 *
 * Return: sum of a & b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - returns difference of a & b
 * @a: first number to subtract
 * @b: second number to subtract
 *
 * Return: difference of a & b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - returns product of a & b
 * @a: first number to multiply
 * @b: Second int to multiply
 *
 * Return: product of a & b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - returns quotient of a & b
 * @a: number to divide
 * @b: number to divide by
 *
 * Return: quotient of a & b
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - returns remainder of a & b
 * @a: number to mod
 * @b: second number to mo
 *
 * Return: Remainder of a & b
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
