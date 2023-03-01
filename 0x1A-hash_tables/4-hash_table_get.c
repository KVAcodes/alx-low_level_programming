#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key.
 * @ht: the hash table
 * @key: the key
 *
 * Return: the value, or NULL if the key couldn't be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *ptr;
	unsigned long int index;

	index = key_index((const unsigned char *)key, ht->size);

	ptr = ht->array[index];
	while (ptr)
	{
		if (!strcmp(ptr->key, key))
		{
			return (ptr->value);
		}

	}
	return (NULL);
}
