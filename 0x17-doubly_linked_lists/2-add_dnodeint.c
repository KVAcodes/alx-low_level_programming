#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list.
 * @head: a pointer to the pointer to the first node of the list.
 * @n: the integer value to be added to the beginning of the list.
 *
 * Return: the address of the new element, or NULL if it failed.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);
	new->prev = NULL;
	new->n = n;
	if (*head == NULL)
	{
		new->next = NULL;
		*head = new;
		return (new);
	}
	(*head)->prev = new;
	new->next = *head;
	*head = new;

	return (new);
}
