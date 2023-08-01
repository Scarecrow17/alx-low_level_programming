#include "lists.h"

/**
 * print_listint - prints allelements of listint_t list
 * @h: head of linklist node
 * Return: nodes count
 */

size_t print_listint(const listint_t *h)
{
	size_t counter = 0;

	while (h)
	{
		printf("%d\n", h->n);
		counter++;
		h = h->next;
	}


	return (counter);
}
