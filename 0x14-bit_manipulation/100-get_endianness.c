#include "main.h"

/**
 * get_endianness - check the  endianness
 * Return: 0 endian, or 1 little endian
 */

int get_endianness(void)
{
	int p;

	p = 1;
	if (*(char *)&p == 1)
		return (1);
	else
		return (0);
}
