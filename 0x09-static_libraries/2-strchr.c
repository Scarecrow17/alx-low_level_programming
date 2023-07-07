#include "main.h"
#include <stdio.h>

/**
 * _strchr - locate character in a string
 * @c: char to find
 * @s: string
 * Return: pointer to first occurrence of char c
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
			s++;
		else
			return (s);
	}
	if (c == '\0')
		return (s);

	return (NULL);
}

