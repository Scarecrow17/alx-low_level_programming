#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - function given as parameter
 * on each element of array
 * @array: array to execute function
 * @size: array size
 * @action: function used pointer
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int p;

	if (!array || !action)
		return;

	for (p = 0; p < size; p++)
		action(array[p]);
}
