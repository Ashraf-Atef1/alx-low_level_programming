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
		newNode->next = cNode;
		cNode->prev->next = newNode;
		cNode->prev = newNode;
		return (newNode);
	}
	else
	{
		return (NULL);
	}
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
/**
 * dlistint_len -the size of doubly linked list
 * @h: the head node pointer
 * Return: size of the linked list
 */
size_t dlistint_len(const dlistint_t *h)
{
	return (h ? dlistint_len(h->next) + 1 : 0);
}
