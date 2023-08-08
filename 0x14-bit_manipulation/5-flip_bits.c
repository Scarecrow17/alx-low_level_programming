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
	unsigned long int diff, answer;
	unsigned int q, p;

	q = 0;
	answer = 1;
	diff = n ^ m;

	for (p = 0; p < (sizeof(unsigned long int) * 8); p++)
	{
		if (answer == (diff & answer))
			q++;
		answer <<= 1;
	}

	return (q);
}
