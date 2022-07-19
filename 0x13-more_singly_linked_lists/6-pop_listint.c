#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list
 * @head: a pointer to the address of the first node of the list
 *
 * Return: the first node's data
 */
int pop_listint(listint_t **head)
{
	int headData;
	listint_t *ptr = *head;

	headData = (*head)->n;
	if (*head == NULL)
	{
		return (0);
	}
	*head = (*head)->next;
	free(ptr);
	ptr = NULL;
	return (headData);
}
