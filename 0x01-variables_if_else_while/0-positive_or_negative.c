#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - print if n is + or -
 * Return: Always 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%p is positive\n", n);
	else if (n == 0)
		printf("%p is zero\n", n);
	else if (n < 0)
		printf("%p is negative\n", n);
	return (0);
}
