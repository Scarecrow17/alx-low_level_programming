#include "lists.h"

/**
 * dlistint_len - returns element number in list
 * @h: head of list
 * Return: the number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	int c;

	c = 0;

	if (h == NULL)
		return (c);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		c++;
		h = h->next;
	}

	return (c);
}
