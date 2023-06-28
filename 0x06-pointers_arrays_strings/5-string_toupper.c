#include "main.h"

/**
 * string_toupper - change lowercase to uppercase
 * @s: string to change
 * Return: string resultant
 */
char *string_toupper(char *s)
{
	int p;

	for (p = 0; s[p] != '\0'; p++)
	{
		if (s[p] >= 'a' && s[p] <= 'z')
			s[p] = s[p] - 32;
	}

	return (s);
}
