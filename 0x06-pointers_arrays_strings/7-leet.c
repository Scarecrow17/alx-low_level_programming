#include "main.h"

/**
 * leet - encode string into 1337
 * @s: string to be encoded
 * Return: resulting string
 */
char *leet(char *s)
{
	int p, x;
	char a[] = "aAeEoOtTlL";
	char b[] = "4433007711";

	for (p = 0; *(s + p); p++)
	{
		for (x = 0; x <= 9; x++)
		{
			if (a[x] == s[p])
				s[p] = b[x];
		}
	}
	return (s);
}
