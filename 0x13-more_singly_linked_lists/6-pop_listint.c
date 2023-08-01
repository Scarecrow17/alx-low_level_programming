#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - delete head node of linked list
 * @head: pointer t first element in linked list
 *Return: data inside deleted elements or 0
 */

int pop_listint(listint_t **head)
{
	listint_t *start;
	int number;

	if (head == NULL || *head == NULL)
		return (0);

	start = *head;
	*head = start->next;
	number = start->n;
	free(start);

	return (number);
}
