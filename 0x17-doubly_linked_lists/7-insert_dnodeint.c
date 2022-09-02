#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node in a dlistint_t
 *                            list at a given position.
 * @h: A pointer to the head of the dlistint_t list.
 * @idx: The position to insert the new node.
 * @n: The integer for the new node to contain.
 *
 * Return: If the function fails - NULL.
 *         Otherwise - the address of the new node.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *node = get_dnodeint_at_index(*h, idx), *new;

	if (node == NULL) /* index out of bounds */
		return (NULL);
	if (idx == 0)
		return (add_dnodeint(h, n));
	if (node->next == NULL)
		return (add_dnodeint_end(h, n));
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
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

