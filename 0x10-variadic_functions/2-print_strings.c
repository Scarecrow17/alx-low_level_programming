#include "variadic_functions.h"

/**
 * print_strings - Print strings separated by separators
 * @separator: string separator
 * @n: argument count
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	char *str;
	unsigned int p;
	va_list list;

	va_start(list, n);
	if (separator == NULL)
		separator = "";

	for (p = 0; p < n; p++)
	{
		str = va_arg(list, char*);
		if (str == NULL)
			str = "(nil)";
		printf("%s", str);
		if (p < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(list);
}
