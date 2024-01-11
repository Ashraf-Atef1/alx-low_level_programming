#include "lists.h"

/**
 * add_dnodeint - add a new node to the linked list at the start
 * @head: the head node pointer
 * @n: the value of the new node
 * Return: a pointer the new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));

	new->n = n;
	new->prev = NULL;
	if (head && *head)
	{
		new->next = *head;
		(*head)->prev = new;
	}
	else
		new->next = NULL;
	*head = new;
	return (new);
}
