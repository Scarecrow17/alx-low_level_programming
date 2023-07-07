#include "main.h"
#include <stdio.h>

/**
 * *_strstr - locate substring
 * @haystack: search string
 * @needle: first occurrence of substring
 * Return: pointer to start of located substring. NULL if substring not found
 */
char *_strstr(char *haystack, char *needle)
{
	int p, x;

	for (p = 0; haystack[p] != '\0'; p++)
	{
		for (x = 0; needle[x] != '\0'; x++)
		{
			if (haystack[p + x] != needle[x])
				break;
		}
		if (!needle[x])
			return (&haystack[p]);
	}
	return (NULL);
}
