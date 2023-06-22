#include <stdio.h>

/**
 * main - Print all combinations of single digits numbers.
 * ascending order. separated by comma.
 * Return: Always 0
 */
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		putchar((n % 10) + '0');
		if (n == 9)
			continue;
		putchar(',');
		putchar(' ');
	}

	putchar('\n');

	return (0);
}

