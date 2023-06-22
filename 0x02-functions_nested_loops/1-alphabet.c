#include "main.h"

/**
 * print_alphabet - print alphabet in lowercase then new line
 */
void print_alphabet(void)
{
	char alph;

	for (alph = 'a'; alph <= 'z'; alph++)
		_putchar(alph);

	_putchar('\n');
}

