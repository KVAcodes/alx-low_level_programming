#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list
 * @head: a pointer to the address of the first node of the linked list
 *
 * Return: a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *ptr1;
	listint_t *ptr2;

	if (head == NULL || *head == NULL)
	{
		return (NULL);
	}

	ptr2 = NULL;

	while ((*head)->next != NULL)
	{
		ptr1 = (*head)->next;
		(*head)->next = ptr2;
		ptr2 = *head;
		*head = ptr1;
	}
	(*head)->next = ptr2;
	return (*head);
}
