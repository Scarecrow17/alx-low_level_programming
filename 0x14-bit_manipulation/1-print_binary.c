#include "main.h"
#include <stdio.h>

/**
 * print_binary - print binary representation of number
 * @n: printed number
 */

void print_binary(unsigned long int n)
{
	unsigned long int result;
	int flag;

	if (n == 0)
	{
		printf("0");
		return;
	}

	for (result = n, flag = 0; (result >>= 1) > 0; flag++)
		;


	for (; flag >= 0; flag--)
	{
		if ((n >> flag) & 1)
			printf("1");
		else
			printf("0");
	}
}
