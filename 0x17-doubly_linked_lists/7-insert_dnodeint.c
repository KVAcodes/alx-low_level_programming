#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @h: pointer to the pointer to the first node of the list.
 * @idx: index of the list where the new node should be added
 * starting from 0.
 * @n: the integer value to insert at position.
 *
 * Return: the address of the new node or NULL if it failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *node;
	unsigned int count = 0;

	new = malloc(sizeof(dlistint_t));
	new->n = n;
	if (*h == NULL)
	{
		new->prev = *h;
		new->next = NULL;
		*h = new;
		return (new);
	}
	if (idx == 0)
	{
		new->prev = NULL;
		new->next = *h;
		(*h)->prev = new;
		*h = new;
		return (new);
	}
	node = *h;
	while (count != idx && node)
	{
		node = node->next;
		count++;
	}
	if (count == idx)
	{
		new->prev = node->prev;
		new->next = node;
		node->prev->next = new;
		node->prev = new;
		return (new);
	}
	return (NULL);
}
