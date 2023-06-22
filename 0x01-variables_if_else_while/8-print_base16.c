#include <stdio.h>

/**
 * main - Print all base 16 num in lowercase. Main func
 * Return: Always 0
 */
int main(void)
{
	int num;
	char alph;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');

	for (alph = 'a'; alph <= 'f'; alph++)
		putchar(alph);

	putchar('\n');

	return (0);
}

