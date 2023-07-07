#include "main.h"

/**
 * _strncpy - copy string
 * @dest: destination of string
 * @src: source of strings
 * @n: num of bytes copied
 * Return: pointer to string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int p;

	p = 0;

	while (src[p] != '\0' && p < n)
	{
		dest[p] = src[p];
		p++;
	}

	while (p < n)
	{
		dest[p] = '\0';
		p++;
	}

	return (dest);
}

