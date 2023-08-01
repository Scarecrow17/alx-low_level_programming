#include "lists.h"

/**
 * sum_listint - calculate sum of all data in listint_t list
 * @head: first node pointer
 * Return: resulting sum
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
