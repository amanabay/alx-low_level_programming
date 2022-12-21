#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates random valid passwords for the program 101-crackme.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	srand(time(NULL));
	int sum, pass, last;

	for (sum = 0; sum <= (2772 - 127); sum += pass)
	{
		pass = (rand() % 128);
		printf("%c", pass);
	}
	last = 2772 - sum;
	printf("%c", last);
	return (0);
}
