#include "main.h"
#include <stdio.h>

/**
 * set_string - set value of pointer to a char
 * @s: pointer to alter
 * @to: string to change pointer to
 */

void set_string(char **s, char *to)
{
	*s = to;
}
