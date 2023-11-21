#include <unistd.h>
#include "lists.h"
/**
 * reverse_listint - reverse a linked list
 * @head: pointer for a node in the linked list
 * Return: a pointer of the reversed linked list
 * Ashraf Atef
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *old_head = *head;

	if (!*head || !(*head)->next)
	{
		return (*head);
	}
	*head = (*head)->next;
	old_head->next = NULL;
	while (*head)
	{
		listint_t *temp_head = old_head;

		old_head = *head;
		*head = (*head)->next;
		old_head->next = temp_head;
	}
	*head = old_head;
	return (old_head);
}
