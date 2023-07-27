#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - print elements of linked list
 * @h: list name
 * Return: number of printed nodes
 */

size_t print_list(const list_t *h)
{
	int counter = 0;

	while (h)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}

		else
		{
		printf("[%d] %s\n", h->len, h->str);
		}
		counter++;
		h = h->next;
	}
	return (counter);
}
