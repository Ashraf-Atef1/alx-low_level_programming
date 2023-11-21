#include "lists.h"

int is_loop(listint_t *node, listint_t *list[]);
/**
 * free_listint_safe - free the linked list safly
 * @h: pointer for a node in the linked list
 * Return: number of nodes
 * Ashraf Atef
 */

size_t free_listint_safe(listint_t **h)
{
	size_t nodes_freed = 0;
	int address_diff;
	listint_t *current_node;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		address_diff = *h - (*h)->next;

		if (address_diff > 0)
		{
			current_node = (*h)->next;
			free(*h);
			*h = current_node;
			nodes_freed++;
		}
		else
		{
			free(*h);
			*h = NULL;
			nodes_freed++;
			break;
		}
	}

	*h = NULL;
	return (nodes_freed);
}
