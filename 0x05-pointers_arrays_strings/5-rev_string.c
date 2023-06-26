#include "main.h"
/**
 * rev_string - reverse string
 * @s: string to reverse
 */
void rev_string(char *s)
{
	char d;
	int i, j, k;

	i = 0

	while (s[i] != '\0')
	{
		i++;
	}
	k = i - 1;
	for (j = 0; k >= 0 && j < k; k--, j++)
	{
		d = s[j];
		s[j] = s[k];
		s[k] = d;
	}
}

