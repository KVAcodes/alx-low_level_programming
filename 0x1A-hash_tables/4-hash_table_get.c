#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key
 *		    from the hashtable.
 * @ht: the hash table.
 * @key: the key string.
 *
 * Return: the value associated with the element
 *	   or NULL if the key couldn't be found.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *ptr = NULL;

	if (!ht || !key)
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);
	ptr = ht->array[index];

	while (ptr)
	{
		if (!strcmp(ptr->key, key))
			return (ptr->value);
		ptr = ptr->next;
	}
	return (NULL);
}
