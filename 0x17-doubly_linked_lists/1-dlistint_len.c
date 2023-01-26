#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a linked dlistint_t list.
 * @h: head pointer
 *
 * Return: The number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t node_count = 0;
	dlistint_t *ptr = (dlistint_t *)h;

	while (ptr)
	{
		node_count++;
		ptr = ptr->next;
	}
	return (node_count);
}
