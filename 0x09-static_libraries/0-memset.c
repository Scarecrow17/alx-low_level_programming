#include "main.h"

/**
 * *_memset - fill memory with constant byte
 * @s: fill with constant byte
 * @b: pointer
 * @n: bytes of memory area
 *
 * Return: pointer to s memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		s[a] = b;
	}

	return (s);
}

