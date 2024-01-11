#include "lists.h"

/**
 * insert_dnodeint_at_index - add node at the specific index
 * @h: the head for the linked list
 * @idx: the index of the node to get
 * @n: the value for the new node
 * Return: the new node or Null if faild
 * Ashraf Atef
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	if (idx == 0)
		return (add_dnodeint(h, n));
	else if (idx == dlistint_len(*h))
		return (add_dnodeint_end(h, n));
	else if (idx < dlistint_len(*h))
	{
		dlistint_t *cNode = get_dnodeint_at_index(*h, idx);
		dlistint_t *newNode = malloc(sizeof(dlistint_t));

		if (!newNode)
			return (NULL);
		newNode->n = n;
		newNode->prev = cNode->prev;
		newNode->next = cNode->next;
		cNode->prev->next = newNode;
		cNode->prev = newNode;
		return (newNode);
	}
	else
	{
		return (NULL);
	}
}
