#include "main.h"

/**
  * print_number - Print integer using putchar
  * @n: integer to print
  */
void print_number(int n)
{
	unsigned int p;

	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}

	p = n;

	if (p / 10)
		print_number(p / 10);

	_putchar(p % 10 + '0');
}

