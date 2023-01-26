#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list.
 * @head: head pointer.
 *
 * Return: Nothing (void function).
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *ptr_1 = NULL, *ptr_2 = head;

	while (ptr_2)
	{
		ptr_1 = ptr_2;
		ptr_2 = ptr_2->next;
		free(ptr_1);
	}
}
