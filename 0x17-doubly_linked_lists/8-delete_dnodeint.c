#include "lists.h"

/**
 * delete_dnodeint_at_index - delete node at the specific index
 * @head: the head for the linked list
 * @index: the index of the node to delete
 * Return: 1 if deleted or -1 if there an error
 * Ashraf Atef
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *delNode = get_dnodeint_at_index(*head, index);

	if (delNode)
		if (!index)
			if (delNode->next)
				*head = delNode->next, delNode->next->prev = NULL;
			else
				*head = delNode->next;
		else
		{

			if (delNode->next)
				delNode->prev->next = delNode->next, delNode->next->prev = delNode->prev;
			else
				delNode->prev->next = delNode->next;
		}
	else
		return (-1);
	free(delNode);
	return (1);
}

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