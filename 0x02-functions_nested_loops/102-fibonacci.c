#include <stdio.h>

/**
 * main - Print first 50 Fibonacci numbs from 1 & 2
 * Return: Always 0 (sucess)
 */
int main(void)
{
	int i;
	unsigned long f1 = 0, f2 = 1, add;

	for (i = 0; i < 50; i++)
	{
		add = f1 + f2;
		printf("%lu", add);

		f1 = f2;
		f2 = add;

		if (i == 49)
			printf("\n");
		else
			printf(", ");
	}

	return (0);
}

