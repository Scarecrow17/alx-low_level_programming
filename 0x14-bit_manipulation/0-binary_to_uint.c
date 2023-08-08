#include "main.h"

/**
 * binary_to_uint -change binary number to unsigned integer
 * @b: pointer to a string
 * Return:converted decimal number, or 0
 */

unsigned int binary_to_uint(const char *b)
{
	int tot;
	unsigned int length;

	length = 0;
	if (!b)
		return (0);
	for (tot = 0; b[tot] != '\0'; tot++)
	{
		if (b[tot] != '0' && b[tot] != '1')
			return (0);
	}

	for (tot = 0; b[tot] != '\0'; tot++)
	{
		length <<= 1;
		if (b[tot] == '1')
			length += 1;
	}
	return (length);
}
