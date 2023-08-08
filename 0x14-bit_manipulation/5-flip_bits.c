#include "main.h"
#include <stdio.h>

/**
 * flip_bits - flip bits convert one number to another
 * @n: number one
 * @m: number two
 * Return: bit number to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int difs;
	int count;

	difs = n ^ m;
	count = 0;

	while (difs)
	{
		count++;
		difs &= (difs - 1);
	}

	return (counter);
}
