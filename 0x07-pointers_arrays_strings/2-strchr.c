#include "main.h"

/**
 * _strchr - locate character in a string
 * @c: char to find
 * @s: string
 * Return: pointer to first occurrence of char c
 */

char *_strchr(char *s, char c)
{
		int i;

		while (1)
		{
			i = *s++;
			if (i == c)
			{
				return (s - 1);
			}
			if (i == 0)
			{
				return (NULL);
			}
		}
}
