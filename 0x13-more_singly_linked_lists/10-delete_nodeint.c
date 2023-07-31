#include "lists.h"

/**
 * delete_nodeint_at_index - remove the node in linked list in index
 * @head: pointer to the 1st element in the list
 * @index: index of the node to remove
 *
 * Return: -1 (Fail), or 1 (Success)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head;
	listint_t *current = NULL;
	unsigned int z = 0;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	while (z < index - 1)
	{
		if (!temp || !(temp->next))
			return (-1);
	temp = temp->next;
	z++;
	}

	current = temp->next;
	temp->next = current->next;
	free(current);

	return (1);
}
