#include "lists.h"

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

