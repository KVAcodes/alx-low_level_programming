#include "lists.h"

/**
 * add_node_end - adds a whole node at the end of a linked list
 * @head: pointer to the address of the first node
 * @str: string content of the nodes to be added
 *
 * Return: the address of the new element or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp = *head;
	list_t *ptr = NULL;

	ptr = malloc(sizeof(list_t));

	if (ptr == NULL)
	{
		return (NULL);
	}
	if (str != NULL)
	{
		ptr->str = strdup(str);
	}
	ptr->len = strlen(str);
	ptr->next = NULL;

	if (temp == NULL)
	{
		*head = ptr;
		return (ptr);
	}
	else
	{
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
	}
	temp->next = ptr;
	return (ptr);
}
