#include "main.h"

/**
 * print_line - draw straight line in terminal
 * @n: num of times to print
 * Return: none
 */

void print_line(int n)
{
	int x;

	for (x = 0; x < n; x++)
	{
		_putchar('_');
	}
	_putchar('\n');
}

