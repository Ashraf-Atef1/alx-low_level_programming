#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table.
 * @size: The size of the hash table.
 *
 * This function creates a hash table with a given size. If memory allocation
 * fails, it returns NULL.
 *
 * Return: A pointer to the newly created hash table, or NULL if it fails.
 *
 * Authors: AhMeDMaGDY28
 * School: ALX CO 1 BLENDED
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table;
	hash_node_t **array_h;

	hash_table = malloc(sizeof(hash_table_t));
	if (!hash_table)
		return (NULL);
	array_h = calloc(size, sizeof(hash_node_t *));
	if (!array_h)
		return (NULL);
	hash_table->size = size;
	hash_table->array = array_h;
	return (hash_table);
}
