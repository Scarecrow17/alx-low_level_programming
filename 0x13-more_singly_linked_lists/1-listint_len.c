#include "lists.h"

/**
 * listint_len - number of elements in a linked listint_t list
 * @h: head pointer
 * Return: number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t counter = 0;

	while (h)
	{
		counter++;
		h = h->next;
	}

	return (counter);
}
