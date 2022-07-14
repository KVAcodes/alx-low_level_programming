#include "lists.h"

/**
 * print_list - prints all the elements of a list of structures
 * of type list_t
 * @h: a pointer to nodes of type list_t
 *
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	list_t *ptr = (list_t *)h;
	int nodeCount = 0;

	while (ptr != NULL)
	{
		nodeCount++;
		if (ptr->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", ptr->len, ptr->str);
		}
		ptr = ptr->next;
	}
	return (nodeCount);
}
