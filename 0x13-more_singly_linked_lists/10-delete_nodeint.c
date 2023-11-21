#include <unistd.h>
#include "lists.h"
/**
 * delete_nodeint_at_index - free a node in a specific index
 * @head: pointer for a node in the linked list
 * @index: index of node to free
 * Return: 1 if successful and -1 otherwise
 * Ashraf Atef
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *new_head = *head;
	unsigned int i = 0;

	if (index == 0 && new_head)
	{
		*head = new_head->next;
		free(new_head);
		return (1);
	}
	while (new_head && ++i < index)
	{
		new_head = new_head->next;
	}
	if (i == index && new_head && new_head->next)
	{
		listint_t *free_node = new_head->next;

		new_head->next = new_head->next->next;
		free(free_node);
		return (1);
	}

	return (-1);
}
