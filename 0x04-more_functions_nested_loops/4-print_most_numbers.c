#include "main.h"

/**
 * print_most_numbers - print numbers from 0 to 9 (no 2 & 4)
 * Return: void
 */
void print_most_numbers(void)
{
	int p;

	for (p = 0; p < 10; p++)
	{
		if (p != 2 && p != 4)
		{
			_putchar(p + '0');
		}
	}

	_putchar('\n');
}

