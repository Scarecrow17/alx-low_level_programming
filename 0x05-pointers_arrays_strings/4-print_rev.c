#include "main.h"

/**
* print_rev -> print string in reverse
* @s: string to be printed
*/

void print_rev(char *s)
{
	int p, x;

	x = 0;
	while (s[x] != '\0')
		x++;

	for (p = x - 1; p >= 0; p--)
	{
		_putchar(s[p]);
	}
	_putchar('\n');
}
