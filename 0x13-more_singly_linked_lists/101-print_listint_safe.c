#include "lists.h"

/*
 * looped_list_length - finds the length of a singly linked list
 * even if its a looped one.
 * @head: the address of the first node.
 *
 * Return: the length of the list.
 */
size_t looped_list_length(listint_t *head)
{
	unsigned int len, loopNodeCount = 0;
	listint_t *slow = head;
	listint_t *fast = head;

	/* checking if the list is looped or not */
	while (slow != fast || fast != NULL)
	{
		fast = fast->next->next;
		slow = slow->next;
	}
	if (slow == fast)
	{
		slow = head;
		while (slow != fast)
		{
			fast = fast->next;
			slow = slow->next;
		}
		slow = head;
		while (loopNodeCount != 2)
		{
			slow = slow->next;
			len++;
			if (slow == fast)
			{
				loopNodeCount++;
			}
		}
		return (len);

	}
	else if (fast == NULL)
	{
		slow = head;
		while (slow != NULL)
		{
			slow = slow->next;
			len++;
		}
		return (len);
	}
	exit(98);
}
/**
 * print_listint_safe - prints all the elements of a
 * listint_t singly linked list
 * @head: a pointer the first node of the list
 *
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	unsigned int var1, len;
	listint_t *ptr = (listint_t *)head;

	if (head == NULL)
	{
		exit(98);
	}
	len = looped_list_length(ptr);
	var1 = 0;

	while (var1 < len)
	{
		printf("[%p] %d\n", (void *)ptr, ptr->n);
		var1++;
	}
	return (len);
}
