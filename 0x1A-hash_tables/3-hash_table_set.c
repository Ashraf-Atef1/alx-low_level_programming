#include "hash_tables.h"

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx;
	hash_node_t *head;

	if (!ht)
		return (0);
	idx = key_index((const unsigned char *)key, ht->size);
	head = ht->array[idx];
	if (!head)
	{
		head = malloc(sizeof(hash_node_t));
		if (!head)
			return (0);
		head->key = (char *)key;
		head->value = (char *)value;
		head->next = NULL;
		return (1);
	}
	else
	{
		hash_node_t *current_node = head;
		while (current_node)
			if (!strcmp(current_node->key, key))
			{
				current_node->value = (char *)value;
				return (1);
			}

		current_node = malloc(sizeof(hash_node_t));
		if (!current_node)
			return (0);
		current_node->key = (char *)key;
		current_node->value = (char *)value;
		current_node->next = head;
		ht->array[idx] = current_node;
		return (1);
	}
}