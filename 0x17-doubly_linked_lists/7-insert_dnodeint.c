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
	node = get_dnodeint_at_index(*h, idx);
	if (!node)
	{
		free(new);
		return (NULL);
	}
	if (node->next == NULL)
	{
		new->prev = node;
		new->next = NULL;
		node->next = new;
		return (new);
	}
	new->prev = node->prev;
	new->next = node;
	node->prev->next = new;
	node->prev = new;
	return (new);
}

/**
 * get_dnodeint_at_index - returns the nth node of a
 * dlistint_t linked list.
 * @head: pointer to the first node in the list.
 * @index: index of the node, starting from 0.
 *
 * Return: the address of the nth node, Otherwise
 * NULL if the node doesn't exist.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;
	dlistint_t *ret = NULL;

	if (head == NULL)
		return (NULL);
	while (count != index && head)
	{
		head = head->next;
		count++;
	}
	ret = (count == index) ? head : NULL;

	return (ret);
}

