#include "lists.h"

/**
 * get_dnodeint_at_index - get node at specific index
 * @head: the head node pointer
 * @index: the index of the node to get
 * Return: the required node or Null if the node didn't exsist
 * Ashraf Atef
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (i++ < index)
		if (head)
			head = head->next;
		else
			return (head);
	return (head);
}
