#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - add node at end of a listint_t list
 * @head: head of double pointer
 * @n: int add the list
 * Return: pointer new node, or NULL
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *point;
	listint_t *temp = *head;

	point = malloc(sizeof(listint_t));
	if (!point)
		return (NULL);

	point->n = n;
	point->next = NULL;

	if (*head == NULL)
	{
		*head = point;
		return (point);
	}


	while (temp->next)
		temp = temp->next;

	temp->next = point;

	return (point);
}
