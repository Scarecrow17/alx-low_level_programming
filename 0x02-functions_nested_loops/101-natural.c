#include <stdio.h>

/**
 * main - compute & print sum of multiples
 * Return: Always 0
 */
int main(void)
{
	unsigned long int i3, i5, j;
	int i;

	i3 = 0;
	i5 = 0;
	j = 0;

	for (i = 0; i < 1024; ++i)
	{
		if ((i % 3) == 0)
		{
			i3 = i3 + i;
		} else if ((i % 5) == 0)
		{
			i5 = i5 + i;
		}
	}
	j = i3 + i5;
	printf("%lu\n", j);
	return (0);
}

