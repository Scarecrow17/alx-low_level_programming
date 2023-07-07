#include <stdio.h>
#include <stdlib.h>

/**
 * main - add +ve numbers
 * @argc: number of arguments
 * @argv: arguments array
 * Return: 0 or 1(success)
 */
int main(int argc, char **argv)
{
	int p, n, value = 0;
	char *flag;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}

	for (p = 1; argv[p]; p++)
	{
		x = strtol(argv[p], &flag, 10);
		if (*flag)
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			value += x;
		}
	}
	printf("%d\n", value);

	return (0);
}
