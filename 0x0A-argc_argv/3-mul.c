#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiples 2 numbers and prints the result
 * @argc: number of arguments
 * @argv: array of string arguments
 *
 * Return: 0 on success, 1 if error (2 arguemts not met)
 */
int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
