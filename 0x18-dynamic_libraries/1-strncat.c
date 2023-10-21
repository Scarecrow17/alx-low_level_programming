#include "main.h"

/**
 * _strncat - concatenate n bytes between strings
 * @dest: destination of the string
 * @src: source of strings
 * @n: num of bytes
 * Return: pointer to  string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int p, s;

	p = 0;
	s = 0;

	while (dest[p] != '\0')
		p++;

	while (src[s] != '\0' && s < n)
	{
		dest[p] = src[s];
		p++;
		s++;
	}

	dest[p] = '\0';

	return (dest);
}
