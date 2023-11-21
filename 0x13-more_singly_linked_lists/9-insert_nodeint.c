#include <unistd.h>
#include "lists.h"
/**
 * insert_nodeint_at_index - add a node in a specific index
 * @head: pointer for a node in the linked list
 * @idx: index of node to add
 * @n: the number in the node
 * Return: the added node
 * Ashraf Atef
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_head = *head;
	listint_t *new_node = malloc(sizeof(listint_t));
	unsigned int i = 0;

	if (!new_node)
	{
		free(new_node);
		return (NULL);
	}

	new_node->n = n;
	while (new_head && ++i < idx)
	{
		new_head = new_head->next;
	}
	if (i == idx && new_head)
	{
		new_node->next = new_head->next;
		new_head->next = new_node;
		return (new_node);
	}
	free(new_node);
	return (NULL);
}
