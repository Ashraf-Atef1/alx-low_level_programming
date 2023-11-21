#include <unistd.h>
#include "lists.h"
/**
 * print_listint_safe - calculate the number of nodes and print them
 * @head: pointer for a node in the linked list
 * Return: number of nodes
 * Ashraf Atef
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t i;
	size_t n = 0;
	const listint_t *node_list[100];

	while (head)
	{
		for (i = 0; i <= n; i++)
			if (node_list[i] == head)
				return (n);
		node_list[n] = head;
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		n++;
	}
	return (n);
}
