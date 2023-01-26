#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list.
 * @head: head pointer
 * @n: number to be added.
 *
 * Return: the address of the new element, or NULL if it fails.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = NULL, *ptr = *head;

	new = malloc(sizeof(dlistint_t));

	if (!new)
		return (NULL);
	new->next = NULL;
	new->n = n;
	if (!(*head))
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}
	while (ptr->next)
		ptr = ptr->next;
	ptr->next = new;
	new->prev = ptr;

	return (new);
}
