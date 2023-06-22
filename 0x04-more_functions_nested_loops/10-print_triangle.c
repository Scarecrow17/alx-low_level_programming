#include "main.h"

/**
 * print_triangle - Print triangle
 *@size: size of triangle
 * Return: none
 */

void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	} else
	{
		int p, x;

		for (p = 1; p <= size; p++)
		{
			for (x = p; x < size; x++)
			{
				_putchar(' ');
			}

			for (x = 1; x <= p; x++)
			{
				_putchar('#');
			}

			_putchar('\n');
		}
	}
}
