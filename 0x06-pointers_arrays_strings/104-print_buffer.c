#include "main.h"
#include <stdio.h>

/**
 * print_line - print bytes of a buffer
 * @c: buffer
 * @s: bytes to print
 * @l: line of buffer
 * Return: void
 */

void print_line(char *c, int s, int l)
{
	int q, r;

	for (q = 0; q <= 9; q++)
	{
		if (q <= s)
			printf("%02x", c[l * 10 + q]);
		else
			printf("  ");
		if (q % 2)
			putchar(' ');
	}
	for (r = 0; r <= s; r++)
	{
		if (c[l * 10 + r] > 31 && c[l * 10 + r] < 127)
			putchar(c[l * 10 + r]);
		else
			putchar('.');
	}
}

/**
 * print_buffer - print buffer
 * @b: buffer
 * @size:buffer size
 * Return: void
 */
void print_buffer(char *b, int size)
{
	int p;

	for (p = 0; p <= (size - 1) / 10 && size; p++)
	{
		printf("%08x: ", p * 10);
		if (p < size / 10)
		{
			print_line(b, 9, p);
		}
		else
		{
			print_line(b, size % 10 - 1, p);
		}
		putchar('\n');
	}
	if (size == 0)
		putchar('\n');
}

