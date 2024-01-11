#include "lists.h"

/**
 * sum_dlistint - get the sum of all nodes data
 * @head: the head node pointer
 * Return: the sum of all nodes data
 * Ashraf Atef
 */
int sum_dlistint(dlistint_t *head)
{
	return (head ? sum_dlistint(head->next) + head->n : 0);
}
