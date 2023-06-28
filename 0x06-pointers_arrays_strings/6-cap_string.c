#include "main.h"

/**
 * cap_string - capitalizes all words in a string
 * @s: string to chnge
 * Return: resulting string
 */
char *cap_string(char *s)
{
	int p = 0, x;
	char a[] = " \t\n,;.!?\"(){}";

	while (*(s + p))
	{
		if (*(s + p) >= 'a' && *(s + p) <= 'z')
		{
			if (p == 0)
				*(s + p) -= 'a' - 'A';
			else
			{
				for (x = 0; x <= 12; x++)
				{
					if (a[x] == *(s + p - 1))
						*(s + p) -= 'a' - 'A';
				}
			}
		}
		p++;
	}
	return (s);
}
