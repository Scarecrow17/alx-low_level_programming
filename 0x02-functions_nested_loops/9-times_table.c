#include "main.h"

/**
 * times_table - Print 9x table from 0
 */
void times_table(void)
{
	int p, n, m;

	for (p = 0; p <= 9; p++)
	{
		_putchar('0');

		for (n = 1; n <= 9; n++)
		{
			_putchar(',');
			_putchar(' ');

			m = p * n;

			if (m <= 9)
				_putchar(' ');
			else
				_putchar((m / 10) + '0');

			_putchar((m % 10) + '0');
		}
		_putchar('\n');
	}
}

