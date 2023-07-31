#include "lists.h"

/**
 * find_listint_loop - look for the loop in a linked list
 * @head: list to search for
 *
 * Return: NULL or address of the node where the loop starts
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *notfast = head;
	listint_t *fast = head;

	if (!head)
	return (NULL);

	while (notfast && fast && fast->next)
	{
		fast = fast->next->next;
		notfast = notfast->next;
	if (fast == notfast)
	{
	notfast = head;
	while (notfast != fast)
	{
	notfast = notfast->next;
	fast = fast->next;
	}
	return (fast);
	}
	}

	return (NULL);
}
