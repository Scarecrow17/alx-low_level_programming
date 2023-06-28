#include "main.h"

/**
 * _strcat - concatenate strings
 * @dest: resulting string
 * @src: char to add
 * Return: pointer to dest
 */
char *_strcat(char *dest, char *src)
{
	int s, p;

	s = 0;
	p = 0;

	while (dest[s] != '\0')
		s++;

	while (src[p] != '\0')
	{
		dest[s] = src[p];
		p++;
		s++;
	}

	dest[s] = '\0';

	return (dest);
}
