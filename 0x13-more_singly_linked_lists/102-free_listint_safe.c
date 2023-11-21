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

	while ((*h))
	{
		listint_t *temp = (listint_t *)(*h);

		(*h) = (*h)->next;
		temp->next = NULL;
		free(temp);
		n++;
	}
	return (n);
}
