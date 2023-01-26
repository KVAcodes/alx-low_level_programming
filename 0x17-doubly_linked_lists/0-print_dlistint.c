#include "lists.h"


/**
 * print_dlistint - prints all the elements of the dlistint_t list.
 * @h: The head of the list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t nodes_count = 0;
	dlistint_t *ptr = (dlistint_t *)h;

	while (ptr)
	{
		nodes_count++;
		printf("%d\n", ptr->n);
		ptr = ptr->next;
	}
	return (nodes_count);
}
