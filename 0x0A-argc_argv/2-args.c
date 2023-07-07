#include <stdio.h>

/**
 * main - print all arguments received
 * @argc: number of arguments
 * @argv: arguments array
 * Return: 0 (success)
 */

int main(int argc, char **argv)
{
	int p;

	for (p = 0; p < argc; p++)
		printf("%s\n", argv[p]);

	return (0);
}
