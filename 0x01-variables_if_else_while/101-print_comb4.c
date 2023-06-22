#include <stdio.h>

/**
 * main - Print possible combinations of 3 different numbers
 * Return: Always 0
 */

int main(void)
{
        int i, j, x;

	for (i = 0; i < 8; i++)
	{
		for (j = i + 1; j < 9; j++)
		{
			for (x = j + 1; x < 10; x++)
			{
				putchar((i % 10) + '0');
				putchar((j % 10) + '0');
				putchar((x % 10) + '0');

				if (i == 7 && j == 8 && x == 9)
					continue;
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}
