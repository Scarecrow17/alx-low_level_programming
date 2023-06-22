#include "main.h"

/**
 * print_sign - Print the sign of number "n"
 * Return: 1 if n +,
 *         0 if n =0,
 *         -1 if n -.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}

