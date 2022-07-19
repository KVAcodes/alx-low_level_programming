#include "lists.h"

/**
 * free_listint - frees a listint_t list
 * @head: the address of the first node in the list
 *
 * Return: Nothing
 */
void free_listint(listint_t *head)
{
	listint_t *ptr = head;

	while (ptr != NULL)
	{
		ptr = head->next;
		free(head);
		head = ptr;
	}
}
