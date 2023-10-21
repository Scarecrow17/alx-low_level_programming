#include "main.h"
#include <stdio.h>

/**
 * _strpbrk -  search string for set of bytes
 * @s: string to search
 * @accept: string with bytes to look for
 * Return: a pointer to byte in s
 */
char *_strpbrk(char *s, char *accept)
{
	int a;
		while (*s)
		{
			for (a = 0; accept[a]; a++)
			{
				if (*s == accept[a])
					return (s);
			}
			s++;
		}
	return (NULL);
}
