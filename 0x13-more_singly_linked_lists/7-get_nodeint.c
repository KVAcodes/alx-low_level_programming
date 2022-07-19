#include "lists.h"

/**
 * get_nodeint_at_index - returns the address of any node given it's index
 * @head: address of the first node
 * @index: the node's index starting from 0
 *
 * Return: the nth node of a listint_t linked list or NULL if the node
 * doesn't exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int var1 = 0;

	if (index == 0)
	{
		return (head);
	}

	while (var1 < index && head != NULL)
	{
		head = head->next;
		var1++;
	}
	if (head == NULL)
	{
		return (NULL);
	}
	return (head);
}

