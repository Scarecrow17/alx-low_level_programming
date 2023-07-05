#include "main.h"
/**
 * _strlen_recursion - return length of string
 * @s: string to calculate length
 * Return: length of string
 */

int _strlen_recursion(char *s)
{
	int p = 0;

	if (*s)
	{
		p++;
		p += _strlen_recursion(s + 1);

	}
	return (p);
}
