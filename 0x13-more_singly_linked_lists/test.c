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
