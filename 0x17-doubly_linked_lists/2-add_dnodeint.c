#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list.
 * @head: head pointer.
 * @n: number to add to the beginning of the list.
 *
 * Return: the address of the new element, or NULL if it fails.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = NULL;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = (int)n;
	new->prev = NULL;
	new->next = *head;
	if (!(*head))
	{
		*head = new;
		return (new);
	}
	(*head)->prev = new;
	*head = new;

	return (new);
}
