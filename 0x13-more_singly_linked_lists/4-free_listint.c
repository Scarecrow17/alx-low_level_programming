#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - frees a listint_t list
 * @head: head of the list
 * Return: Null
 */

void free_listint(listint_t *head)
{
	listint_t *tem;

	while (head)
	{
		tem = head->next;
		free(head);
		head = tem;
	}
}
