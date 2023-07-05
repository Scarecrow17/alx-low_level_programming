#include "main.h"

/**
 * factorial - return factorial of a number
 * @n: number to return factorial
 * Return: factorial of n
 */

int factorial(int n)
{
	int p;

	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		p = n * factorial(n - 1);
	}
			return (p);

}
