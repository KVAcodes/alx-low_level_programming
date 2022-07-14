#include "lists.h"


/**
 * list_len - this function returns the number of elements in
 * a linked list given the a pointer to the first node
 * @h: a pointer to the first node of the linked list
 *
 * Return: the no of nodes in the linked list
 */
size_t list_len(const list_t *h)
{
	list_t *ptr = (list_t *)h;
	size_t nodeCount = 0;

	while (ptr != NULL)
	{
		nodeCount++;
		ptr = ptr->next;
	}
	return (nodeCount);
}
