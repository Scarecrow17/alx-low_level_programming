#include "variadic_functions.h"

/**
 * sum_them_all - calculate sum of all parameters
 * @n: number of parameters passed
 * Return: sum answer or 0
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int p;
	int sum = 0;
	va_list ap;

	va_start(ap, n);

	for (p = 0; p < n; p++)
		sum += va_arg(ap, int);

	va_end(ap);

	return (sum);
}
