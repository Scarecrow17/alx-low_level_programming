#include "main.h"

/**
 * reverse_array - reverse array of integers
 * @a: array to reverse
 * @n: num of array elements
 */
void reverse_array(int *a, int n)
{
	int p, x, c;

	x = n - 1;

	for (p = 0; p < n / 2; p++)
	{
		c = a[p];
		a[p] = a[x];
		a[x--] = c;
	}
}
