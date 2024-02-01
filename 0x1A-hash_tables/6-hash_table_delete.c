#include "hash_tables.h"
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t **array;
	long unsigned int i = 0;

	if (!ht)
		return;

	array = ht->array;
	while (i++ < ht->size)
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
	}
	free(array);
	free(ht);
}
