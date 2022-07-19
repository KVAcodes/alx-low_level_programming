#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 * @head: a pointer to the address of the first node in the list
 *
 * Return: Nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *ptr;

	if (head == NULL)
	{
		return;
	}

	while (ptr != NULL)
	{
		ptr = (*head)->next;
		free(*head);
		(*head) = ptr;
	}
	head = NULL;
}
