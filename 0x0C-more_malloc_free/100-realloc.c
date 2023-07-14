#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocate memory block through malloc and free
 * @ptr: pointer to prev allocated memory
 * @old_size: size of memory in pointer
 * @new_size: memory block new size
 * Return: pointer to new memory or NULL
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *x;
	unsigned int q, n = new_size;
	char *oldx = ptr;

	if (ptr == NULL)
	{
		x = malloc(new_size);
		return (x);
	}
	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	else if (new_size == old_size)
		return (ptr);

	x = malloc(new_size);

	if (x == NULL)
		return (NULL);
	if (new_size > old_size)
		n = old_size;

	for (q = 0; q < n; q++)
		x[q] = oldx[q];
	free(ptr);
	return (x);
}
