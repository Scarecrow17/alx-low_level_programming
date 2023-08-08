#include "main.h"
#include <stdio.h>

/**
 * get_bit - get value of bit at given index
 * @n: evaluation number
 * @index: index of bit needed
 * Return: bit index value, or -1 fail
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int dev;

	if (index > 64)
		return (-1);


	dev = n >> index;

	return (dev & 1);
}
