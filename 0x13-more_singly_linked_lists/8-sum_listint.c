#include "lists.h"

/**
 * sum_listint - compute the sum of data in a listint_t list
 * @head: 1st node in the linked
 *
 * Return: the sum
 */
int sum_listint(listint_t *head)
{
	int sum1 = 0;
	listint_t *temp = head;

	while (temp)
	{
	sum1 += temp->n;
	temp = temp->next;
	}

	return (sum1);
}
