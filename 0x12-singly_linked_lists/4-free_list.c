#include "lists.h"

/**
 * free_list - free node from a node list
 * @head: pointer for the first node in the linked list
 * Ashraf Atef
 */

void free_list(list_t *head)
{
	while (head)
	{
		list_t *cr_head = head;

		head = head->next;
		free(cr_head->str);
		free(cr_head);
	}
}
