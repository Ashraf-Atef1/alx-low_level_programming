#include "hash_tables.h"

hash_table_t *hash_table_create(unsigned long int size)
{

	hash_table_t *hs = malloc(sizeof(hash_table_t));
	unsigned long int i = 0;

	if (!hs)
		return (NULL);
	hs->size = size;
	hs->array = (hash_node_t **)calloc(size, sizeof(hash_node_t *));
	if (!hs->array)
		return (NULL);
	for (; i < hs->size; i++)
		hs->array[i] = NULL;
	return (hs);
}
