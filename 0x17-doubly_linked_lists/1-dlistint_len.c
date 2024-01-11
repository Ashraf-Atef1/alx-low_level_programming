#include "lists.h"

/**
 * dlistint_len -the size of doubly linked list
 * @h: the head node pointer
 * Return: size of the linked list
 */
size_t dlistint_len(const dlistint_t *h)
{
	return (h ? dlistint_len(h->next) + 1 : 0);
}
