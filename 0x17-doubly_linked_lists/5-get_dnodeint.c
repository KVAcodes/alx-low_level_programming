#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked
 *			   list.
 * @head: head pointer.
 * @index: the index of the nth node.
 *
 * Return: ptr to the nth Node, NULL if the node doesn't exist.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int counter = 0;
	dlistint_t *ptr = head;

	if (!head)
		return (NULL);

	while (ptr && counter < index)
	{
		counter++;
		ptr = ptr->next;
	}
	return (ptr);
}
