#include "main.h"
#include <stdlib.h>

/**
 * *_strdup - return pointer to newly allocated space
 * @str: source string
 * Return: pointer to duplicate string, or NULL
 */

char *_strdup(char *str)
{
	char *copy;
	unsigned int p, len;

	p = 0;
	len = 0;

	if (str == NULL)
		return (NULL);

	while (str[len])
		len++;

	copy = malloc(sizeof(char) * (len + 1));

	if (copy == NULL)
		return (NULL);

	while ((copy[p] = str[p]) != '\0')
		p++;

	return (copy);
}
