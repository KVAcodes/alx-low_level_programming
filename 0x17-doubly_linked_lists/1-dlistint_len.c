#include "lists.h"

/**
 * dlistint_len - returns the number of elements of a
 * linked dlistint_t list.
 * @h: head pointer to the dlistint_t list.
 *
 * Return: the number of elements.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	if (h == NULL)
		return (0);
	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
