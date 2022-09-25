#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table.
 * @ht: the hash table.
 *
 * Return: Nothing(void).
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int index = 0;
	hash_node_t *ptr = NULL, *tmp = NULL;

	if (!ht)
		return;
	while (index < ht->size)
	{
		ptr = ht->array[index];
		while (ptr)
		{
			tmp = ptr->next;
			free(ptr->key);
			free(ptr->value);
			free(ptr);
			ptr = tmp;
		}
		index++;
	}
	free(ht->array);
	free(ht);
}
