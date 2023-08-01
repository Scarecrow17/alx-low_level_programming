#include "lists.h"

/**
 * add_nodeint - add node at beginning of a listint_t list
 * @head: head of double pointer
 * @n: int add the list
 * Return: pointer to new node or NULL
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *point;

	point = malloc(sizeof(listint_t));
	if (!point)
		return (NULL);

	point->n = n;
	point->next = *head;
	*head = point;

	return (point);
}
