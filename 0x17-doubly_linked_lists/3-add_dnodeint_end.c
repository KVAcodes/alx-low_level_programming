#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a
 * dlistint_t list.
 * @head: a pointer to the pointer to the first node
 * in the list.
 * @n: the integer to be added at the end.
 *
 * Return: the address of the new element, or NULL if
 * it failed.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *tmp;

	new = malloc(sizeof(dlistint_t));
	tmp = *head;
	new->next = NULL;
	new->n = n;
	if (*head == NULL)
	{
		new->prev = *head;
		*head = new;
		return (new);
	}
	while (tmp->next)
		tmp = tmp->next;
	new->prev = tmp;
	tmp->next = new;

	return (new);
}
