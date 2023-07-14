#include <stdlib.h>
#include "main.h"

/**
 * *string_nconcat - concatenate two strings
 * @s1: appending string
 * @s2: concatenating string
 * @n: unsigned integer
 * Return: NULL(fail), pointer to new string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int p = 0, q = 0, L1 = 0, L2 = 0;

	while (s1 && s1[L1])
		L1++;
	while (s2 && s2[L2])
		L2++;

	if (n < L2)
		s = malloc(sizeof(char) * (L1 + n + 1));
	else
		s = malloc(sizeof(char) * (L1 + L2 + 1));

	if (!s)
		return (NULL);

	while (p < L1)
	{
		s[p] = s1[p];
		p++;
	}

	while (n < L2 && p < (L1 + n))
		s[p++] = s2[q++];

	while (n >= L2 && p < (L1 + L2))
		s[p++] = s2[q++];

	s[p] = '\0';

	return (s);
}
