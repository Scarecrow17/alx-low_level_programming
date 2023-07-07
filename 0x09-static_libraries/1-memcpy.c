#include "main.h"

/**
 * _memcpy - copy memory area
 * @n: number of bytes to copy
 * @src: memory area to copy
 * @dest: destination
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a = 0;

	while (a < n)
	{
		dest[a] = src[a];
		a++;
	}

	return (dest);
}

