#include "lists.h"

/**
 * free_listint_safe - It frees a linked list
 * @h: point to the 1st node
 *
 * Return: num of elements in the list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t len = 0;
	int mdss;
	listint_t *temp;

	if (!h || !*h)
	return (0);

	while (*h)
	{
	mdss = *h - (*h)->next;
	if (mdss > 0)
	{
	temp = (*h)->next;
	free(*h);
	*h = temp;
	len++;
	}
	else
	{
	free(*h);
	*h = NULL;
	len++;
	break;
	}
	}
	*h = NULL;

	return (len);
}
