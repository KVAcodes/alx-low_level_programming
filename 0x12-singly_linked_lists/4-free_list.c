#include "lists.h"

/**
 * free_list - frees a list_t list and also the data it contains..
 * @head: a pointer to the first node of the list
 *
 * Return: Nothing
 */
void free_list(list_t *head)
{
	list_t *temp = head;

	while (temp != NULL)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
