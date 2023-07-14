#include <stdlib.h>
#include "main.h"

/**
 * *array_range - create array of integers
 * @min: min range
 * @max: max range
 * Return: pointer to new array
 */

int *array_range(int min, int max)
{
	int *x;
	int a, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	x = malloc(sizeof(int) * size);

	if (x == NULL)
		return (NULL);

	for (a = 0; min <= max; a++)
		x[a] = min++;

	return (x);
}
