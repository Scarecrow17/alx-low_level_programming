#include "main.h"

/**
 * print_times_table - Print n times tables from 0
 * @n: number of times table
 */
void print_times_table(int n)
{
	int i, j, x;

	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			_putchar('0');

			for (j = 1; j <= n; j++)
			{
				_putchar(',');
				_putchar(' ');

				prod = i * j;

				if (x <= 99)
					_putchar(' ');
				if (x <= 9)
					_putchar(' ');

				if (x >= 100)
				{
					_putchar((x / 100) + '0');
					_putchar(((x / 10)) % 10 + '0');
				}
				else if (x <= 99 && x >= 10)
				{
					_putchar((x / 10) + '0');
				}
				_putchar((x % 10) + '0');
			}
			_putchar('\n');
		}
	}
}

