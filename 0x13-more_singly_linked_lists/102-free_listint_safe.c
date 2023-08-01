#include "lists.h"

/**
 * free_listint_safe - free listint_t linked list
 * @h: pointer to start of list
 * Return: number of nodes in list
 */

size_t free_listint_safe(listint_t **h)
{
	size_t length = 0;
	int difference;
	listint_t *tem;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		difference = *h - (*h)->next;
		if (difference > 0)
		{
			tem = (*h)->next;
			free(*h);
			*h = tem;
			length++;
		}

		else
		{
			free(*h);
			*h = NULL;
			length++;
			break;
		}
	}

	*h = NULL;

	return (length);
}
