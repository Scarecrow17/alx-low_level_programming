#include "lists.h"

/**
 * get_nodeint_at_index - nth node of a listint_t linked list
 * @head: first node pointer
 * @index: node index to return
 * Return: pointer to index, or NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int p = 0;
	listint_t *tem = head;


	while (tem && p < index)
	{
		tem = tem->next;
		p++;
	}

	return (tem ? tem : NULL);
}
