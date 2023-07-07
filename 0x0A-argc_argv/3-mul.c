#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiply 2 numbers
 * @argc: number of arguments
 * @argv: arguments array
 * Return: 0 (success)
 */

int main(int argc, char **argv)
{
	int p, j;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}

	p = atoi(argv[1]);
	j = atoi(argv[2]);
	printf("%d\n", p * j);

	return (0);
}
