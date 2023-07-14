#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * is_digit - check if string has non-digit character
 * @s: evaluation string
 * Return: 0 (non-digit), otherwise 1
 */

int is_digit(char *s)
{
	int p = 0;

	while (s[p])
	{
		if (s[p] < '0' || s[p] > '9')
			return (0);
		p++;
	}
	return (1);
}

/**
 * _strlen - return length of string
 * @s: evaluation string
 * Return: string length
 */

int _strlen(char *s)
{
	int p = 0;

	while (s[p] != '\0')
	{
		p++;
	}
	return (p);
}

/**
 * errors - handle errors from main
 */

void errors(void)
{
        printf("Error\n");
        exit(98);
}

/**
 * main - multiply 2 positive numbs
 * @argc: arguments count
 * @argv: arguments array
 * Return: 0(Success)
 */

int main(int argc, char *argv[])
{
	char *s1, *s2;
	int L1, L2, L, p, move, d1, d2, *answer, q = 0;

	s1 = argv[1], s2 = argv[2];
	if (argc != 3 || !is_digit(s1) || !is_digit(s2))
		errors();
	L1 = _strlen(s1);
	L2 = _strlen(s2);
	L = L1 + L2 + 1;
	answer = malloc(sizeof(int) * L);
	if (!answer)
		return (1);
	for (p = 0; p <= L1 + L2; p++)
		answer[p] = 0;
	for (L1 = L1 - 1; L1 >= 0; L1--)
	{
		d1 = s1[L1] - '0';
		move = 0;
		for (L2 = _strlen(s2) - 1; L2 >= 0; L2--)
		{
			d2 = s2[L2] - '0';
			move += answer[L1 + L2 + 1] + (d1 * d2);
			answer[L1 + L2 + 1] = move % 10;
			move /= 10;
		}
		if (move > 0)
			answer[L1 + L2 + 1] += move;
	}
	for (p = 0; p < L - 1; p++)
	{
		if (answer[p])
			q = 1;
		if (q)
			_putchar(answer[p] + '0');
	}
	if (!q)
		_putchar('0');
	_putchar('\n');
	free(answer);
	return (0);
}
