#include "hash_tables.h"

/**
 * key_index - create the index of hash table array to add or get an element
 * @key: a string to hash
 * @size: size of the hash table
 * Return: the index of hash table array
 * Ashraf Atef
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
