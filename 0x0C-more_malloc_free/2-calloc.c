#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocate memory for array using malloc
 * @nmemb: number of elements in array
 * @size: size of each element
 * Return: pointer or NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *x;
	unsigned int p;

	if (nmemb == 0 || size == 0)
		return (NULL);

	x = malloc(nmemb * size);
	if (x == NULL)
		return (NULL);

	for (p = 0; p < (nmemb * size); p++)
		x[p] = 0;
	return (x);
}
