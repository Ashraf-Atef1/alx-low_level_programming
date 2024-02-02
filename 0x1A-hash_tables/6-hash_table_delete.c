#include "hash_tables.h"

/**
 * hash_table_delete - delete the hash table
 * @ht: a hash table pointer
 * Return: void
 * Ashraf Atef
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t **array;
	unsigned long int i = 0;

	if (!ht)
		return;

	array = ht->array;
	while (i < ht->size)
	{
		hash_node_t *head = array[i];

		while (head)
		{
			hash_node_t *curent_node = head;

			head = head->next;
			free(curent_node->key);
			free(curent_node->value);
			free(curent_node);
		}
		i++;
	}
	free(array);
	free(ht);
}
