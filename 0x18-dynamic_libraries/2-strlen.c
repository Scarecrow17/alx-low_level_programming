#include "main.h"
/**
 * _strlen - return string length
 * @s: char to evaluate
 * Return: string length
 */

int _strlen(char *s)
{
	int p = 0;

	for (; *s++;)
		p++;
	return (p);
}

