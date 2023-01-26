#include "lists.h"

/**
 * insert_dnodeint_at_index - insets a new node at a given position.
 * @h: address of the head pointer.
 * @idx: index of insertion.
 * @n: number to insert.
 *
 * Return: the address of the new node, or NULL if it fails
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int count = 0;
	dlistint_t *ptr = *h, *new = NULL;

	if (idx == 0)
		return (add_dnodeint(h, n));

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;

	while (ptr && count < idx)
	{
		ptr = ptr->next;
		count++;
	}
	if (!ptr)
	{
		free(new);
		return (NULL);
	}
	new->next = ptr;
	new->prev = ptr->prev;
	ptr->prev->next = new;
	ptr->prev = new;

	return (new);
}
