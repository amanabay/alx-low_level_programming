#include <stdio.h>

/**
 * main - prints the number of arguments passed into i
 * @argc: argument count
 * @argv: array of arg strings
 *
 * Return: 0 for successful exit
 */
int main(int argc, char __attribute__((__unused__)) *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
