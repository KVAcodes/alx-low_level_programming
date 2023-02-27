#include "hash_tables.h"

/* hash_table_create - creates a hash table.
 * size: the size of the array.
 *
 * Return: a pointer to the newly created hash table,
 *	   else NULL if something goes wrong.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new = NULL;

	new = malloc(sizeof(hash_table_t));
	if (new == NULL)
		return NULL;
	new->size = size;
	if (size > 0)
	{
		new->array = malloc((size_t)size * sizeof(hash_node_t *));
		if (new->array == NULL)
			return(NULL);
	}
	return (new);
}
