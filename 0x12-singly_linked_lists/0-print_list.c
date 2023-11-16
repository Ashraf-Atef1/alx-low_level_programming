#include <unistd.h>
#include "lists.h"
/**
 * print_list - calculate the number of nodes
 * @h: pointer for a node in the linked list
 * Return: number of nodes
 * Ashraf Atef
 */

size_t print_list(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		if (h->str)
			write(1, h->str, h->len);
		else
			write(1, "(nil)", 5);
		write(1, "\n", 1);
		h = h->next;
		n++;
	}
	return (n);
}
