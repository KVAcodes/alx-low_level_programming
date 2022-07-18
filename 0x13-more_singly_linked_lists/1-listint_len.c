#include "lists.h"

/**
 * listint_len - prints all the elements of a listint_t singly linked list
 * @h: a pointer the first node of the list
 *
 * Return: the number of elememts in the linked list
 */
size_t listint_len(const listint_t *h)
{
	listint_t *ptr = (listint_t *)h;
	size_t nodeCount = 0;

	while (ptr != NULL)
	{
		nodeCount++;
		ptr = ptr->next;
	}
	return (nodeCount);
}
