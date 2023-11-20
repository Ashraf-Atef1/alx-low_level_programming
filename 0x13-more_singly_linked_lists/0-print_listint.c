#include <unistd.h>
#include "lists.h"
/**
 * print_listint - calculate the number of nodes and print them
 * @h: pointer for a node in the linked list
 * Return: number of nodes
 * Ashraf Atef
 */

size_t print_listint(const listint_t *h)
{
	size_t n = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		n++;
	}
	return (n);
}
