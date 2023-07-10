#include "main.h"
#include <stdlib.h>

/**
 * count_word - count words in a string
 * @s: string evaluated
 * Return: word count
 */

int count_word(char *s)
{
	int count, p, words;

	count = 0;
	words = 0;

	for (p = 0; s[p] != '\0'; p++)
	{
		if (s[p] == ' ')
			count = 0;
		else if (count == 0)
		{
			count = 1;
			words++;
		}
	}

	return (words);
}
/**
 * **strtow - split string into words
 * @str: string for splitting
 * Return: point strings array (Success), otherwise NULL
 */

char **strtow(char *str)
{
	char **array, *tmp;
	int p, q = 0, len = 0, w, r = 0, begin, finish;

	while (*(str + len))
		len++;
	w = count_word(str);
	if (w == 0)
		return (NULL);

	array = (char **) malloc(sizeof(char *) * (w + 1));
	if (array == NULL)
		return (NULL);

	for (p = 0; p <= len; p++)
	{
		if (str[p] == ' ' || str[p] == '\0')
		{
			if (r)
			{
				finish = p;
				tmp = (char *) malloc(sizeof(char) * (r + 1));
				if (tmp == NULL)
					return (NULL);
				while (begin < finish)
					*tmp++ = str[begin++];
				*tmp = '\0';
				array[q] = tmp - r;
				q++;
				r = 0;
			}
		}
		else if (r++ == 0)
			begin = p;
	}

	array[q] = NULL;

	return (array);
}
