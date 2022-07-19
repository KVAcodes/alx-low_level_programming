#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index of a listint_t list
 * @head: pointer to the address of the first node in the list
 * @index: the index of the node to be deleted from the list
 *
 * Return: 1 if it succeeds and -1 if it fails
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int var1;
	listint_t *ptr1 = NULL;
	listint_t *ptr2 = *head;

	if (*head == NULL)
	{
		return (-1);
	}

	if (index == 0)
	{
		*head = (*head)->next;
		free(ptr2);
		return (1);
	}

	var1 = 0;
	while (var1 < index && ptr2 != NULL)
	{
		ptr1 = ptr2;
		ptr2 = ptr2->next;
		var1++;
	}

	if (ptr2 == NULL)
	{
		return (-1);
	}

	ptr1->next = ptr2->next;
	free(ptr2);

	return (1);
}
