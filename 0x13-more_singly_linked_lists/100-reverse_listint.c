#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list
 * @head: a pointer to the address of the first node of the linked list
 *
 * Return: a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *ptr1 = (*head)->next;
	listint_t *ptr2;

	if (head == NULL || *head == NULL)
		return (NULL);

	(*head)->next = NULL;

	while (ptr1 != NULL)
	{
		ptr2 = ptr1;
		ptr1 = ptr1->next;
		ptr2->next = *head;
		*head = ptr2;
	}
	return (*head);
}
