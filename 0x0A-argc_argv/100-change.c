#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - print minimum number of coins to
 * make change for money
 * @argc: argument count
 * @argv: argument array
 * Return: 0 (Success), otherwise 1
 */

int main(int argc, char *argv[])
{
	int total, p, answer;
	int cents[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	total = atoi(argv[1]);
	answer = 0;

	if (total < 0)
	{
		printf("0\n");
		return (0);
	}

	for (p = 0; p < 5 && total >= 0; p++)
	{
		while (total >= cents[p])
		{
			answer++;
			total -= cents[p];
		}
	}

	printf("%d\n", answer);
	return (0);
}
