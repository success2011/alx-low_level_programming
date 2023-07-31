#include "lists.h"

/**
 * get_nodeint_at_index - give node at a certain index in a linked
 * @head: 1st node in the linked list
 * @index: index of the node to given
 *
 * Return: pointer to NULL or the node we're searching for
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int v = 0;
	listint_t *temp = head;

	while (temp && v < index)
	{
	temp = temp->next;
	v++;
	}
	return (temp ? temp : NULL);
}
