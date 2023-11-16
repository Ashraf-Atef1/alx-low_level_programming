#include <unistd.h>
#include "lists.h"
void print_num(int n);
/**
 * list_len - calculate the number of nodes
 * @h: pointer for a node in the linked list
 * Return: number of nodes
 * Ashraf Atef
 */

size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		h = h->next;
		n++;
	}
	return (n);
}
