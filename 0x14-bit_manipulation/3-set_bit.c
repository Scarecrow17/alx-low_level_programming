#include "main.h"

/**
 * set_bit - set value of bit to 1 at given index
 * @n: x pointer
 * @index: index to change, from 0
 * Return: 1 success, -1 fail
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int x;


	if (index > 64)
		return (-1);

	for (x = 1; index > 0; index--, x *= 2)
		;
	
	*n += x;

	return (1);
}
