#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - print last num of var n
 * Return: Always 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	p = n % 10;
	printf("Last digit of %d is %d ", n, p);
	if (p > 5)
		printf("and is greater than 5\n");
	else if (p == 0)
		printf("and is 0\n");
	else if (p < 6 && p != 0)
		printf("and is less than 6 and not 0\n");
	return (0);
}

