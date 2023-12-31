#include <unistd.h>
#include "lists.h"
/**
 * free_listint - free all nodes in the linked list
 * @head: pointer for a node in the linked list
 * Ashraf Atef
 */

void free_listint(listint_t *head)
{
	while (head && head->next)
	{
		listint_t *p = head;

		head = head->next;
		free(p);
	}
	if (head)
	{
		free(head);
	}
}
