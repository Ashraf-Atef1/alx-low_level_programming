#include "lists.h"

/**
 * free_dlistint - free a doubly linked list
 * @head: the head node pointer
 * Ashraf Atef
 */
void free_dlistint(dlistint_t *head)
{
	while (head)
	{
		dlistint_t *temp = head;

		head = head->next;
		free(temp);
	}
}
