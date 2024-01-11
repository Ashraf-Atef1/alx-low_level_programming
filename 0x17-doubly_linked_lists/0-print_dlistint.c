#include "lists.h"

/**
 * print_dlistint - print doubly linked list node
 * @h: the head node pointer
 * Return: size of the linked list
 */
size_t print_dlistint(const dlistint_t *h)
{
	int size = 0;

	for (; h; size++, h = h->next)
		printf("%d\n", h->n);
	return (size);
}
