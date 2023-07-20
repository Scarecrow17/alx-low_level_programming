#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - print name
 * @name: given name
 * @f: printing function pointer
 */

void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)

		return;
	f(name);
}
