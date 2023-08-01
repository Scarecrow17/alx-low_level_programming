#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - Adds new node at a position
 * @head: first node pointer
 * @idx: index to add node
 * @n: data in new node
 * Return: new node pointer or null
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int p;
	listint_t *tem, *new;

	if (head == NULL)
		return (NULL);
	if (idx != 0)
	{
		tem = *head;
		for (p = 0; p < idx - 1 && tem != NULL; p++)
		{
			tem = tem->next;
		}
		if (tem == NULL)
			return (NULL);
	}
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	new->next = tem->next;
	tem->next = new;
	return (new);
}
