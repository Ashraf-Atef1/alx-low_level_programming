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
	listint_t *current, *next;
	listint_t *node_list[1000];
	size_t count = 0;

	if (h == NULL || *h == NULL)
		return (0);

	current = *h;

	while (current)
	{
		next = current->next;
		current->next = NULL;
		if (!is_loop(current, node_list))
		{
			node_list[count++] = current;
		}
		free(current);
		current = next;
	}
	*h = NULL;
	return (count);
}
/**
 * is_loop - check if there a linked list loop
 * @node: current node
 * @list: list of nodes
 * Return: 1 if there a loop and 0 otherwise
 * Ashraf Atef
 */
int is_loop(listint_t *node, listint_t *list[])
{
	int i = 0;

	while (list[i++])
	{
		if (list[i] == node)
			return (1);
	}
	return (0);
}