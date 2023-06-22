#include <stdio.h>

/**
 * main - print the first 98 Fibonacci numbers
 * Return: ALways 0
 */
int main(void)
{
	unsigned long int f1, f2, f3, f2a, f2b, f3a, f3b;

	f2 = 1;
	f3 = 2;

	printf("%lu", f2);

	for (f1 = 1; f1 < 91; f1++)
	{
		printf(", %lu", f3);
		f3 = f3 + f2;
		f2 = f3 - f2;
	}

	f2a = f2 / 1000000000;
	f2b = f2 % 1000000000;
	f3a = f3 / 1000000000;
	f3b = f3 % 1000000000;

	for (f1 = 92; f1 < 99; ++f1)
	{
		printf(", %lu", f3a + (f3b / 1000000000));
		printf("%lu", f3b % 1000000000);
		f3a = f3a + f2a;
		f2a = f3a - f2a;
		f3b = f3b + f2b;
		f2b = f3b - f2b;
	}

	printf("\n");

	return (0);
}

