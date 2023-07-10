#include "main.h"
#include <stdlib.h>

/**
 * create_array - create array of chars
 * & initialize to specific character
 * @size: array size
 * @c: char to initialize to
 * Return: array pointer (success), NULL (fail)
 */

char *create_array(unsigned int size, char c)
{
	char *pointer;
	unsigned int x;

	if (size == 0)
		return (NULL);

	pointer = (char *)malloc(sizeof(char) * size);
	if (pointer == NULL)
		return (NULL);

	for (x = 0; x < size; x++)
		pointer[x] = c;

	return (pointer);
}
