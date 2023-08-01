#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - delete node in linked list at certain index
 * @head: first element pointer
 * @index: node index to delete
 * Return: 1 or -1
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int p;
	listint_t *tem, *next;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		next = (*head)->next;
		free(*head);
		*head = next;
		return (1);
	}
	tem = *head;

	for (p = 0; p < index - 1; p++)
	{
		if (tem->next == NULL)
			return (-1);
		tem = tem->next;
	}
	next = tem->next;
	tem->next = next->next;
	free(next);
	return (1);

}
