#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t singly linked list
 * @h: a pointer the first node of the list
 *
 * Return: the number of nodes in the list
 */
size_t print_listint(const listint_t *h)
{
	listint_t *ptr = (listint_t *)h;
	size_t nodeCount = 0;

	while (ptr != NULL)
	{
		printf("%d\n", ptr->n);
		nodeCount++;
		ptr = ptr->next;
	}
	return (nodeCount);
}
