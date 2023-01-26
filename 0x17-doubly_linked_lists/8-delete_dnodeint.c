#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index of a dlistint_t linked
 *			      list.
 * @head: address of the head pointer.
 * @index: the index of the node that should be deleted. index starts at 0
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *ptr = *head;
	unsigned int count = 0;

	if (!(*head))
		return (-1);
	while (count < index && ptr)
	{
		ptr = ptr->next;
		count++;
	}
	if (!ptr)
		return (-1);
	if (index == 0)
	{
		if (!(ptr->next))
		{
			free(ptr);
			*head = NULL;
			return (1);
		}
		ptr->next->prev = NULL;
		*head = ptr->next;
		free(ptr);
		return (1);
	}
	if (!(ptr->next))
	{
		ptr->prev->next = NULL;
		free(ptr);
		return (1);
	}
	ptr->prev->next = ptr->next;
	ptr->next->prev = ptr->prev;
	free(ptr);
	return (1);
}
