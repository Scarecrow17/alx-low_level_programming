#include "main.h"

/**
 * swap_int - swap values of two integers
 * @a: first digit pointer
 * @b: second digit pointer
 */
void swap_int(int *a, int *b)
{
	int p;

	p = *a;
	*a = *b;
	*b = p;
}

