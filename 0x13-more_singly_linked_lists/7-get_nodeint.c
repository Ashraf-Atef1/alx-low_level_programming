#include <unistd.h>
#include "lists.h"
/**
 * get_nodeint_at_index - free a node in a specific index
 * @head: pointer for a node in the linked list
 * @index: index of node to be freed
 * Return: the freed node
 * Ashraf Atef
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head && i < index)
	{
		head = head->next;
		i++;
	}
	if (i == index && head)
	{
		return (head);
	}
	return (NULL);
}
