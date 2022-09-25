#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table.
 * @ht: the hash table.
 *
 * Return: Nothing.
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index = 0, flag = 0;
	hash_node_t *ptr = NULL;

	if (!ht)
		return;
	printf("{");

	while (index < ht->size)
	{
		ptr = ht->array[index];
		while (ptr)
		{
			if (flag)
				printf(", ");
			printf("'%s': '%s'", ptr->key, ptr->value);
			ptr = ptr->next;
			flag = 1;
		}
		index++;
	}
	printf("}\n");
}
