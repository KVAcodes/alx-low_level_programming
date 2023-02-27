#include "hash_tables.h"

/**
 * key_index - returns the index at which the key/value pair
 *	       should be stored in the array of the hash table.
 * @key: is the key to be stored and from which the index in the
 *	 array is found using the djb2 algorithm.
 * @size: size of the array of the hash table.
 * Return: the index.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}

