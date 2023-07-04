#include "main.h"
#include <stdio.h>

/**
 * print_chessboard - print a chessboard
 * @a: pointer to pieces to print
 */

void print_chessboard(char (*a)[8])
{
	int p, x;

	for (p = 0; p < 8; p++)
	{
		for (x = 0; x < 8; x++)
		{
			_putchar(a[p][x]);
		}
		_putchar('\n');
	}
}
