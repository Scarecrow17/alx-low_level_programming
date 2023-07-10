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
	char *arg, *s;
	int p, q, r, len = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (p = 0; p < ac; p++)
	{
		s = av[p];
		q = 0;

		while (s[q++])
			len++;
		len++;
	}

	arg = (char *)malloc(sizeof(char) * (len + 1));
	if (arg == NULL)
		return (NULL);

	for (p = 0, q = 0; p < ac && q < len; p++)
	{
		s = av[p];
		r = 0;

		while (s[r])
		{
			arg[q] = s[r];
			r++;
			q++;
		}
		arg[q++] = '\n';
	}
	arg[q] = '\0';

	return (arg);
}
