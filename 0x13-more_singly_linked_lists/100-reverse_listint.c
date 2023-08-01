#include "lists.h"

/**
 * reverse_listint - reverse linked list
 * @head: double pointer
 * Return: pointer to first node in reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *previous = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = previous;
		previous = *head;
		*head = next;
	}

	*head = previous;


	return (*head);
}
