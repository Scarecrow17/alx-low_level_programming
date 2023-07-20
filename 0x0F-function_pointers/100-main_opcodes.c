#include <stdio.h>
#include <stdlib.h>

/**
 * main - print own opcodes of program
 * @argc: argument count
 * @argv: argument array
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int bytes, p;
	char *array;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	array = (char *)main;

	for (p = 0; p < bytes; p++)
	{
		if (p == bytes - 1)
		{
			printf("%02hhx\n", array[p]);
			break;
		}
		printf("%02hhx ", array[p]);
	}
	return (0);
}
