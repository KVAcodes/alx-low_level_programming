#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: The hash table the key/value is to be added to.
 * @key: is the key and mustn't be an empty string
 * @value: value associated with the key, can be an empty
 *	   string.
 * Return: 1 if it succeeded, 0 otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new = NULL, *ptr;

	if (strlen(key) == 0 || key == NULL)
		return (0);

	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
		return (0);
	new->key = (char *)key;
	new->value = strdup(value);
	new->next = NULL;

	index = key_index((const unsigned char *)key, ht->size);
	ptr = ht->array[index];

	while (ptr)
	{
		if (!strcmp(ptr->key, key))
		{
			ptr->value = (char *)value;
			free(new->value);
			free(new);
			return (1);
		}
		ptr = ptr->next;
	}
	new->next = ht->array[index];
	ht->array[index] = new;
	return (1);
}
