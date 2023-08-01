#include "lists.h"

/**
 * find_listint_loop - find loop in linked list
 * @head: start of list pointer
 * Return: loop starting point, or NULL
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *brady = head;
	listint_t *tachy = head;

	if (!head)
		return (NULL);

	while (brady && tachy && brady->next)
	{
		tachy = tachy->next->next;
		brady = brady->next;
		if (tachy == brady)
		{
			brady = head;
			
			while (brady != tachy)
			{
				brady = brady->next;
				tachy = tachy->next;
			}

			return (tachy);
		}
	}

	return (NULL);
}
