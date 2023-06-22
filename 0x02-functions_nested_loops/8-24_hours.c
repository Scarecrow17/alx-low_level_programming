#include "main.h"

/**
 * jack_bauer - Print every minute of the day of
 *              Jack Bauer, from 00:00 to 23:59
 */
void jack_bauer(void)
{
	int j, x;

	for (j = 0; j <= 23; j++)
	{
		for (x = 0; x <= 59; x++)
		{
			_putchar((j / 10) + '0');
			_putchar((j % 10) + '0');
			_putchar(':');
			_putchar((x / 10) + '0');
			_putchar((x % 10) + '0');
			_putchar('\n');
		}
	}
}

