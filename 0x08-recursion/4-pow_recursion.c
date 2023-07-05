#include "main.h"

/**
 * _pow_recursion - returns value of a number raised to a power
 * @x: value raised to y
 * @y: power of x
 * Return: value of power
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}
