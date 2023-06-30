#include "main.h"

/**
 * rot13 - encode string using rot13
 * @s: string to encode
 * Return: resultant string
 */
char *rot13(char *s)
{
	int p, x;

	char a[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char b[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (p = 0; s[p] != '\0'; p++)
	{
		for (x = 0; a[x] != '\0'; x++)
		{
			if (s[p] == a[x])
			{
				s[p] = b[x];
				break;
			}
		}
	}

	return (s);
}

