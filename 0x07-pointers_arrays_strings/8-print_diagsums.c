#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - print sum of two diagonals of a square matrix
 * @a: pointer to start of square matrix
 * @size: width of matrix

 */
void print_diagsums(int *a, int size)
{
	int p;

	unsigned int add, add1;

	add = 0;
	add1 = 0;

	for (p = 0; p < size; p++)
	{
		add += a[(size * p) + p];
		add1 += a[(size * (p + 1)) - (p + 1)];
	}

	printf("%d, %d\n", add, add1);
}
