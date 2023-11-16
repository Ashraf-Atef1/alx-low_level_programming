#include "lists.h"
void print_num(int n);
/**
 * add_node - add nodes to the link list
 * @head: pointer for the first node in the linked list
 * @str: string to be in the new node
 * Return: address of the new node
 * Ashraf Atef
 */

list_t *add_node(list_t **head, const char *str)
{
	int str_size = 0;
	list_t *new_node = malloc(sizeof(list_t));

	if (!new_node)
	{
		free(new_node);
		return (NULL);
	}
	while (str[str_size])
		str_size++;
	new_node->str = strdup(str);
	new_node->len = str_size;
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
