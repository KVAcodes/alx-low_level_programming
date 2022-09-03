#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes a node from a dlistint_t
 *                            at a given index.
 * @head: A pointer to the head of the dlistint_t.
 * @index: The index of the node to delete.
 *
 * Return: Upon success - 1.
 *         Otherwise - -1.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *node = *head;
	unsigned int count = 0;

	while (count != index && node)
	{
		node = node->next;
		count++;
	}
	if (!node)
		return (-1);

	if (index == 0)
	{
		if (!(node->next))
		{
			free(node);
			*head = NULL;
			return (1);
		}
		node->next->prev = NULL;
		*head = node->next;
		free(node);
		node = NULL;
		return (1);
	}
	if (node->next == NULL)
	{
		node->prev->next = NULL;
		free(node);
		node = NULL;
		return (1);
	}
	node->prev->next = node->next;
	node->next->prev = node->prev;
	free(node);
	node = NULL;
	return (1);
}
