#include "main.h"

/**
 * *_strspn - get length of prefix substring
 * @s: initial string
 * @accept: string to match with s
 * Return: num of bytes in initial segment
 */
unsigned int _strspn(char *s, char *accept)
{
	int a, b, c, d;

	f = 0;

	for (a = 0; s[a] != '\0'; a++)
	{
		d = 0;
		for (b = 0; accept[b] != '\0'; b++)
		{
			if (s[a] == accept[b])
			{
				c++;
				d = 1;
			}
		}
		if (d == 0)
		{
			return (c);
		}
	}

	return (0);
}
