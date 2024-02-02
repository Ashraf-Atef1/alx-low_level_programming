#include "hash_tables.h"

/**
 * hash_table_create - create a new hash table
 * @size: a hash table size
 * Return: a hash table pointer
 * Ashraf Atef
 */
hash_table_t *hash_table_create(unsigned long int size)
{

	hash_table_t *hs = malloc(sizeof(hash_table_t));

	if (!hs)
		return (NULL);
	hs->size = size;
	hs->array = (hash_node_t **)calloc(size, sizeof(hash_node_t *));
	if (!hs->array)
		return (NULL);
	return (hs);
}
