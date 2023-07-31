#include "lists.h"

/**
 * add_nodeint - adds node in at starting point of linked list
 * @head: pointer to 1st node in the list
 * @n: data to include in the new node
 *
 * Return: pointer NULL if it fails or pointer to the new node,
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
	return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
