#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - concatenates strings
 * @s1: string one
 * @s2: string two
 * Return: pointer to new string otherwise NULL
 */

char *str_concat(char *s1, char *s2)
{
	int p, q, len1, len2, len;
	char *pointer;

	len1 = len2 = 0;

	if (s1 != NULL)
	{
		p = 0;
		while (s1[p++] != '\0')
			len1++;
	}

	if (s2 != NULL)
	{
		p = 0;
		while (s2[p++] != '\0')
			len2++;
	}

	len = len1 + len2;
	pointer = (char *)malloc(sizeof(char) * (len + 1));
	if (pointer == NULL)
		return (NULL);

	for (p = 0; p < len1; p++)
		pointer[p] = s1[p];

	for (q = 0; q < len2; q++, p++)
		pointer[p] = s2[q];
	pointer[len] = '\0';

	return (pointer);
}
