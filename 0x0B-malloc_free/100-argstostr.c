#include <stdlib.h>
#include "main.h"

/**
  *argstostr - concatenate arguments of program
  *@ac: counts arguments
  *@av: size ac array pointer
  *Return: pointer to new string or NULL (fail)
  */

char *argstostr(int ac, char **av)
{
	int p, q, r, len;
	char *string;

	len = 0;
	r = 0;
	if (ac == 0 || av == NULL)
		return (NULL);
	p = 0;
	while (p < ac)
	{
		r = 0;
		while (av[p][q])
		{
			len++;
			q++;
		}
		len++;
		p++;
	}
	string = malloc((sizeof(char) * len) + 1);
	if (string == NULL)
		return (NULL);
	p = 0;
	while (p < ac)
	{
		q = 0;
		while (av[p][q])
		{
			string[r] = av[p][q];
			q++;
			r++;
		}
		string[r] = '\n';
		r++;
		p++;
	}
	string[p] = '\0';
	return (string);
}
