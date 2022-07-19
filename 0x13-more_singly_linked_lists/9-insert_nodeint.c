#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: a pointer to the address of the first node (0th index)
 * @idx: index of the list where the new node should be added
 * @n: the n content of the new node
 *
 * Return: the address of the new node or NULL if it fails
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int var1;
	listint_t *temp = *head;
	listint_t *ptr = malloc(sizeof(listint_t));

	if (ptr == NULL)
	{
		return (NULL);
	}
	ptr->n = n;

	if (idx == 0)
	{
		ptr->next = *head;
		*head = ptr;
	}
	var1 = 0;

	while (var1 < idx - 1 && temp != NULL)
	{
		temp = temp->next;
		var1++;
	}

	if (temp == NULL)
	{
		return (NULL);
	}

	ptr->next = temp->next;
	temp->next = ptr;
	return (ptr);
}
