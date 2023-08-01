#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - function freeing listint_t list
 * @head: double pointer of list
 */

void free_listint2(listint_t **head)
{
	listint_t *tem;

	if (head == NULL)
		return;


	while (*head)
	{
		tem = (*head)->next;
		free(*head);
		*head = tem;
	}

	*head = NULL;
}
