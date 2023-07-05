#include "main.h"

int actual_sqrt_recursion(int n, int i);

/**
 * _sqrt_recursion - return natural square root of a number
 * @n: number to find sqrt of
 * Return: square root or -1
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}

/**
 * actual_sqrt_recursion - recurse to find sqrt of number
 * @n: number to find sqrt of
 * @i: iterator
 * Return: square root
 */

int actual_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);

	if (i * i == n)
		return (i);

	return (actual_sqrt_recursion(n, i + 1));
}
