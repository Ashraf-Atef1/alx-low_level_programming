#include <unistd.h>
#include "lists.h"
/**
 * add_nodeint_end - calculate the number of nodes
 * @head: pointer for a node in the linked list
 * @n: number to store in head
 * Return: number of nodes
 * Ashraf Atef
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *p = malloc(sizeof(listint_t));
	listint_t *n_head = *head;

	if (!p)
	{
		free(p);
		return (NULL);
	}
	p->n = n;

	while (n_head && n_head->next)
	{
		n_head = n_head->next;
	}

	if (n_head)
	{
		n_head->next = p;
	}
	else
	{
		*head = p;
	}
	return (p);
}
