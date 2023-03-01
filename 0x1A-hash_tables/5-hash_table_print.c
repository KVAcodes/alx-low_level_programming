#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table.
 * @ht: the hash table.
 *
 * Return: Nothing(void function)
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t **array = ht->array;
	unsigned long int size = ht->size, count = 0, flag = 0;
	hash_node_t *ptr = NULL;

	if (!ht)
		return;

	printf("{");
	while (count < size)
	{
		ptr = array[count];
		while (ptr)
		{
			if (flag)
				printf(", ");
			printf("'%s': '%s'", ptr->key, ptr->value);
			ptr = ptr->next;
			flag = 1;
		}
		count++;
	}
	printf("}\n");
}
