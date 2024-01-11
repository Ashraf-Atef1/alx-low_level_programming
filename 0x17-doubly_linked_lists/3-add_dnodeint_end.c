#include "lists.h"

/**
 * add_dnodeint_end - add a new node to the linked list at the end
 * @head: the head node pointer
 * @n: the value of the new node
 * Return: a pointer the new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *tail = NULL, *newNode = malloc(sizeof(dlistint_t)),
			   *c_head = NULL;

	if (!newNode)
		return (NULL);
	newNode->n = n;
	newNode->next = NULL;
	if (head && *head)
		c_head = *head;
	while (c_head)
		tail = c_head,
		c_head = c_head->next;
	if (tail)
	{
		tail->next = newNode;
	}
	else
		*head = newNode;
	newNode->prev = tail;
	return (newNode);
}
