#include <unistd.h>
#include "lists.h"
/**
 * sum_listint - sum all values in the linked list
 * @head: pointer for a node in the linked list
 * Return: the sum value
 * Ashraf Atef
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
