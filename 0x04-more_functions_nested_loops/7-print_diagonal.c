#include "main.h"

/**
 * print_diagonal - print diagonal line in terminal
 * @n: numb of times to print
 * Return: none
 */


void print_diagonal(int n)
{
	int x, p;

	if (n <= 0)
		_putchar('\n');
	for (x = 0; x < n; x++)
	{
		for (p = 0; p < x; p++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}

}

