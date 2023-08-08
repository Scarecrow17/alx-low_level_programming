#include "main.h"

/**
 * clear_bit - set the value of bit given index
 * @n: number to p
 * @index: bit to set
 * Return: 1 succes, or -1 fail
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int p;

	
	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	p = ~(1 << index);
	*n = *n & p;

	return (1);
}
