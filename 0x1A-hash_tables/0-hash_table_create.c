#include "hash_tables.h"

hash_table_t *hash_table_create(unsigned long int size)
{

	hash_table_t *hs = malloc(sizeof(hash_table_t));

	hs->size = size;
	hs->array = (hash_node_t **)calloc(size, sizeof(hash_node_t *));
	return (hs);
}
