#include <unistd.h>
#include "lists.h"
/**
 * add_nodeint - calculate the number of nodes
 * @head: pointer for a node in the linked list
 * @n: number to store in head
 * Return: number of nodes
 * Ashraf Atef
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *p = malloc(sizeof(listint_t));

	if (!p)
	{
		free(p);
		return (NULL);
	}
	p->n = n;

	if (*head)
	{
		p->next = *head;
		*head = p;
	}
	else
	{
		*head = p;
	}
	return (p);
}
