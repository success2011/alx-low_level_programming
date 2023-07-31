#include "lists.h"
#include <stdio.h>

/**
 * looped_listint_len -  number of unique nodes
 * @head: point to the head of the listint_t
 *
 * Return: 0 If the list is not looped
 * If not - the number of unique nodes.
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *man, *hare;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
	return (0);

	man = head->next;
	hare = (head->next)->next;

	while (hare)
	{
		if (man == hare)
	{
		man = head;
	while (man != hare)
	{
	nodes++;
	man = man->next;
	hare = hare->next;
	}

	man = man->next;
	while (man != hare)
	{
	nodes++;
	man = man->next;
	}

	return (nodes);
	}

	man = man->next;
	hare = (hare->next)->next;
	}

	return (0);
}
/**
 * print_listint_safe - A listint_t list safely.
 * @head: A point to the head of the listint_t
 *
 * Return: The num of nodes.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes, index = 0;

	nodes = looped_listint_len(head);

	if (nodes == 0)
	{
		for (; head != NULL; nodes++)
		{
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		}
	}

	else
	{
		for (index = 0; index < nodes; index++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (nodes);
}
