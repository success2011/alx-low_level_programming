#include "lists.h"

/**
 * add_nodeint_end - include the node at the end of the linked
 * @head: pointer to 1st element in the list
 * @n: data to include in the new element
 *
 * Return: pointer NULL if it fails or the new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *temp = *head;

	new = malloc(sizeof(listint_t));
	if (!new)
	return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
	*head = new;
	return (new);
	}
	while (temp->next)
	temp = temp->next;

	temp->next = new;

	return (new);
}
