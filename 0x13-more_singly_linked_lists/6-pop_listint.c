#include <unistd.h>
#include "lists.h"
/**
 * pop_listint - free head node in the linked list
 * @head: pointer for a node in the linked list
 * Return: poped node
 * Ashraf Atef
 */

int pop_listint(listint_t **head)
{
	int n = 0;

	if (*head)
	{
		listint_t *p = *head;
		*head = (*head)->next;
		n = p->n;
		free(p);
		return (n);
	}
	else
	{
		return (n);
	}
}
