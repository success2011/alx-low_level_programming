#include "lists.h"

/**
 * pop_listint - Remove the head node of a linked
 * @head: Pointer to the 1st element in the linked
 *
 * Return: Data inside the elements that was remove,
 * or empty list if it is 0
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int number;

	if (!head || !*head)
	return (0);

	number = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (number);
}
