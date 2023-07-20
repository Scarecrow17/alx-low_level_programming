#include "variadic_functions.h"

/**
 * print_numbers - print numbers as parameters
 * @n: number of integers
 * @separator: string printed between numbers
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int p;
	va_list list;

	va_start(list, n);

	if (separator == NULL)
		separator = "";

	for (p = 0; p < n; p++)
	{
		printf("%d", va_arg(list, int));
		if (p < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(list);
}
