#include "hash_tables.h"

hash_table_t *hash_table_create(unsigned long int size)
{

	hash_table_t *hs = malloc(sizeof(hash_table_t));
	long unsigned int i;

	hs->size = size;
	hs->array = (hash_node_t **)malloc(size * sizeof(hash_node_t *));
	for (i = 0; i < hs->size; i++)
		hs->array[i] = NULL;
	return (hs);
}
