#include "main.h"

/**
 * more_numbers - print numbers from 0 to 14 10x
 */
void more_numbers(void)
{
	int p, x;

	for (p = 0; p < 10; p++)
	{
		for (x = 0; x < 15; x++)
		{
			if (x >= 10)
				_putchar(x / 10 + '0');
			_putchar(x % 10 + '0');
		}
		_putchar('\n');
	}
}
