#include "main.h"

/**
 * infinite_add - add two numbers
 * @n1: number one
 * @n2: number two
 * @r: pointer to result buffer
 * @size_r: size of buffer
 * Return: 0
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int p, q, s, t, u, x;

	for (p = 0; n1[p]; p++)
		;
	for (q = 0; n2[q]; q++)
		;
	if (p > size_r || q > size_r)
		return (0);
	u = 0;
	for (p -= 1, q -= 1, s = 0; s < size_r - 1; p--, q--, s++)
	{
		x = u;
		if (p >= 0)
			x += n1[p] - '0';
		if (q >= 0)
			x += n2[q] - '0';
		if (p < 0 && q < 0 && x == 0)
		{
			break;
		}
		u = x / 10;
		r[s] = x % 10 + '0';
	}
	r[s] = '\0';
	if (p >= 0 || q >= 0 || u)
		return (0);
	for (s -= 1, t = 0; t < s; s--, t++)
	{
		u = r[s];
		r[s] = r[t];
		r[t] = u;
	}
	return (r);
}
