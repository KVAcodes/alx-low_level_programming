#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table.
 * @size: size of the array.
 *
 * Return: a pointer to the newly creates hash table,
 *	   otherwise NULL if something went wrong.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht = malloc(sizeof(hash_table_t));

	if (!ht)
		return (NULL);
	ht->size = size;

	if (size > 0)
	{
		ht->array = malloc(sizeof(hash_node_t *) * size);
		if (!ht->array)
			return (NULL);
	}

	return (ht);
}
