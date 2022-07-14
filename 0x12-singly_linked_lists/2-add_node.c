#include "lists.h"


/**
 * add_node - adds a new node of beginning of a linked list
 * @head: address of the pointer to the first node
 * @str: the string member of the beginning node to be created
 *
 * Return: the address of the new node or NULL if failed
 */
list_t *add_node(list_t **head, const char *str)
{
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
	ptr->len = (int)strlen(str);

	ptr->next = *head;
	*head = ptr;
	return (*head);
}
