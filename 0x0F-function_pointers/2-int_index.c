#include "function_pointers.h"

/**
 * int_index - search for integer
 * @array: search in array
 * @size: array size
 * @cmp: comparing function pointer
 * Return: index of first element when
 * cmp function is not 0, or -1 if no match
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int p;

	if (array && cmp)
	{
		for (p = 0; p < size; p++)
		{
			if (cmp(array[p]) != 0)
				return (p);
		}
	}

	return (-1);
}
