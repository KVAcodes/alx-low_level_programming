#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table.
 * @ht: pointer to the hash table you want to add or
 *	 update the key/value to.
 * @key: is the key
 * @value: value associated with the key.
 *
 * Return: 1 if it succeeded, 0 otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *node, *ptr;

	if (!ht || !key || !value || !strlen(key) || !strlen(value))
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	node = malloc(sizeof(hash_node_t));
	if (!node)
		return (0);
	node->key = strdup(key);

	ptr = ht->array[index];
	while (ptr)
	{
		if (!strcmp(ptr->key, key))
		{
			free(ptr->value);
			ptr->value = strdup(value);
			free(node->key);
			free(node);
			return (1);
		}
		ptr = ptr->next;
	}
	node->value = strdup(value);
	node->next = ht->array[index];
	ht->array[index] = node;

	return (1);
}
