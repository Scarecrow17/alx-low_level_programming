#include "variadic_functions.h"

/**
 * print_all - Print all arguments and anything
 * @format: list argument types to the function
 */

void print_all(const char * const format, ...)
{
	int p;
	int sep;
	char *str;
	va_list list;

	va_start(list, format);
	p = 0;
	while (format != NULL && format[p] != '\0')
	{
		switch (format[p])
		{
			case 'c':
				printf("%c", va_arg(list, int));
				sep = 0;
				break;
			case 'i':
				printf("%i", va_arg(list, int));
				sep = 0;
				break;
			case 'f':
				printf("%f", va_arg(list, double));
				sep = 0;
				break;
			case 's':
				str = va_arg(list, char*);
				if (str == NULL)
					str = "(nil)";
				printf("%s", str);
				sep = 0;
				break;
			default:
				sep = 1;
				break;
		}
		if (format[p + 1] != '\0' && sep == 0)
			printf(", ");
		p++;
	}
	printf("\n");
	va_end(list);
}
