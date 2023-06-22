#include "main.h"

/**
 * print_alphabet_x10 - Print 10x alphabet in lowercase then new line
 */
void print_alphabet_x10(void)
{
	int count = 0;
	char alph;

	while (count++ <= 9)
	{
		for (alph = 'a'; alph <= 'z'; alph++)
			_putchar(alph);
		_putchar('\n');
	}
}

