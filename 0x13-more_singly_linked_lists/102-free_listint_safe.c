#include <unistd.h>
#include "lists.h"
/**
 * free_listint_safe - free the linked list safly
 * @h: pointer for a node in the linked list
 * Return: number of nodes
 * Ashraf Atef
 */

size_t free_listint_safe(listint_t **h)
{
	size_t n = 0;
	listint_t *slow = (listint_t *)*h;
	listint_t *fast = (listint_t *)*h;

	if (h == NULL || *h == NULL)
		return (0);

	while (fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;

		if (slow == fast)
		{
			*h = NULL;
			break;
		}
	}

	while (*h)
	{
		listint_t *temp = *h;
		*h = (*h)->next;
		free(temp);
		n++;
	}

	return (n);
}
