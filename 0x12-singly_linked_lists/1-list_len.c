#include <stdlib.h>
#include "lists.h"

/**
 * list_len - return number of elements in linked list
 * @h: points list_t list
 * Return: number of h elements
 */

size_t list_len(const list_t *h)
{
	size_t p = 0;

	while (h)
	{
		p++;
		h = h->next;
	}
	return (p);
}
