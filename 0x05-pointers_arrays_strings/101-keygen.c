#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generate random valid codes for a program
 * Return: Always 0
 */
int main(void)
{
	int pass[100];
	int a, total, b;

	total = 0;	

	srand(time(NULL));

	for (a = 0; a < 100; a++)
	{
		pass[a] = rand() % 78;
		total += (pass[a] + '0');
		putchar(pass[a] + '0');
		if ((2772 - total) - '0' < 78)
		{
			b = 2772 - total - '0';
			total += b;
			putchar(b + '0');
			break;
		}
	}

	return (0);
}

