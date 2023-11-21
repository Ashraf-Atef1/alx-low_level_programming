#include "lists.h"
/**
 * find_listint_loop - find if the linked list has a loop or not
 * @head: pointer for a node in the linked list
 * Return: the loop node or null
 * Ashraf Atef
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *tortoise, *hare;

	if (head == NULL || head->next == NULL)
		return (NULL);
	tortoise = head->next;
	hare = head->next->next;
	while (hare != NULL && hare->next != NULL)
	{
		if (tortoise == hare)
		{
			tortoise = head;
			while (tortoise != hare)
			{
				tortoise = tortoise->next;
				hare = hare->next;
			}
			return (tortoise);
		}
		tortoise = tortoise->next;
		hare = hare->next->next;
	}
	return (NULL);
}
