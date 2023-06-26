#include <stdio.h>
#include "main.h"

/**
 * print_array - print n elements array of integers
 * @a: array
 * @n: num of elements
 */
void print_array(int *a, int n)
{
	int p;

	for (p = 0; p < n; p++)
	{
		if (p == 0)
			printf("%d", a[p]);
		else
			printf(", %d", a[p]);
	}
		printf("\n");
}

