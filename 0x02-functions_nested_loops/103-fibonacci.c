#include <stdio.h>

/**
 * main - print sum of the even-valued fibonacci sequence
 * Return: Always 0
 */
int main(void)
{
	int count;
	unsigned long int f1, f2, next, fibsum;

	f1 = 1;
	f2 = 2;
	fibsum = 0;

	for (count = 1; count <= 33; ++count)
	{
		if (f1 < 4000000 && (f1 % 2) == 0)
		{
			fibsum = fibsum + f1;
		}
		next = f1 + f2;
		f1 = f2;
		f2 = next;
	}

	printf("%lu\n", fibsum);

	return (0);
}

